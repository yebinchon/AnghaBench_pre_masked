
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__* counter; } ;




 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int const VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_4(uint32_t VAR_4) {
    if (!FUNC_0() || !FUNC_1(VAR_4)) {
        return;
    }

    static const uint32_t VAR_5[] = {
        129,



    };
    {
        int VAR_6 = (VAR_4 >> VAR_1) & 1;
        if (VAR_3.counter[VAR_6] == 0) {
            return;
        }
        if (++VAR_3.counter[VAR_6] > VAR_0) {
            if ((VAR_2 & VAR_5[VAR_6]) == 0) {


                VAR_3.counter[VAR_6] = 0;
                if (VAR_6 == 0) {
                    FUNC_2();
                }





            } else {


                VAR_3.counter[VAR_6] = 1;
            }
        }
    }
}
