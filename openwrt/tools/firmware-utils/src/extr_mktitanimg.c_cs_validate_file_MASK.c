
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,unsigned long*,int) ;
 int FUNC_1 (int *,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;

int FUNC_5(char *VAR_0)
{
 FILE *VAR_1 = ((void*)0);
 unsigned long VAR_2 = 0, VAR_3 = 0;

 if((VAR_1 = FUNC_4(VAR_0, "r")) == ((void*)0))
  return 0;

 if(!FUNC_2(VAR_1))
 {
  FUNC_3(VAR_1);
  return 0;
 }
 if(!FUNC_0(VAR_1, &VAR_2, 1))
 {
  FUNC_3(VAR_1);
  return 0;
 }
 FUNC_1(VAR_1, &VAR_3);
 FUNC_3(VAR_1);

 if(VAR_2 != VAR_3)
  return 0;
 return 1;
}
