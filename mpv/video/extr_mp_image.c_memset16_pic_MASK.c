
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (void*,int ,int,int,int) ;

void FUNC_1(void *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    if (VAR_1 == 0) {
        FUNC_0(VAR_0, 0, VAR_2 * 2, VAR_3, VAR_4);
    } else {
        for (int VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            uint16_t *VAR_6 = VAR_0;
            uint16_t *VAR_7 = VAR_6 + VAR_2;
            while (VAR_6 < VAR_7)
                *VAR_6++ = VAR_1;
            VAR_0 = (uint8_t *)VAR_0 + VAR_4;
        }
    }
}
