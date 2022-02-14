
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* Channel; } ;
struct TYPE_5__ {scalar_t__ TERR; scalar_t__ TCMPL; } ;
struct TYPE_6__ {int reg; TYPE_1__ bit; } ;
struct TYPE_7__ {TYPE_2__ CHINTFLAG; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;

void FUNC_2(void) {
    if (VAR_0->Channel[0].CHINTFLAG.bit.TCMPL) {
        VAR_0->Channel[0].CHINTFLAG.reg = VAR_1;

        FUNC_0();

        VAR_3 = 0;

        FUNC_1();

        return;
    }

    if (VAR_0->Channel[0].CHINTFLAG.bit.TERR) {
        VAR_0->Channel[0].CHINTFLAG.reg = VAR_2;
    }
}
