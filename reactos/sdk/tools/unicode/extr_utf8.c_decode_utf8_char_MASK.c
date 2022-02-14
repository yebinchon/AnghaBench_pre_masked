
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned int* VAR_2 ;

__attribute__((used)) static inline unsigned int FUNC_0( unsigned char VAR_3, const char **VAR_4, const char *VAR_5 )
{
    unsigned int VAR_6 = VAR_0[VAR_3-0x80];
    unsigned int VAR_7 = VAR_3 & VAR_1[VAR_6];
    const char *VAR_8 = *VAR_4 + VAR_6;

    if (VAR_8 > VAR_5) return ~0;
    switch(VAR_6)
    {
    case 3:
        if ((VAR_3 = VAR_8[-3] ^ 0x80) >= 0x40) break;
        VAR_7 = (VAR_7 << 6) | VAR_3;
        (*VAR_4)++;
    case 2:
        if ((VAR_3 = VAR_8[-2] ^ 0x80) >= 0x40) break;
        VAR_7 = (VAR_7 << 6) | VAR_3;
        (*VAR_4)++;
    case 1:
        if ((VAR_3 = VAR_8[-1] ^ 0x80) >= 0x40) break;
        VAR_7 = (VAR_7 << 6) | VAR_3;
        (*VAR_4)++;
        if (VAR_7 < VAR_2[VAR_6]) break;
        return VAR_7;
    }
    return ~0;
}
