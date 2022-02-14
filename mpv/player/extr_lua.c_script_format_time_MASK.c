
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 double FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,char const*) ;
 char* FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (char const*,double) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_0)
{
    double VAR_1 = FUNC_0(VAR_0, 1);
    const char *VAR_2 = FUNC_2(VAR_0, 2, "%H:%M:%S");
    char *VAR_3 = FUNC_4(VAR_2, VAR_1);
    if (!VAR_3)
        FUNC_1(VAR_0, "Invalid time format string '%s'", VAR_2);
    FUNC_3(VAR_0, VAR_3);
    FUNC_5(VAR_3);
    return 1;
}
