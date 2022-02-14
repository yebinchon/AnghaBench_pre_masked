
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned char,char const**,char const*) ;
 int FUNC_1 (int,char const*,int) ;
 char FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3( int VAR_1, const char *VAR_2, int VAR_3, WCHAR *VAR_4, int VAR_5 )
{
    unsigned int VAR_6;
    const char *VAR_7 = VAR_2 + VAR_3;
    WCHAR VAR_8[2];
    WCHAR *VAR_9 = VAR_4 + VAR_5;

    if (!VAR_5) return FUNC_1( VAR_1, VAR_2, VAR_3 );

    VAR_8[0] = 0;
    while (VAR_2 < VAR_7)
    {
        unsigned char VAR_10 = *VAR_2++;
        if (VAR_10 < 0x80)
        {
            if (VAR_4 >= VAR_9) return -1;
            *VAR_4++ = VAR_8[0] = VAR_10;
            continue;
        }
        if ((VAR_6 = FUNC_0( VAR_10, &VAR_2, VAR_7 )) <= 0xffff)
        {
            if (VAR_8[0])
            {
                VAR_8[1] = VAR_6;
                if ((VAR_8[0] = FUNC_2( VAR_8 )))
                {
                    VAR_4[-1] = VAR_8[0];
                    continue;
                }
            }
            if (VAR_4 >= VAR_9) return -1;
            *VAR_4++ = VAR_8[0] = VAR_6;
        }
        else if (VAR_6 <= 0x10ffff)
        {
            if (VAR_4 >= VAR_9 - 1) return -1;
            VAR_6 -= 0x10000;
            *VAR_4++ = 0xd800 | (VAR_6 >> 10);
            *VAR_4++ = 0xdc00 | (VAR_6 & 0x3ff);
            VAR_8[0] = 0;
        }
        else if (VAR_1 & VAR_0) return -2;

    }
    return VAR_5 - (VAR_9 - VAR_4);
}
