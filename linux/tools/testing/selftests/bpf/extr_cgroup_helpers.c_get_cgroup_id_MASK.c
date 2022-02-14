
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_handle {int handle_bytes; int f_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct file_handle* FUNC_0 (int,int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct file_handle*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (int,char*,struct file_handle*,int*,int) ;
 struct file_handle* FUNC_6 (struct file_handle*,int) ;

unsigned long long FUNC_7(const char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 union {
  unsigned long long cgid;
  unsigned char raw_bytes[8];
 } VAR_8;
 char VAR_9[VAR_1 + 1];
 struct file_handle *VAR_10, *VAR_11;
 unsigned long long VAR_12 = 0;

 FUNC_1(VAR_9, VAR_2);

 VAR_3 = VAR_0;
 VAR_5 = 0;
 VAR_7 = sizeof(*VAR_10);
 VAR_10 = FUNC_0(1, VAR_7);
 if (!VAR_10) {
  FUNC_3("calloc");
  return 0;
 }
 VAR_4 = FUNC_5(VAR_3, VAR_9, VAR_10, &VAR_6, VAR_5);
 if (VAR_4 >= 0 || VAR_10->handle_bytes != 8) {
  FUNC_3("name_to_handle_at");
  goto free_mem;
 }

 VAR_7 = sizeof(struct file_handle) + VAR_10->handle_bytes;
 VAR_11 = FUNC_6(VAR_10, VAR_7);
 if (!VAR_11) {
  FUNC_3("realloc");
  goto free_mem;
 }
 VAR_4 = FUNC_5(VAR_3, VAR_9, VAR_11, &VAR_6, VAR_5);
 VAR_10 = VAR_11;
 if (VAR_4 < 0) {
  FUNC_3("name_to_handle_at");
  goto free_mem;
 }

 FUNC_4(VAR_8.raw_bytes, VAR_10->f_handle, 8);
 VAR_12 = VAR_8.cgid;

free_mem:
 FUNC_2(VAR_10);
 return VAR_12;
}
