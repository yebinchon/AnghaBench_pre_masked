
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct image_desc {scalar_t__ out_size; scalar_t__ file_size; int * file_name; } ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,struct stat*) ;

int
FUNC_4(struct image_desc *VAR_2)
{
 struct stat VAR_3;
 int VAR_4;

 if (VAR_2->file_name == ((void*)0))
  return 0;

 VAR_4 = FUNC_3(VAR_2->file_name, &VAR_3);
 if (VAR_4){
  FUNC_0("stat failed on %s", VAR_2->file_name);
  return VAR_0;
 }

 if (VAR_3.st_size > VAR_2->out_size) {
  FUNC_1("file %s is too big, will be truncated to %d bytes\n",
   VAR_2->file_name, VAR_2->out_size);
  VAR_2->file_size = VAR_2->out_size;
  return VAR_1;
 }


 VAR_2->file_size = VAR_3.st_size;
 VAR_2->out_size = FUNC_2(VAR_2->file_size,1);
 return 0;
}
