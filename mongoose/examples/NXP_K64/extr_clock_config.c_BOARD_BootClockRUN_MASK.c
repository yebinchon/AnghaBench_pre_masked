
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fcrdiv; int ircs; int irclkEnableMode; int pll0Config; int oscsel; } ;
struct TYPE_4__ {int coreClock; int simConfig; TYPE_1__ mcgConfig; int oscConfig; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

void FUNC_6(void)
{
    FUNC_4();

    FUNC_1(&VAR_2.oscConfig);
    FUNC_5(VAR_0);

    FUNC_0(VAR_2.mcgConfig.oscsel, VAR_3,
                        &VAR_2.mcgConfig.pll0Config);

    FUNC_2(VAR_2.mcgConfig.irclkEnableMode,
                                  VAR_2.mcgConfig.ircs, VAR_2.mcgConfig.fcrdiv);

    FUNC_3(&VAR_2.simConfig);

    VAR_1 = VAR_2.coreClock;
}
