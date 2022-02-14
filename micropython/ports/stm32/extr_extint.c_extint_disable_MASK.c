
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int mp_uint_t ;
struct TYPE_4__ {int IMR1; int EMR1; int IMR; int EMR; } ;
struct TYPE_3__ {int IMR1; int EMR1; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

void FUNC_3(uint VAR_5) {
    if (VAR_5 >= VAR_4) {
        return;
    }



    mp_uint_t VAR_6 = FUNC_1();







    VAR_0->IMR &= ~(1 << VAR_5);
    VAR_0->EMR &= ~(1 << VAR_5);

    FUNC_2(VAR_6);







}
