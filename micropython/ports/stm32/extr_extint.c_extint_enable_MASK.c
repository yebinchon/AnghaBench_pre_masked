
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef int mp_uint_t ;
struct TYPE_4__ {int IMR1; int IMR; int EMR1; int EMR; } ;
struct TYPE_3__ {int IMR1; int EMR1; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__,size_t) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__* VAR_4 ;

void FUNC_3(uint VAR_5) {
    if (VAR_5 >= VAR_3) {
        return;
    }


    mp_uint_t VAR_6 = FUNC_1();
    if (VAR_4[VAR_5] == VAR_2) {





        VAR_0->IMR |= (1 << VAR_5);

    } else {





        VAR_0->EMR |= (1 << VAR_5);

    }
    FUNC_2(VAR_6);






}
