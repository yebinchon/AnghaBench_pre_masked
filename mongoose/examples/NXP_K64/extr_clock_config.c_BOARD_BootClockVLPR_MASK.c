
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int irclkEnableMode; int ircs; int fcrdiv; } ;
struct TYPE_4__ {int coreClock; int simConfig; TYPE_1__ mcgConfig; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_6(void)
{
    FUNC_2();

    FUNC_0(VAR_2.mcgConfig.fcrdiv, VAR_2.mcgConfig.ircs,
                         VAR_2.mcgConfig.irclkEnableMode);

    FUNC_1(&VAR_2.simConfig);

    VAR_1 = VAR_2.coreClock;

    FUNC_4(VAR_0, VAR_3);
    FUNC_5(VAR_0, 0);
    while (FUNC_3(VAR_0) != VAR_4)
    {
    }
}
