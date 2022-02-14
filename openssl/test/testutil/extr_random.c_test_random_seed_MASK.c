
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;


 int FUNC_0 () ;
 scalar_t__* VAR_0 ;

void FUNC_1(uint32_t VAR_1) {
    int VAR_2;
    int32_t VAR_3;
    const unsigned int VAR_4 = (1u << 31) - 1;

    VAR_0[0] = VAR_1;
    for (VAR_2 = 1; VAR_2 < 31; VAR_2++) {
        VAR_3 = (int32_t)VAR_0[VAR_2 - 1];
        VAR_0[VAR_2] = (uint32_t)((16807 * (int64_t)VAR_3) % VAR_4);
    }
    for (VAR_2 = 34; VAR_2 < 344; VAR_2++)
        FUNC_0();
}
