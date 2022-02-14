
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned char,char const**,char const*) ;
 int FUNC_1 (int,char const*,int) ;
 int FUNC_2 (int,char const*,int,int *,int) ;

int FUNC_3( int VAR_2, const char *VAR_3, int VAR_4, WCHAR *VAR_5, int VAR_6 )
{
    unsigned int VAR_7;
    const char *VAR_8 = VAR_3 + VAR_4;
    WCHAR *VAR_9 = VAR_5 + VAR_6;

    if (VAR_2 & VAR_0) return FUNC_2( VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 );

    if (!VAR_6) return FUNC_1( VAR_2, VAR_3, VAR_4 );

    while ((VAR_5 < VAR_9) && (VAR_3 < VAR_8))
    {
        unsigned char VAR_10 = *VAR_3++;
        if (VAR_10 < 0x80)
        {
            *VAR_5++ = VAR_10;
            continue;
        }
        if ((VAR_7 = FUNC_0( VAR_10, &VAR_3, VAR_8 )) <= 0xffff)
        {
            *VAR_5++ = VAR_7;
        }
        else if (VAR_7 <= 0x10ffff)
        {
            if (VAR_5 == VAR_9 - 1) return -1;
            VAR_7 -= 0x10000;
            *VAR_5++ = 0xd800 | (VAR_7 >> 10);
            *VAR_5++ = 0xdc00 | (VAR_7 & 0x3ff);
        }
        else if (VAR_2 & VAR_1) return -2;

    }
    if (VAR_3 < VAR_8) return -1;
    return VAR_6 - (VAR_9 - VAR_5);
}
