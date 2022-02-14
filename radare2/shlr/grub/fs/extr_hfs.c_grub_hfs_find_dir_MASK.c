
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_hfs_filerec {scalar_t__ type; } ;
struct grub_hfs_dirrec {int dirid; } ;
struct grub_hfs_data {int rootdir; int cat_root; } ;
struct grub_hfs_catalog_key {scalar_t__ str; scalar_t__ strlen; int parent_dir; } ;
typedef scalar_t__ grub_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct grub_hfs_data*,char*,int ,int ,char*,int) ;
 int FUNC_5 (struct grub_hfs_filerec*,struct grub_hfs_filerec*,int) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char*,char const*) ;
 char* FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static grub_err_t
FUNC_10 (struct grub_hfs_data *VAR_5, const char *VAR_6,
     struct grub_hfs_filerec *VAR_7, int *VAR_8)
{
  int VAR_9 = VAR_5->rootdir;
  char *VAR_10;
  char *VAR_11;
  union {
    struct grub_hfs_filerec frec;
    struct grub_hfs_dirrec dir;
  } VAR_12;

  VAR_12.frec.type = VAR_3;

  if (VAR_6[0] != '/')
    {
      FUNC_2 (VAR_0, "bad filename");
      return 0;
    }

  VAR_11 = FUNC_8 (VAR_6);
  if (!VAR_11)
    return VAR_4;

  VAR_6 = VAR_11;
  while (*VAR_6 == '/')
    VAR_6++;

  while (VAR_6 && FUNC_9 (VAR_6))
    {
      if (VAR_12.frec.type != VAR_3)
 {
   FUNC_2 (VAR_1, "not a directory");
   goto fail;
 }


      VAR_10 = FUNC_6 (VAR_6, '/');
      if (VAR_10)
 {
   while (*VAR_10 == '/')
     *(VAR_10++) = '\0';
 }

      struct grub_hfs_catalog_key VAR_13;

      VAR_13.parent_dir = FUNC_1 (VAR_9);
      VAR_13.strlen = FUNC_9 (VAR_6);
      FUNC_7 ((char *) (VAR_13.str), VAR_6);


      if (! FUNC_4 (VAR_5, (char *) &VAR_13, VAR_5->cat_root,
    0, (char *) &VAR_12.frec, sizeof (VAR_12.frec)))
 {
   FUNC_2 (VAR_2, "file not found");
   goto fail;
 }

      if (VAR_4)
 goto fail;

      VAR_9 = FUNC_0 (VAR_12.dir.dirid);
      VAR_6 = VAR_10;
    }

  if (VAR_7)
    FUNC_5 (VAR_7, &VAR_12.frec, sizeof (VAR_12.frec));

  if (VAR_8)
    *VAR_8 = VAR_9;

 fail:
  FUNC_3 (VAR_11);
  return VAR_4;
}
