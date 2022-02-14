
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ PLLPRE; scalar_t__ PLLPOST; } ;
struct TYPE_3__ {int COSC; int LOCK; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(void) {



    VAR_3 = 41;
    VAR_0.PLLPOST = 0;
    VAR_0.PLLPRE = 0;
    VAR_2 = 0;


    FUNC_0(0x01);
    FUNC_1(0x01);


    while (VAR_1.COSC != 0x01) {
    }
    while (!VAR_1.LOCK) {
    }
}
