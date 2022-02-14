
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;

uint8_t FUNC_1(void) {
    bool VAR_8 = VAR_7[FUNC_0(VAR_1[0]) + (FUNC_0(VAR_1[1]) << 1) + (FUNC_0(VAR_1[2]) << 2) + (FUNC_0(VAR_1[3]) << 3)];

    if (VAR_2 == 0) {
        if (VAR_4 == 0) {
            VAR_3 = (VAR_3 + 1) % 4;
        }
        VAR_4 = (VAR_4 + 1) % 3;
        VAR_6 = (VAR_6 + 1) % 16;
        VAR_5 = (VAR_5 << 1) + VAR_8;
    }

    VAR_2 = (VAR_2 + 1) % 2;

    return FUNC_0(VAR_0[0]) + (FUNC_0(VAR_0[1]) << 1) + (FUNC_0(VAR_0[2]) << 2) + (FUNC_0(VAR_0[3]) << 3);
}
