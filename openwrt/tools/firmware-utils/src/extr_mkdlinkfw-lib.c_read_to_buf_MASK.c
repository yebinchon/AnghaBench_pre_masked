
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int file_name; int file_size; } ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 size_t FUNC_4 (char*,int ,int,int *) ;

int FUNC_5(const struct file_info *VAR_2, char *VAR_3)
{
 FILE *VAR_4;
 int VAR_5 = VAR_0;
 size_t VAR_6;

 VAR_4 = FUNC_3(VAR_2->file_name, "r");
 if (VAR_4 == ((void*)0)) {
  FUNC_0("could not open \"%s\" for reading", VAR_2->file_name);
  goto out;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_2->file_size, 1, VAR_4);
 if (FUNC_2(VAR_4) || VAR_6 != 1) {
  FUNC_0("unable to read from file \"%s\"", VAR_2->file_name);
  goto out_close;
 }

 VAR_5 = VAR_1;

 out_close:
 FUNC_1(VAR_4);
 out:
 return VAR_5;
}
