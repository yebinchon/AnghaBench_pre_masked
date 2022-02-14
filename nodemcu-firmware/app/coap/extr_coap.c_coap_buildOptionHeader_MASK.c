
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,int*) ;

int FUNC_1(uint32_t VAR_1, size_t VAR_2, uint8_t *VAR_3, size_t VAR_4)
{
    int VAR_5 = 0;
    uint8_t *VAR_6 = VAR_3;
    uint8_t VAR_7, VAR_8 = 0;

    if (VAR_4 < 5)
        return VAR_0;

    FUNC_0(VAR_1, &VAR_8);
    FUNC_0(VAR_2, &VAR_7);

    *VAR_6++ = (0xFF & (VAR_8 << 4 | VAR_7));
    VAR_5++;
    if (VAR_8 == 13)
    {
        *VAR_6++ = (VAR_1 - 13);
        VAR_5++;
    }
    else
    if (VAR_8 == 14)
    {
        *VAR_6++ = ((VAR_1-269) >> 8);
        *VAR_6++ = (0xFF & (VAR_1-269));
        VAR_5+=2;
    }
    if (VAR_7 == 13)
    {
        *VAR_6++ = (VAR_2 - 13);
        VAR_5++;
    }
    else
    if (VAR_7 == 14)
    {
        *VAR_6++ = (VAR_2 >> 8);
        *VAR_6++ = (0xFF & (VAR_2-269));
        VAR_5+=2;
    }
    return VAR_5;
}
