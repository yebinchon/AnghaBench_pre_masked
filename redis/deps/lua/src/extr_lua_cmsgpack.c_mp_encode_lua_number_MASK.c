
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_buf ;
typedef int lua_State ;
typedef scalar_t__ lua_Number ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,double) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(lua_State *VAR_0, mp_buf *VAR_1) {
    lua_Number VAR_2 = FUNC_1(VAR_0,-1);

    if (FUNC_0(VAR_2)) {
        FUNC_3(VAR_0, VAR_1);
    } else {
        FUNC_2(VAR_0,VAR_1,(double)VAR_2);
    }
}
