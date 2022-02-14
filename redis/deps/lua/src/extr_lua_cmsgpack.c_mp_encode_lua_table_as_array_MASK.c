
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_buf ;
typedef int lua_State ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int) ;
 size_t FUNC_2 (int *,int) ;
 int FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,size_t) ;
 int FUNC_6 (int *,int *,int) ;

void FUNC_7(lua_State *VAR_0, mp_buf *VAR_1, int VAR_2) {

    size_t VAR_3 = FUNC_2(VAR_0,-1), VAR_4;




    FUNC_5(VAR_0,VAR_1,VAR_3);
    FUNC_0(VAR_0, 1, "in function mp_encode_lua_table_as_array");
    for (VAR_4 = 1; VAR_4 <= VAR_3; VAR_4++) {
        FUNC_3(VAR_0,VAR_4);
        FUNC_1(VAR_0,-2);
        FUNC_6(VAR_0,VAR_1,VAR_2+1);
    }
}
