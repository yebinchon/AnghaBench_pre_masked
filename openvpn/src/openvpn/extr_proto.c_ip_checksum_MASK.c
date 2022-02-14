
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ sa_family_t ;


 scalar_t__ const VAR_0 ;

uint16_t
FUNC_0(const sa_family_t VAR_1, const uint8_t *VAR_2, const int VAR_3,
            const uint8_t *VAR_4, const uint8_t *VAR_5, const int VAR_6)
{
    uint32_t VAR_7 = 0;
    int VAR_8 = (VAR_1 == VAR_0) ? 4 : 16;





    for (int VAR_9 = 0; VAR_9 < VAR_3; VAR_9 += 2)
    {
        VAR_7 += (uint16_t)(((VAR_2[VAR_9] << 8) & 0xFF00)
                           +((VAR_9 + 1 < VAR_3) ? (VAR_2[VAR_9 + 1] & 0xFF) : 0));

    }





    for (int VAR_10 = 0; VAR_10 < VAR_8; VAR_10 += 2)
    {
        VAR_7 += (uint16_t)((VAR_4[VAR_10] << 8) & 0xFF00) + (VAR_4[VAR_10 + 1] & 0xFF);

    }
    for (int VAR_11 = 0; VAR_11 < VAR_8; VAR_11 += 2)
    {
        VAR_7 += (uint16_t)((VAR_5[VAR_11] << 8) & 0xFF00) + (VAR_5[VAR_11 + 1] & 0xFF);
    }


    VAR_7 += (uint16_t)VAR_3;


    VAR_7 += (uint16_t)VAR_6;





    while (VAR_7 >> 16)
    {
        VAR_7 = (VAR_7 & 0xFFFF) + (VAR_7 >> 16);
    }


    return ((uint16_t) ~VAR_7);
}
