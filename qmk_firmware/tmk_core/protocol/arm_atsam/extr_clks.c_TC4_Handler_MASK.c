
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ MC0; } ;
struct TYPE_6__ {int reg; TYPE_1__ bit; } ;
struct TYPE_7__ {TYPE_2__ INTFLAG; } ;
struct TYPE_8__ {TYPE_3__ COUNT16; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0() {
    if (VAR_0->COUNT16.INTFLAG.bit.MC0) {
        VAR_0->COUNT16.INTFLAG.reg = VAR_1;
        VAR_2++;
    }
}
