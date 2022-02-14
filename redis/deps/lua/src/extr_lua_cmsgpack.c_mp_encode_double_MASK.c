
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_buf ;
typedef int lua_State ;
typedef int f ;
typedef int d ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,...) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int *,int *,unsigned char*,int) ;

void FUNC_4(lua_State *VAR_0, mp_buf *VAR_1, double VAR_2) {
    unsigned char VAR_3[9];
    float VAR_4 = VAR_2;

    FUNC_0(sizeof(VAR_4) == 4 && sizeof(VAR_2) == 8);
    if (VAR_2 == (double)VAR_4) {
        VAR_3[0] = 0xca;
        FUNC_1(VAR_3+1,&VAR_4,4);
        FUNC_2(VAR_3+1,4);
        FUNC_3(VAR_0,VAR_1,VAR_3,5);
    } else if (sizeof(VAR_2) == 8) {
        VAR_3[0] = 0xcb;
        FUNC_1(VAR_3+1,&VAR_2,8);
        FUNC_2(VAR_3+1,8);
        FUNC_3(VAR_0,VAR_1,VAR_3,9);
    }
}
