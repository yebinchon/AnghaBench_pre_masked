
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_13__ {scalar_t__ RXNACK; } ;
struct TYPE_14__ {TYPE_5__ bit; } ;
struct TYPE_11__ {scalar_t__ MB; } ;
struct TYPE_12__ {TYPE_3__ bit; } ;
struct TYPE_9__ {int DATA; } ;
struct TYPE_10__ {TYPE_1__ bit; } ;
struct TYPE_15__ {TYPE_6__ STATUS; TYPE_4__ INTFLAG; TYPE_2__ DATA; } ;
struct TYPE_16__ {TYPE_7__ I2CM; } ;


 TYPE_8__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

uint8_t FUNC_2(uint8_t VAR_1, uint8_t *VAR_2, uint16_t VAR_3, uint16_t VAR_4) {
    if (!VAR_3) return 0;

    FUNC_0(VAR_1);

    while (VAR_3) {
        VAR_0->I2CM.DATA.bit.DATA = *VAR_2;
        while (VAR_0->I2CM.INTFLAG.bit.MB == 0) {
        }
        while (VAR_0->I2CM.STATUS.bit.RXNACK) {
        }

        VAR_2++;
        VAR_3--;
    }

    FUNC_1();

    return 1;
}
