
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

int
FUNC_1 (const char *VAR_0, unsigned char *VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        unsigned int VAR_4 = (FUNC_0(VAR_0[0]) << 4) | FUNC_0(VAR_0[1]);
        if (VAR_4 & ~0xff)
            return -1;
        *VAR_1++ = VAR_4;
        VAR_0 += 2;
    }
    return 0;
}
