
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _stringlist ;


 int FUNC_0 (int **,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, const char *VAR_1, _stringlist **VAR_2)
{
 char *VAR_3 = FUNC_2(VAR_0);
 char *VAR_4 = FUNC_3(VAR_3, VAR_1);

 while (VAR_4)
 {
  FUNC_0(VAR_2, VAR_4);
  VAR_4 = FUNC_3(((void*)0), VAR_1);
 }
 FUNC_1(VAR_3);
}
