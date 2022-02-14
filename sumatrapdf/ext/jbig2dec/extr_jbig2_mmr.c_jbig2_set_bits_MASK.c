
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int byte ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_0(byte *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    uint32_t VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    VAR_5 = VAR_3 >> 3;
    VAR_6 = VAR_4 >> 3;

    VAR_7 = VAR_3 & 7;
    VAR_8 = VAR_4 & 7;

    if (VAR_5 == VAR_6) {
        VAR_2[VAR_5] |= VAR_0[VAR_7] & VAR_1[VAR_8];
    } else {
        VAR_2[VAR_5] |= VAR_0[VAR_7];
        for (VAR_9 = VAR_5 + 1; VAR_9 < VAR_6; VAR_9++)
            VAR_2[VAR_9] = 0xFF;
        if (VAR_8)
            VAR_2[VAR_6] |= VAR_1[VAR_8];
    }
}
