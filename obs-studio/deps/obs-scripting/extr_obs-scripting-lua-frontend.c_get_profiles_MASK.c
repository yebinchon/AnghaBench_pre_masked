
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,int) ;
 char** FUNC_4 () ;

__attribute__((used)) static int FUNC_5(lua_State *VAR_0)
{
 char **VAR_1 = FUNC_4();
 char **VAR_2 = VAR_1;
 int VAR_3 = 0;

 FUNC_1(VAR_0);

 while (VAR_2 && *VAR_2) {
  FUNC_2(VAR_0, *VAR_2);
  FUNC_3(VAR_0, -2, ++VAR_3);
  VAR_2++;
 }

 FUNC_0(VAR_1);
 return 1;
}
