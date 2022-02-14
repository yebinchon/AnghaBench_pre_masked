
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {scalar_t__ pLocalDrvrInst; scalar_t__ hDrvr; } ;
typedef TYPE_1__* PWINE_ACMDRIVER ;
typedef int MMRESULT ;
typedef int LPARAM ;
typedef int HACMDRIVER ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;

MMRESULT FUNC_3(HACMDRIVER VAR_1, UINT VAR_2, LPARAM VAR_3, LPARAM VAR_4)
{
    PWINE_ACMDRIVER VAR_5 = FUNC_1(VAR_1);

    if (!VAR_5) return VAR_0;
    if (VAR_5->hDrvr) return FUNC_2(VAR_5->hDrvr, VAR_2, VAR_3, VAR_4);
    if (VAR_5->pLocalDrvrInst) return FUNC_0(VAR_5->pLocalDrvrInst, VAR_2, VAR_3, VAR_4);

    return VAR_0;
}
