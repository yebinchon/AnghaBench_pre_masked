
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Action; int Flags; scalar_t__ EventCode; } ;
struct TYPE_5__ {scalar_t__ SystemS3; scalar_t__ SystemS2; scalar_t__ SystemS1; scalar_t__ HiberFilePresent; scalar_t__ SystemS4; } ;
typedef TYPE_1__* PSYSTEM_POWER_CAPABILITIES ;
typedef TYPE_2__ POWER_ACTION_POLICY ;
typedef scalar_t__ POWER_ACTION ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

POWER_ACTION
FUNC_0(
    POWER_ACTION_POLICY *VAR_10,
    PSYSTEM_POWER_CAPABILITIES VAR_11,
    BOOL VAR_12)
{
    POWER_ACTION VAR_13 = VAR_6;
    if (VAR_10->Action == VAR_6)
    {
        if (VAR_10->Flags == (VAR_1 | VAR_0))
        {
            if (VAR_10->EventCode == VAR_2)
            {
                VAR_13 = VAR_6;
            }
            else if (VAR_10->EventCode == VAR_3)
            {
                VAR_13 = VAR_9;
            }
            else if (VAR_10->EventCode == VAR_4)
            {
                VAR_13 = VAR_7;
            }
        }
    }
    else
    {
        VAR_13 = VAR_10->Action;
        if ((VAR_13 == VAR_5) && !(VAR_11->SystemS4 && VAR_11->HiberFilePresent))
            VAR_13 = VAR_8;
        if ((VAR_13 == VAR_8) && !(VAR_11->SystemS1 || VAR_11->SystemS2 || VAR_11->SystemS3))
        {
            if (VAR_12)
                VAR_13 = VAR_6;
            else
                VAR_13 = VAR_7;
        }
    }

    return VAR_13;
}
