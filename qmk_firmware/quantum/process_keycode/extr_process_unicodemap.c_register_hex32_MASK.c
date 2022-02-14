
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(uint32_t VAR_0) {
    bool VAR_1 = 1;
    for (int VAR_2 = 7; VAR_2 >= 0; VAR_2--) {
        if (VAR_2 <= 3) {
            VAR_1 = 0;
        }
        uint8_t VAR_3 = ((VAR_0 >> (VAR_2 * 4)) & 0xF);
        if (VAR_3 == 0) {
            if (!VAR_1) {
                FUNC_1(FUNC_0(VAR_3));
                FUNC_2(FUNC_0(VAR_3));
            }
        } else {
            FUNC_1(FUNC_0(VAR_3));
            FUNC_2(FUNC_0(VAR_3));
            VAR_1 = 0;
        }
    }
}
