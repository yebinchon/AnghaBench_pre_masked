
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static void FUNC_0(uint16_t VAR_0, uint16_t VAR_1, char* VAR_2) {
    for (int VAR_3 = 0; VAR_3 < 16; VAR_3++) {
        uint32_t VAR_4 = (1u << VAR_3);
        if (VAR_0 & VAR_4) {
            if (VAR_1 & VAR_4) {
                *VAR_2 = 'B';
            } else {
                *VAR_2 = 'D';
            }
        } else if (VAR_1 & VAR_4) {
            *VAR_2 = '1';
        } else {
            *VAR_2 = '0';
        }
        ++VAR_2;

        if (VAR_3 == 3 || VAR_3 == 7 || VAR_3 == 11) {
            *VAR_2 = ' ';
            ++VAR_2;
        }
    }
    *VAR_2 = 0;
}
