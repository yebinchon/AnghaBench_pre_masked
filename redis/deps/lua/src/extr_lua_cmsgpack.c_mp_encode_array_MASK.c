
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_buf ;
typedef int lua_State ;
typedef int int64_t ;


 int FUNC_0 (int *,int *,unsigned char*,int) ;

void FUNC_1(lua_State *VAR_0, mp_buf *VAR_1, int64_t VAR_2) {
    unsigned char VAR_3[5];
    int VAR_4;

    if (VAR_2 <= 15) {
        VAR_3[0] = 0x90 | (VAR_2 & 0xf);
        VAR_4 = 1;
    } else if (VAR_2 <= 65535) {
        VAR_3[0] = 0xdc;
        VAR_3[1] = (VAR_2 & 0xff00) >> 8;
        VAR_3[2] = VAR_2 & 0xff;
        VAR_4 = 3;
    } else {
        VAR_3[0] = 0xdd;
        VAR_3[1] = (VAR_2 & 0xff000000) >> 24;
        VAR_3[2] = (VAR_2 & 0xff0000) >> 16;
        VAR_3[3] = (VAR_2 & 0xff00) >> 8;
        VAR_3[4] = VAR_2 & 0xff;
        VAR_4 = 5;
    }
    FUNC_0(VAR_0,VAR_1,VAR_3,VAR_4);
}
