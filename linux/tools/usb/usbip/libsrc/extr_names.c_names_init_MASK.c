
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;

int FUNC_3(char *VAR_1)
{
 FILE *VAR_2;

 VAR_2 = FUNC_1(VAR_1, "r");
 if (!VAR_2)
  return VAR_0;

 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 return 0;
}
