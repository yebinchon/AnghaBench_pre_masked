
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char32_t ;



size_t FUNC_0(char *VAR_0, char32_t VAR_1) {

        if (VAR_1 < (1 << 7)) {
                if (VAR_0)
                        VAR_0[0] = VAR_1 & 0x7f;
                return 1;
        } else if (VAR_1 < (1 << 11)) {
                if (VAR_0) {
                        VAR_0[0] = 0xc0 | ((VAR_1 >> 6) & 0x1f);
                        VAR_0[1] = 0x80 | (VAR_1 & 0x3f);
                }
                return 2;
        } else if (VAR_1 < (1 << 16)) {
                if (VAR_0) {
                        VAR_0[0] = 0xe0 | ((VAR_1 >> 12) & 0x0f);
                        VAR_0[1] = 0x80 | ((VAR_1 >> 6) & 0x3f);
                        VAR_0[2] = 0x80 | (VAR_1 & 0x3f);
                }
                return 3;
        } else if (VAR_1 < (1 << 21)) {
                if (VAR_0) {
                        VAR_0[0] = 0xf0 | ((VAR_1 >> 18) & 0x07);
                        VAR_0[1] = 0x80 | ((VAR_1 >> 12) & 0x3f);
                        VAR_0[2] = 0x80 | ((VAR_1 >> 6) & 0x3f);
                        VAR_0[3] = 0x80 | (VAR_1 & 0x3f);
                }
                return 4;
        }

        return 0;
}
