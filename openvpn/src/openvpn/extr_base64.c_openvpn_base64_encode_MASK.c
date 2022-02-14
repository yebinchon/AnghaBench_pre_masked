
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;

int
FUNC_2(const void *VAR_1, int VAR_2, char **VAR_3)
{
    char *VAR_4, *VAR_5;
    int VAR_6;
    int VAR_7;
    const unsigned char *VAR_8;

    if (VAR_2 < 0)
    {
        return -1;
    }
    VAR_5 = VAR_4 = (char *) FUNC_0(VAR_2 * 4 / 3 + 4);
    if (VAR_5 == ((void*)0))
    {
        return -1;
    }
    VAR_8 = (const unsigned char *) VAR_1;
    VAR_6 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_2; )
    {
        VAR_7 = VAR_8[VAR_6++];
        VAR_7 *= 256;
        if (VAR_6 < VAR_2)
        {
            VAR_7 += VAR_8[VAR_6];
        }
        VAR_6++;
        VAR_7 *= 256;
        if (VAR_6 < VAR_2)
        {
            VAR_7 += VAR_8[VAR_6];
        }
        VAR_6++;
        VAR_5[0] = VAR_0[(VAR_7 & 0x00fc0000) >> 18];
        VAR_5[1] = VAR_0[(VAR_7 & 0x0003f000) >> 12];
        VAR_5[2] = VAR_0[(VAR_7 & 0x00000fc0) >> 6];
        VAR_5[3] = VAR_0[(VAR_7 & 0x0000003f) >> 0];
        if (VAR_6 > VAR_2)
        {
            VAR_5[3] = '=';
        }
        if (VAR_6 > VAR_2 + 1)
        {
            VAR_5[2] = '=';
        }
        VAR_5 += 4;
    }
    *VAR_5 = 0;
    *VAR_3 = VAR_4;
    return FUNC_1(VAR_4);
}
