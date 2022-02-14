
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

void FUNC_4(uint8_t VAR_3, bool VAR_4) {
    if (VAR_3 == 0) {
        if (VAR_4) {
            FUNC_2(VAR_0);
        } else {
            FUNC_2(VAR_1);
        }
    }
    else if (VAR_3 == 1) {
        int VAR_5 = 0;
        if (VAR_4) {
            VAR_5 = 1;
        } else {
            VAR_5 = -1;
        }
        int VAR_6 = 2;
        int VAR_7 = ((VAR_2 + VAR_5) % VAR_6 + VAR_6) % VAR_6;
        FUNC_3("new: %d\n", VAR_7);
        FUNC_1(VAR_7);
        for(int VAR_8=0; VAR_8 < VAR_6; VAR_8++) {
            if (VAR_7 != VAR_8) {
                FUNC_0(VAR_8);
            }
        }
    }
}
