
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * pdb_streams2; int buf; } ;
typedef TYPE_1__ R_PDB ;


 int PDB7_SIGNATURE ;
 int PDB7_SIGNATURE_LEN ;
 int R_BUF_SET ;
 int R_FREE (int*) ;
 int R_MAX (int,int) ;
 scalar_t__ calloc (int,int) ;
 int count_pages (int,int) ;
 int ePDB_STREAM_ROOT ;
 int eprintf (char*) ;
 int init_pdb7_root_stream (TYPE_1__*,int*,int,int ,int,int) ;
 scalar_t__ memcmp (char*,int ,int) ;
 int pdb_read_root (TYPE_1__*) ;
 int r_buf_read (int ,void*,int) ;
 int r_buf_seek (int ,int,int ) ;
 int read_int_var (char*,int*,TYPE_1__*) ;

__attribute__((used)) static bool pdb7_parse(R_PDB *pdb) {
 char signature[PDB7_SIGNATURE_LEN + 1];
 int num_root_index_pages = 0;
 int *root_index_pages = 0;
 void *root_page_data = 0;
 int *root_page_list = 0;
 int num_root_pages = 0;
 int num_file_pages = 0;
 int alloc_tbl_ptr = 0;
 int bytes_read = 0;
 int page_size = 0;
 int root_size = 0;
 int reserved = 0;
 void *p_tmp;
 int i = 0;

 bytes_read = r_buf_read (pdb->buf, (unsigned char *) signature, PDB7_SIGNATURE_LEN);
 if (bytes_read != PDB7_SIGNATURE_LEN) {

  goto error;
 }
 if (!read_int_var ("page_size", &page_size, pdb)) {
  goto error;
 }
 if (!read_int_var ("alloc_tbl_ptr", &alloc_tbl_ptr, pdb)) {
  goto error;
 }
 if (!read_int_var ("num_file_pages", &num_file_pages, pdb)) {
  goto error;
 }
 if (!read_int_var ("root_size", &root_size, pdb)) {
  goto error;
 }
 if (!read_int_var ("reserved", &reserved, pdb)) {
  goto error;
 }
 if (memcmp (signature, PDB7_SIGNATURE, PDB7_SIGNATURE_LEN) != 0) {
  eprintf ("Invalid signature for PDB7 format.\n");
  goto error;
 }

 num_root_pages = count_pages (root_size, page_size);
 num_root_index_pages = count_pages ((num_root_pages * 4), page_size);
 root_index_pages = (int *) calloc (sizeof (int), R_MAX (num_root_index_pages, 1));
 if (!root_index_pages) {
  eprintf ("Error memory allocation.\n");
  goto error;
 }

 bytes_read = r_buf_read (pdb->buf, (unsigned char *) root_index_pages, 4 * num_root_index_pages);

 if (bytes_read != 4 * num_root_index_pages) {
  eprintf ("Error while reading root_index_pages.\n");
  goto error;
 }
 if (page_size < 1 || num_root_index_pages < 1) {
  eprintf ("Invalid root index pages size.\n");
  goto error;
 }
 root_page_data = (int *) calloc (page_size, num_root_index_pages);
 if (!root_page_data) {
  eprintf ("Error: memory allocation of root_page_data.\n");
  goto error;
 }
 p_tmp = root_page_data;
 for (i = 0; i < num_root_index_pages; i++) {
  r_buf_seek (pdb->buf, root_index_pages[i] * page_size,
      R_BUF_SET);
  r_buf_read (pdb->buf, p_tmp, page_size);
  p_tmp = (char *) p_tmp + page_size;
 }
 root_page_list = (int *) calloc (sizeof(int), num_root_pages);
 if (!root_page_list) {
  eprintf ("Error: memory allocation of root page.\n");
  goto error;
 }

 p_tmp = root_page_data;
 for (i = 0; i < num_root_pages; i++) {
  root_page_list[i] = *((int *) p_tmp);
  p_tmp = (int *) p_tmp + 1;
 }

 pdb->pdb_streams2 = ((void*)0);
 if (!init_pdb7_root_stream (pdb, root_page_list, num_root_pages,
      ePDB_STREAM_ROOT, root_size, page_size)) {
  eprintf ("Could not initialize root stream.\n");
  goto error;
 }
 if (!pdb_read_root (pdb)) {
  eprintf ("PDB root was not initialized.\n");
  goto error;
 }

 R_FREE (root_page_list);
 R_FREE (root_page_data);
 R_FREE (root_index_pages);
 return 1;
error:
 R_FREE (root_page_list);
 R_FREE (root_page_data);
 R_FREE (root_index_pages);
 return 0;
}
