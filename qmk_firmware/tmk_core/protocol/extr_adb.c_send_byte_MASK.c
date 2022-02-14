
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(uint8_t VAR_0) {
    for (int VAR_1 = 0; VAR_1 < 8; VAR_1++) {
        if (VAR_0 & (0x80 >> VAR_1))
            FUNC_1();
        else
            FUNC_0();
    }
}
