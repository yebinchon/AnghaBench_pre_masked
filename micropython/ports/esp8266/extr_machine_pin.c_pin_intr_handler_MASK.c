
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ mp_obj_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 () ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;

void FUNC_8(uint32_t VAR_4) {
    FUNC_5();
    FUNC_2();
    VAR_4 &= 0xffff;
    for (int VAR_5 = 0; VAR_4; ++VAR_5, VAR_4 >>= 1) {
        if (VAR_4 & 1) {
            mp_obj_t VAR_6 = FUNC_1(VAR_1)[VAR_5];
            if (VAR_6 != VAR_0) {
                if (VAR_2[VAR_5]) {
                    FUNC_4(VAR_6, FUNC_0(&VAR_3[VAR_5]));
                } else {
                    FUNC_6(VAR_6, FUNC_0(&VAR_3[VAR_5]));
                }
            }
        }
    }
    FUNC_3();
    FUNC_7();
}
