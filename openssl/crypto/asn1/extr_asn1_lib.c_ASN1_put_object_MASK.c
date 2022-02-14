
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char**,int) ;

void FUNC_1(unsigned char **VAR_3, int VAR_4, int VAR_5, int VAR_6,
                     int VAR_7)
{
    unsigned char *VAR_8 = *VAR_3;
    int VAR_9, VAR_10;

    VAR_9 = (VAR_4) ? VAR_0 : 0;
    VAR_9 |= (VAR_7 & VAR_2);
    if (VAR_6 < 31)
        *(VAR_8++) = VAR_9 | (VAR_6 & VAR_1);
    else {
        *(VAR_8++) = VAR_9 | VAR_1;
        for (VAR_9 = 0, VAR_10 = VAR_6; VAR_10 > 0; VAR_9++)
            VAR_10 >>= 7;
        VAR_10 = VAR_9;
        while (VAR_9-- > 0) {
            VAR_8[VAR_9] = VAR_6 & 0x7f;
            if (VAR_9 != (VAR_10 - 1))
                VAR_8[VAR_9] |= 0x80;
            VAR_6 >>= 7;
        }
        VAR_8 += VAR_10;
    }
    if (VAR_4 == 2)
        *(VAR_8++) = 0x80;
    else
        FUNC_0(&VAR_8, VAR_5);
    *VAR_3 = VAR_8;
}
