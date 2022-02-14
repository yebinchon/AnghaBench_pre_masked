
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int ret_val; } ;
typedef TYPE_1__ nlr_buf_t ;
typedef scalar_t__ mp_obj_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int *,scalar_t__) ;
 int VAR_4 ;
 int FUNC_9 (int ,char*,unsigned int) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int ,void (*) ()) ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;

void FUNC_16(uint32_t VAR_9) {
    if (FUNC_3(1 << VAR_9)) {
        FUNC_2(1 << VAR_9);
        if (VAR_9 < VAR_0) {
            mp_obj_t *VAR_10 = &FUNC_1(VAR_5)[VAR_9];
            if (*VAR_10 != VAR_3) {

                if (!VAR_7[VAR_9]) {
                    FUNC_11(*VAR_10, VAR_6[VAR_9]);
                    return;
                }

                FUNC_10();


                FUNC_5();
                nlr_buf_t VAR_11;
                if (FUNC_14(&VAR_11) == 0) {
                    FUNC_7(*VAR_10, VAR_6[VAR_9]);
                    FUNC_13();
                } else {

                    *VAR_10 = VAR_3;
                    FUNC_4(VAR_9);
                    FUNC_9(VAR_1, "uncaught exception in ExtInt interrupt handler line %u\n", (unsigned int)VAR_9);
                    FUNC_8(&VAR_4, FUNC_0(VAR_11.ret_val));
                }
                FUNC_6();
                FUNC_12();
            }
        }
    }
}
