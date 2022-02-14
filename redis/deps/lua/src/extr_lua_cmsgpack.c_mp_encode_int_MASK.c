
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_buf ;
typedef int lua_State ;
typedef int int64_t ;


 int FUNC_0 (int *,int *,unsigned char*,int) ;

void FUNC_1(lua_State *VAR_0, mp_buf *VAR_1, int64_t VAR_2) {
    unsigned char VAR_3[9];
    int VAR_4;

    if (VAR_2 >= 0) {
        if (VAR_2 <= 127) {
            VAR_3[0] = VAR_2 & 0x7f;
            VAR_4 = 1;
        } else if (VAR_2 <= 0xff) {
            VAR_3[0] = 0xcc;
            VAR_3[1] = VAR_2 & 0xff;
            VAR_4 = 2;
        } else if (VAR_2 <= 0xffff) {
            VAR_3[0] = 0xcd;
            VAR_3[1] = (VAR_2 & 0xff00) >> 8;
            VAR_3[2] = VAR_2 & 0xff;
            VAR_4 = 3;
        } else if (VAR_2 <= 0xffffffffLL) {
            VAR_3[0] = 0xce;
            VAR_3[1] = (VAR_2 & 0xff000000) >> 24;
            VAR_3[2] = (VAR_2 & 0xff0000) >> 16;
            VAR_3[3] = (VAR_2 & 0xff00) >> 8;
            VAR_3[4] = VAR_2 & 0xff;
            VAR_4 = 5;
        } else {
            VAR_3[0] = 0xcf;
            VAR_3[1] = (VAR_2 & 0xff00000000000000LL) >> 56;
            VAR_3[2] = (VAR_2 & 0xff000000000000LL) >> 48;
            VAR_3[3] = (VAR_2 & 0xff0000000000LL) >> 40;
            VAR_3[4] = (VAR_2 & 0xff00000000LL) >> 32;
            VAR_3[5] = (VAR_2 & 0xff000000) >> 24;
            VAR_3[6] = (VAR_2 & 0xff0000) >> 16;
            VAR_3[7] = (VAR_2 & 0xff00) >> 8;
            VAR_3[8] = VAR_2 & 0xff;
            VAR_4 = 9;
        }
    } else {
        if (VAR_2 >= -32) {
            VAR_3[0] = ((signed char)VAR_2);
            VAR_4 = 1;
        } else if (VAR_2 >= -128) {
            VAR_3[0] = 0xd0;
            VAR_3[1] = VAR_2 & 0xff;
            VAR_4 = 2;
        } else if (VAR_2 >= -32768) {
            VAR_3[0] = 0xd1;
            VAR_3[1] = (VAR_2 & 0xff00) >> 8;
            VAR_3[2] = VAR_2 & 0xff;
            VAR_4 = 3;
        } else if (VAR_2 >= -2147483648LL) {
            VAR_3[0] = 0xd2;
            VAR_3[1] = (VAR_2 & 0xff000000) >> 24;
            VAR_3[2] = (VAR_2 & 0xff0000) >> 16;
            VAR_3[3] = (VAR_2 & 0xff00) >> 8;
            VAR_3[4] = VAR_2 & 0xff;
            VAR_4 = 5;
        } else {
            VAR_3[0] = 0xd3;
            VAR_3[1] = (VAR_2 & 0xff00000000000000LL) >> 56;
            VAR_3[2] = (VAR_2 & 0xff000000000000LL) >> 48;
            VAR_3[3] = (VAR_2 & 0xff0000000000LL) >> 40;
            VAR_3[4] = (VAR_2 & 0xff00000000LL) >> 32;
            VAR_3[5] = (VAR_2 & 0xff000000) >> 24;
            VAR_3[6] = (VAR_2 & 0xff0000) >> 16;
            VAR_3[7] = (VAR_2 & 0xff00) >> 8;
            VAR_3[8] = VAR_2 & 0xff;
            VAR_4 = 9;
        }
    }
    FUNC_0(VAR_0,VAR_1,VAR_3,VAR_4);
}
