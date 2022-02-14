
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__*,int *,int) ;
 int FUNC_2 (int ,int *,int) ;

void FUNC_3(uint8_t VAR_0, uint8_t* VAR_1, uint16_t VAR_2) {
    if (VAR_2 > 4) {
        uint32_t VAR_3;
        FUNC_1(&VAR_3, VAR_1 + VAR_2 - 4, 4);
        uint32_t VAR_4 = FUNC_0(VAR_1, VAR_2 - 4);
        if (VAR_3 == VAR_4) {
            FUNC_2(VAR_0, VAR_1, VAR_2 - 4);
        }
    }
}
