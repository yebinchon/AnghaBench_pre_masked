
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int,int const*,int) ;
 unsigned int FUNC_1 (int const*,int) ;

int FUNC_2( int VAR_1, const WCHAR *VAR_2, int VAR_3, char *VAR_4, int VAR_5 )
{
    int VAR_6;

    if (!VAR_5) return FUNC_0( VAR_1, VAR_2, VAR_3 );

    for (VAR_6 = VAR_5; VAR_3; VAR_3--, VAR_2++)
    {
        WCHAR VAR_7 = *VAR_2;
        unsigned int VAR_8;

        if (VAR_7 < 0x80)
        {
            if (!VAR_6--) return -1;
            *VAR_4++ = VAR_7;
            continue;
        }

        if (VAR_7 < 0x800)
        {
            if ((VAR_6 -= 2) < 0) return -1;
            VAR_4[1] = 0x80 | (VAR_7 & 0x3f);
            VAR_7 >>= 6;
            VAR_4[0] = 0xc0 | VAR_7;
            VAR_4 += 2;
            continue;
        }

        if (!(VAR_8 = FUNC_1( VAR_2, VAR_3 )))
        {
            if (VAR_1 & VAR_0) return -2;
            continue;
        }

        if (VAR_8 < 0x10000)
        {
            if ((VAR_6 -= 3) < 0) return -1;
            VAR_4[2] = 0x80 | (VAR_8 & 0x3f);
            VAR_8 >>= 6;
            VAR_4[1] = 0x80 | (VAR_8 & 0x3f);
            VAR_8 >>= 6;
            VAR_4[0] = 0xe0 | VAR_8;
            VAR_4 += 3;
        }
        else
        {
            if ((VAR_6 -= 4) < 0) return -1;
            VAR_4[3] = 0x80 | (VAR_8 & 0x3f);
            VAR_8 >>= 6;
            VAR_4[2] = 0x80 | (VAR_8 & 0x3f);
            VAR_8 >>= 6;
            VAR_4[1] = 0x80 | (VAR_8 & 0x3f);
            VAR_8 >>= 6;
            VAR_4[0] = 0xf0 | VAR_8;
            VAR_4 += 4;
            VAR_2++;
            VAR_3--;
        }
    }
    return VAR_5 - VAR_6;
}
