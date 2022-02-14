
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ reg; } ;
struct TYPE_5__ {TYPE_1__ FSMSTATUS; } ;
struct TYPE_6__ {TYPE_2__ DEVICE; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;

void FUNC_3(void) {
    static uint64_t VAR_5 = 0;
    uint8_t VAR_6 = VAR_0->DEVICE.FSMSTATUS.reg;

    if (VAR_6 == VAR_3)
    {
        VAR_5 = 0;

        if (VAR_4 != VAR_3)
        {
            FUNC_0();
            VAR_4 = VAR_6;
        }
    } else if (VAR_6 == VAR_2)
    {
        VAR_5 = 0;

        if (VAR_4 != VAR_2)
        {
            FUNC_0();
            VAR_4 = VAR_6;
        }
    } else if (VAR_6 == VAR_1)
    {
        if (VAR_4 != VAR_1)
        {
            if (VAR_5 == 0)
            {
                VAR_5 = FUNC_2() + 250;
            } else if (FUNC_2() > VAR_5)
            {
                FUNC_1();
                VAR_4 = VAR_6;
            }
        }
    } else
    {
        VAR_5 = 0;
    }
}
