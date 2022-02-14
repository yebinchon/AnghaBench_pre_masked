
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int TXC; int DRE; } ;
struct TYPE_9__ {TYPE_1__ bit; } ;
struct TYPE_10__ {int DATA; } ;
struct TYPE_11__ {TYPE_3__ bit; } ;
struct TYPE_12__ {TYPE_2__ INTFLAG; TYPE_4__ DATA; } ;
struct TYPE_14__ {TYPE_5__ SPI; } ;
struct TYPE_13__ {int reg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_7__* VAR_5 ;
 TYPE_6__ VAR_6 ;

void FUNC_1(void) {
    VAR_4;

    while (!(VAR_5->SPI.INTFLAG.bit.DRE)) {
        FUNC_0(VAR_0);
    }

    VAR_5->SPI.DATA.bit.DATA = VAR_6.reg & 0xFF;
    while (!(VAR_5->SPI.INTFLAG.bit.TXC)) {
        FUNC_0(VAR_1);
    }

    VAR_5->SPI.DATA.bit.DATA = (VAR_6.reg >> 8) & 0xFF;
    while (!(VAR_5->SPI.INTFLAG.bit.TXC)) {
        FUNC_0(VAR_2);
    }

    VAR_3;
}
