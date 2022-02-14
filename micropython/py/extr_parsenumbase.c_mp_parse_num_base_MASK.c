
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unichar ;
typedef int byte ;



size_t FUNC_0(const char *VAR_0, size_t VAR_1, int *VAR_2) {
    const byte *VAR_3 = (const byte*)VAR_0;
    if (VAR_1 <= 1) {
        goto no_prefix;
    }
    unichar VAR_4 = *(VAR_3++);
    if ((*VAR_2 == 0 || *VAR_2 == 16) && VAR_4 == '0') {
        VAR_4 = *(VAR_3++);
        if ((VAR_4 | 32) == 'x') {
            *VAR_2 = 16;
        } else if (*VAR_2 == 0 && (VAR_4 | 32) == 'o') {
            *VAR_2 = 8;
        } else if (*VAR_2 == 0 && (VAR_4 | 32) == 'b') {
            *VAR_2 = 2;
        } else {
            if (*VAR_2 == 0) {
                *VAR_2 = 10;
            }
            VAR_3 -= 2;
        }
    } else if (*VAR_2 == 8 && VAR_4 == '0') {
        VAR_4 = *(VAR_3++);
        if ((VAR_4 | 32) != 'o') {
            VAR_3 -= 2;
        }
    } else if (*VAR_2 == 2 && VAR_4 == '0') {
        VAR_4 = *(VAR_3++);
        if ((VAR_4 | 32) != 'b') {
            VAR_3 -= 2;
        }
    } else {
        VAR_3--;
    no_prefix:
        if (*VAR_2 == 0) {
            *VAR_2 = 10;
        }
    }
    return VAR_3 - (const byte*)VAR_0;
}
