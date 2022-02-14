
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const,unsigned char const) ;

__attribute__((used)) static inline int FUNC_1(unsigned char *VAR_0,
                                  const unsigned char VAR_1,
                                  const unsigned char VAR_2)
{
    int VAR_3;

    if (! FUNC_0(VAR_1, VAR_2))
        return 0;

    if ((VAR_1 == 0xEE) && (VAR_2 == 0xF9)) {
        VAR_0[0] = 0x81;
        VAR_0[1] = 0xCA;
        return 2;
    }

    if ((VAR_1 == 0xEE) && (VAR_2 >= 0xEF)) {
        VAR_3 = (VAR_1 << 8 | VAR_2)
                - (VAR_2 <= 0xF9 ? 0xEEEF : (0xEEEF - 10));
    } else {
        VAR_3 = (VAR_1 - 0xED) * (0xFC - 0x40)
                + (VAR_2 - 0x40) + (0x5C - 0x40);
        if (VAR_2 >= 0x7F)
            VAR_3--;
    }

    VAR_0[0] = 0xFA + (VAR_3 / (0xFC - 0x40));
    VAR_0[1] = 0x40 + (VAR_3 % (0xFC - 0x40));
    if (VAR_0[1] >= 0x7F)
        VAR_0[1]++;

    return 2;
}
