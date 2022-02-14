
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;
 int FUNC_4 (int*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*,int ) ;

__attribute__((used)) static char *FUNC_8(char *VAR_2, char *VAR_3, char *VAR_4, int *VAR_5)
{

 if (FUNC_1(VAR_3) == -1) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }

 FUNC_2();

 char *VAR_6 = FUNC_5(VAR_2);

 FUNC_6();

 if (FUNC_1(VAR_4) == -1) {
  FUNC_4(VAR_5);
  FUNC_3(VAR_6);
  return ((void*)0);
 }

 if (VAR_6 && VAR_6[0]) {
  FUNC_0(VAR_6);
  FUNC_7(VAR_1, VAR_6, VAR_0);
  FUNC_3(VAR_6);
  return VAR_1;
 }

 FUNC_3(VAR_6);
 return ((void*)0);
}
