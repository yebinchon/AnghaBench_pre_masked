
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



unsigned long FUNC_0(unsigned char *VAR_0, uint64_t VAR_1) {
    if (VAR_1 <= 127) {
        if (VAR_0) VAR_0[0] = VAR_1;
        return 1;
    } else if (VAR_1 < 16383) {
        if (VAR_0) {
            VAR_0[0] = VAR_1>>7;
            VAR_0[1] = (VAR_1&127)|128;
        }
        return 2;
    } else if (VAR_1 < 2097151) {
        if (VAR_0) {
            VAR_0[0] = VAR_1>>14;
            VAR_0[1] = ((VAR_1>>7)&127)|128;
            VAR_0[2] = (VAR_1&127)|128;
        }
        return 3;
    } else if (VAR_1 < 268435455) {
        if (VAR_0) {
            VAR_0[0] = VAR_1>>21;
            VAR_0[1] = ((VAR_1>>14)&127)|128;
            VAR_0[2] = ((VAR_1>>7)&127)|128;
            VAR_0[3] = (VAR_1&127)|128;
        }
        return 4;
    } else {
        if (VAR_0) {
            VAR_0[0] = VAR_1>>28;
            VAR_0[1] = ((VAR_1>>21)&127)|128;
            VAR_0[2] = ((VAR_1>>14)&127)|128;
            VAR_0[3] = ((VAR_1>>7)&127)|128;
            VAR_0[4] = (VAR_1&127)|128;
        }
        return 5;
    }
}
