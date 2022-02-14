
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int VAR_0 ;

int
FUNC_0(const char *VAR_1, int32_t *VAR_2)
{
    int VAR_3 = 0;
    int32_t VAR_4 = 0;

    while (VAR_3 <= 2)
    {

        if (VAR_1[VAR_3] & 0x80)
        {

            VAR_4 <<= 7;
            VAR_4 |= (VAR_1[VAR_3] & 0x7f);
            VAR_3++;
        }
        else
        {
            break;
        }
    }

    if (VAR_3 > 2)
    {

        VAR_4 <<= 8;
        VAR_4 |= VAR_1[3];


        if (VAR_4 > VAR_0)
            VAR_4 -= (1 << 29);
    }
    else
    {

        VAR_4 <<= 7;
        VAR_4 |= VAR_1[VAR_3];
    }

    *VAR_2 = VAR_4;

    return VAR_3 > 2 ? 4 : VAR_3 + 1;
}
