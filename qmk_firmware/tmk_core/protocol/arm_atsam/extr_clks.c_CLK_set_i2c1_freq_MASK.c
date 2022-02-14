
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_23__ {size_t BAUD; } ;
struct TYPE_24__ {TYPE_7__ bit; } ;
struct TYPE_21__ {int SWRST; } ;
struct TYPE_22__ {TYPE_5__ bit; } ;
struct TYPE_19__ {scalar_t__ SWRST; } ;
struct TYPE_20__ {TYPE_3__ bit; } ;
struct TYPE_25__ {TYPE_8__ BAUD; TYPE_6__ CTRLA; TYPE_4__ SYNCBUSY; } ;
struct TYPE_17__ {int CHEN; scalar_t__ GEN; } ;
struct TYPE_18__ {TYPE_1__ bit; } ;
struct TYPE_16__ {int* freq_gclk; int freq_i2c1; int* freq_sercom; } ;
struct TYPE_15__ {TYPE_2__* PCHCTRL; } ;
struct TYPE_14__ {TYPE_9__ I2CM; } ;
typedef TYPE_10__ Sercom ;
typedef TYPE_11__ Gclk ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_11__* VAR_2 ;
 int FUNC_1 (size_t) ;
 scalar_t__* VAR_3 ;
 size_t* VAR_4 ;
 TYPE_12__ VAR_5 ;

uint32_t FUNC_2(uint8_t VAR_6, uint32_t VAR_7) {
    FUNC_0(VAR_0);

    Gclk * VAR_8 = VAR_2;
    Sercom *VAR_9 = (Sercom *)VAR_3[VAR_6];
    FUNC_1(VAR_6);


    VAR_8->PCHCTRL[VAR_4[VAR_6]].bit.GEN = 0;
    VAR_8->PCHCTRL[VAR_4[VAR_6]].bit.CHEN = 1;

    VAR_9->I2CM.CTRLA.bit.SWRST = 1;
    while (VAR_9->I2CM.SYNCBUSY.bit.SWRST) {
    }
    while (VAR_9->I2CM.CTRLA.bit.SWRST) {
    }

    VAR_9->I2CM.BAUD.bit.BAUD = (uint8_t)(VAR_5.freq_gclk[0] / 2 / VAR_7 - 10);
    VAR_5.freq_i2c1 = VAR_5.freq_gclk[0] / 2 / (VAR_9->I2CM.BAUD.bit.BAUD + 10);
    VAR_5.freq_sercom[VAR_6] = VAR_5.freq_i2c1;

    FUNC_0(VAR_1);

    return VAR_5.freq_i2c1;
}
