
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nUseCount; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
typedef scalar_t__ UINT ;
typedef int MCIDEVICEID ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static WINE_MCIMIDI* FUNC_2(MCIDEVICEID VAR_1, UINT VAR_2)
{
    WINE_MCIMIDI* VAR_3 = (WINE_MCIMIDI*)FUNC_1(VAR_1);

    if (VAR_3 == ((void*)0) || ((VAR_3->nUseCount == 0) ^ (VAR_2 == VAR_0))) {
 FUNC_0("Invalid wDevID=%u\n", VAR_1);
 return 0;
    }
    return VAR_3;
}
