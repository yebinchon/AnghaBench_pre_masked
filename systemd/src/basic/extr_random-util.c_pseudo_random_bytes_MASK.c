
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(void *VAR_1, size_t VAR_2) {
        uint8_t *VAR_3;






        FUNC_0();

        for (VAR_3 = VAR_1; VAR_3 < (uint8_t*) VAR_1 + VAR_2; VAR_3 += VAR_0) {
                unsigned VAR_4;

                VAR_4 = (unsigned) FUNC_1();
                VAR_3[0] = VAR_4;
        }
}
