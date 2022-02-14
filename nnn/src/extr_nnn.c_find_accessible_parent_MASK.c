
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*,int*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(char *VAR_2, char *VAR_3, char *VAR_4, int *VAR_5)
{
 char *VAR_6;


 FUNC_6(VAR_4, FUNC_4(VAR_2), VAR_0 + 1);

 FUNC_6(VAR_3, VAR_2, VAR_1);
 while (1) {
  VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_5);
  if (FUNC_1(VAR_2) || FUNC_1(VAR_3)) {
   if (!VAR_6)
    VAR_6 = FUNC_0(VAR_3);
   break;
  }
  if (!VAR_6) {
   FUNC_6(VAR_2, VAR_3, VAR_1);
   continue;
  }
  break;
 }

 FUNC_6(VAR_2, VAR_6, VAR_1);

 FUNC_2("cannot access dir");
 FUNC_5();
}
