
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_0, const char *VAR_1, int VAR_2)
{
    unsigned char VAR_3;
    unsigned int VAR_4 = 0;
    int VAR_5;

    if (VAR_2 > 4)
        return 0;
    while (VAR_2--) {
        VAR_3 = *VAR_1++;
        VAR_4 <<= 4;
        VAR_5 = FUNC_0(VAR_3);
        if (VAR_5 < 0)
            return 0;
        VAR_4 |= (char)VAR_5;
    }
    VAR_0[0] = VAR_4 >> 8;
    VAR_0[1] = VAR_4 & 0xff;
    return 1;
}
