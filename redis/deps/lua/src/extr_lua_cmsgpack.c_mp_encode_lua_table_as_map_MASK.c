
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_buf ;
typedef int lua_State ;


 int FUNC_0 (int *,int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int *,size_t) ;

void FUNC_7(lua_State *VAR_0, mp_buf *VAR_1, int VAR_2) {
    size_t VAR_3 = 0;





    FUNC_0(VAR_0, 3, "in function mp_encode_lua_table_as_map");
    FUNC_3(VAR_0);
    while(FUNC_1(VAR_0,-2)) {
        FUNC_2(VAR_0,1);
        VAR_3++;
    }


    FUNC_6(VAR_0,VAR_1,VAR_3);
    FUNC_3(VAR_0);
    while(FUNC_1(VAR_0,-2)) {

        FUNC_4(VAR_0,-2);
        FUNC_5(VAR_0,VAR_1,VAR_2+1);
        FUNC_5(VAR_0,VAR_1,VAR_2+1);
    }
}
