
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_buf ;
typedef int lua_State ;


 int FUNC_0 (int *,int *,unsigned char const*,size_t) ;

void FUNC_1(lua_State *VAR_0, mp_buf *VAR_1, const unsigned char *VAR_2, size_t VAR_3) {
    unsigned char VAR_4[5];
    int VAR_5;

    if (VAR_3 < 32) {
        VAR_4[0] = 0xa0 | (VAR_3&0xff);
        VAR_5 = 1;
    } else if (VAR_3 <= 0xff) {
        VAR_4[0] = 0xd9;
        VAR_4[1] = VAR_3;
        VAR_5 = 2;
    } else if (VAR_3 <= 0xffff) {
        VAR_4[0] = 0xda;
        VAR_4[1] = (VAR_3&0xff00)>>8;
        VAR_4[2] = VAR_3&0xff;
        VAR_5 = 3;
    } else {
        VAR_4[0] = 0xdb;
        VAR_4[1] = (VAR_3&0xff000000)>>24;
        VAR_4[2] = (VAR_3&0xff0000)>>16;
        VAR_4[3] = (VAR_3&0xff00)>>8;
        VAR_4[4] = VAR_3&0xff;
        VAR_5 = 5;
    }
    FUNC_0(VAR_0,VAR_1,VAR_4,VAR_5);
    FUNC_0(VAR_0,VAR_1,VAR_2,VAR_3);
}
