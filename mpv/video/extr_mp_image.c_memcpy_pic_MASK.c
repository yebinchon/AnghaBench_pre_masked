
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (void*,void const*,int) ;

void FUNC_1(void *VAR_0, const void *VAR_1, int VAR_2, int VAR_3,
                int VAR_4, int VAR_5)
{
    if (VAR_2 == VAR_4 && VAR_4 == VAR_5 && VAR_3) {
        if (VAR_5 < 0) {
            VAR_1 = (uint8_t*)VAR_1 + (VAR_3 - 1) * VAR_5;
            VAR_0 = (uint8_t*)VAR_0 + (VAR_3 - 1) * VAR_4;
            VAR_5 = -VAR_5;
        }

        FUNC_0(VAR_0, VAR_1, VAR_5 * (VAR_3 - 1) + VAR_2);
    } else {
        for (int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
            FUNC_0(VAR_0, VAR_1, VAR_2);
            VAR_1 = (uint8_t*)VAR_1 + VAR_5;
            VAR_0 = (uint8_t*)VAR_0 + VAR_4;
        }
    }
}
