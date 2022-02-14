
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;


 char* VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int * VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,char*,char*) ;

int FUNC_6(int VAR_2, char **VAR_3)
{
 char VAR_4[256];

 FUNC_5(VAR_4, sizeof(VAR_4), "%s_kern.o", VAR_3[0]);

 if (FUNC_1(VAR_4)) {
  FUNC_3("%s", VAR_0);
  return 1;
 }

 while (1) {
  FUNC_0(VAR_1[1]);
  FUNC_2();
  FUNC_4(5);
 }

 return 0;
}
