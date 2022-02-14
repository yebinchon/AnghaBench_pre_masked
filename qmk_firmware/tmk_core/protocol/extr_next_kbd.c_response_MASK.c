
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline uint32_t FUNC_4(void) {
    FUNC_1();




    uint8_t VAR_2 = 0;
    uint32_t VAR_3 = 0;
    uint16_t VAR_4 = 50000;
    while (VAR_0 && VAR_4) {
        asm("");
        FUNC_0(1);
        VAR_4--;
    }
    if (!VAR_4) {
        FUNC_2();
        FUNC_3();
        return 0;
    }
    FUNC_0(VAR_1 / 2);
    for (; VAR_2 < 22; VAR_2++) {
        if (VAR_0) {
            VAR_3 |= ((uint32_t)1 << VAR_2);
            if (VAR_2 == 10) {
                VAR_2++;
                while (VAR_0)
                    ;
                FUNC_0(VAR_1 / 2);
            }
        } else {



            VAR_3 |= ((uint32_t)0 << VAR_2);
        }
        FUNC_0(VAR_1);
    }

    FUNC_3();

    return VAR_3;
}
