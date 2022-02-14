
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned char const*) ;

__attribute__((used)) static unsigned
FUNC_1(const unsigned char *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    unsigned VAR_4, VAR_5, VAR_6, VAR_7;

    if (VAR_1 < 16)
        return 0;

    VAR_4 = FUNC_0(VAR_2, VAR_0+0);
    VAR_5 = FUNC_0(VAR_2, VAR_0+4);
    VAR_7 = FUNC_0(VAR_2, VAR_0+8);
    VAR_6 = FUNC_0(VAR_2, VAR_0+12);

    if (VAR_4 > 0x50000000) return 0;
    if (VAR_4 < 0x26000000) return 0;
    if (VAR_5 > 1000000) return 0;
    if (VAR_7 > 10000) return 0;
    if (VAR_7 < 16) return 0;
    if (VAR_6 < VAR_7) return 0;
    if (VAR_6 > 10000) return 0;

    if (VAR_7 + 16 < VAR_1) {
        unsigned VAR_8, VAR_9, VAR_10, VAR_11;
        const unsigned char *VAR_12 = VAR_0 + VAR_7 + 16;

        VAR_8 = FUNC_0(VAR_2, VAR_12+0);
        VAR_9 = FUNC_0(VAR_2, VAR_12+4);
        VAR_11 = FUNC_0(VAR_2, VAR_12+8);
        VAR_10 = FUNC_0(VAR_2, VAR_12+12);

        if (VAR_8 > 0x50000000)
            return 0;
        if (VAR_8 < 0x26000000)
            return 0;
        if (VAR_9 > 1000000)
            return 0;
        if (VAR_11 > 10000)
            return 0;
        if (VAR_11 < 16)
            return 0;
        if (VAR_10 < VAR_11)
            return 0;
        if (VAR_10 > 10000)
            return 0;
        return 1;
    } else
    switch (VAR_3) {
    case 1:
        if (VAR_0[12] == 0x08 && VAR_0[13] == 0x00 && VAR_0[14] == 0x45)
            return 1;
    }

    return 0;
}
