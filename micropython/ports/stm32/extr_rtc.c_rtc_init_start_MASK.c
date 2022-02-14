
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int BDCR; int CSR; } ;
struct TYPE_5__ {int OutPutType; int OutPutPolarity; int OutPut; int SynchPrediv; int AsynchPrediv; int HourFormat; } ;
struct TYPE_6__ {TYPE_1__ Init; int Instance; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 () ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

void FUNC_4(bool VAR_21) {
    VAR_10.Instance = VAR_9;
    VAR_10.Init.HourFormat = VAR_12;
    VAR_10.Init.AsynchPrediv = VAR_11;
    VAR_10.Init.SynchPrediv = VAR_16;
    VAR_10.Init.OutPut = VAR_13;
    VAR_10.Init.OutPutPolarity = VAR_14;
    VAR_10.Init.OutPutType = VAR_15;

    VAR_18 = 0;

    if (!VAR_21) {
        uint32_t VAR_22 = VAR_1->BDCR;
        if ((VAR_22 & (VAR_4 | VAR_5 | VAR_2 | VAR_3))
            == (VAR_4 | VAR_6 | VAR_2 | VAR_3)) {


            FUNC_1();

            FUNC_3();

            VAR_17 |= 0x40000 | (VAR_1->BDCR & 7) | (VAR_1->CSR & 3) << 8;
            return;
        } else if ((VAR_22 & (VAR_4 | VAR_5))
            == (VAR_4 | VAR_7)) {


            FUNC_1();

            FUNC_3();

            VAR_1->CSR |= VAR_8;

            VAR_17 |= 0x80000 | (VAR_1->BDCR & 7) | (VAR_1->CSR & 3) << 8;
            return;
        }
    }

    VAR_19 = FUNC_0();
    VAR_17 = 0x3f000000 | (VAR_19 & 0xffffff);
    FUNC_2(&VAR_10, VAR_20, VAR_0);
}
