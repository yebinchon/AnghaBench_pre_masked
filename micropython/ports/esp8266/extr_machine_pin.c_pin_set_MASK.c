
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int,int,int) ;
 int* VAR_4 ;

void FUNC_3(uint VAR_5, int VAR_6) {
    if (VAR_5 == 16) {
        int VAR_7 = (VAR_4[VAR_5] == 128);
        FUNC_1(VAR_0, (FUNC_0(VAR_0) & 0xffffffbc) | 1);
        FUNC_1(VAR_1, FUNC_0(VAR_1) & ~1);
        FUNC_1(VAR_2, (FUNC_0(VAR_2) & ~1) | VAR_7);
        FUNC_1(VAR_3, (FUNC_0(VAR_3) & ~1) | VAR_6);
        return;
    }

    uint32_t VAR_8 = 0;
    uint32_t VAR_9 = 0;
    switch (VAR_4[VAR_5]) {
        case 130:
            VAR_6 = -1;
            VAR_9 = 1;
            break;

        case 128:
            VAR_8 = 1;
            break;

        case 129:
            if (VAR_6 == -1) {
                return;
            } else if (VAR_6 == 0) {
                VAR_8 = 1;
            } else {
                VAR_6 = -1;
                VAR_9 = 1;
            }
            break;
    }

    VAR_8 <<= VAR_5;
    VAR_9 <<= VAR_5;
    if (VAR_6 == -1) {
        FUNC_2(0, 0, VAR_8, VAR_9);
    } else {
        FUNC_2(VAR_6 << VAR_5, (1 - VAR_6) << VAR_5, VAR_8, VAR_9);
    }
}
