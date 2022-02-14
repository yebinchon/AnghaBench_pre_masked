
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int data ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,int,char const*,int ) ;

int FUNC_4(char * VAR_0, const char * VAR_1, const char * VAR_2, va_list VAR_3)
{
 char VAR_4[64];
 char * VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_5) {
  return 0;
 }

 FUNC_3(VAR_4, sizeof(VAR_4), VAR_2, VAR_3);

 FUNC_0(VAR_5 + FUNC_1(VAR_4), VAR_5 + FUNC_1(VAR_1), FUNC_1(VAR_5 + FUNC_1(VAR_1)) + 1);
 FUNC_0(VAR_5, VAR_4, FUNC_1(VAR_4));

 return 1;
}
