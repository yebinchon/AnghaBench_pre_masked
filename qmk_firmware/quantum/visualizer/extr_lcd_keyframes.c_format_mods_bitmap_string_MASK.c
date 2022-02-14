
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint8_t VAR_0, char* VAR_1) {
    *VAR_1 = ' ';
    ++VAR_1;

    for (int VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        uint32_t VAR_3 = (1u << VAR_2);
        if (VAR_0 & VAR_3) {
            *VAR_1 = '1';
        } else {
            *VAR_1 = '0';
        }
        ++VAR_1;

        if (VAR_2 == 3) {
            *VAR_1 = ' ';
            ++VAR_1;
        }
    }
    *VAR_1 = 0;
}
