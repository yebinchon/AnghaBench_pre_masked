
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hz; int configfile; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(void) {
    int VAR_6 = -1;
    int VAR_7 = VAR_5.hz;
    int VAR_8;

    VAR_5.hz = VAR_0;
    VAR_8 = FUNC_3(VAR_5.configfile);
    VAR_5.hz = VAR_7;

    if (VAR_8 == -1) goto werr;
    if ((VAR_6 = FUNC_2(VAR_5.configfile,VAR_3)) == -1) goto werr;
    if (FUNC_1(VAR_6) == -1) goto werr;
    if (FUNC_0(VAR_6) == VAR_1) goto werr;
    return;

werr:
    if (VAR_6 != -1) FUNC_0(VAR_6);
    FUNC_4(VAR_2,"WARNING: Sentinel was not able to save the new configuration on disk!!!: %s", FUNC_5(VAR_4));
}
