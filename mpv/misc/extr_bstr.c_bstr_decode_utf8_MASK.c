
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstr {scalar_t__ len; unsigned int* start; } ;


 int FUNC_0 (unsigned int) ;

int FUNC_1(struct bstr VAR_0, struct bstr *VAR_1)
{
    if (VAR_0.len == 0)
        return -1;
    unsigned int VAR_2 = VAR_0.start[0];
    VAR_0.start++; VAR_0.len--;
    if (VAR_2 >= 128) {
        int VAR_3 = FUNC_0(VAR_2);
        if (VAR_3 < 1 || VAR_0.len < VAR_3 - 1)
            return -1;
        VAR_2 &= 127 >> VAR_3;
        for (int VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
            int VAR_5 = (unsigned char)VAR_0.start[0];
            if ((VAR_5 & 0xC0) != 0x80)
                return -1;
            VAR_2 = (VAR_2 << 6) | (VAR_5 & ~0xC0);
            VAR_0.start++; VAR_0.len--;
        }
        if (VAR_2 > 0x10FFFF || (VAR_2 >= 0xD800 && VAR_2 <= 0xDFFF))
            return -1;



        unsigned int VAR_6 = VAR_3 == 2 ? 0x80 : 1 << (5 * VAR_3 - 4);
        if (VAR_2 < VAR_6)
            return -1;
    }
    if (VAR_1)
        *VAR_1 = VAR_0;
    return VAR_2;
}
