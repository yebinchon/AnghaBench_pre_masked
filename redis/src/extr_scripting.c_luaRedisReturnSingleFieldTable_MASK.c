
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;

int FUNC_7(lua_State *VAR_1, char *VAR_2) {
    if (FUNC_1(VAR_1) != 1 || FUNC_6(VAR_1,-1) != VAR_0) {
        FUNC_0(VAR_1, "wrong number or type of arguments");
        return 1;
    }

    FUNC_2(VAR_1);
    FUNC_3(VAR_1, VAR_2);
    FUNC_4(VAR_1, -3);
    FUNC_5(VAR_1, -3);
    return 1;
}
