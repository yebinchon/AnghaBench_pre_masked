
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct file_info {int file_size; int * file_name; } ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *,struct stat*) ;

int FUNC_2(struct file_info *VAR_0)
{
 struct stat VAR_1;
 int VAR_2;

 if (VAR_0->file_name == ((void*)0))
  return 0;

 VAR_2 = FUNC_1(VAR_0->file_name, &VAR_1);
 if (VAR_2){
  FUNC_0("stat failed on %s", VAR_0->file_name);
  return VAR_2;
 }

 VAR_0->file_size = VAR_1.st_size;
 return 0;
}
