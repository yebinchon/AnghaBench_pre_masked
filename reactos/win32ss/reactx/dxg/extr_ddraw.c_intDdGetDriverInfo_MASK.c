
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_9__ {int dwFlags; scalar_t__ (* GetDriverInfo ) (TYPE_2__*) ;} ;
struct TYPE_11__ {TYPE_1__ ddHalInfo; int dhpdev; } ;
struct TYPE_10__ {int dwSize; int dwExpectedSize; int dwActualSize; int ddRVal; struct TYPE_10__* lpvData; int guidInfo; int dhpdev; } ;
typedef TYPE_2__* PVOID ;
typedef TYPE_3__* PEDD_DIRECTDRAW_GLOBAL ;
typedef int GUID ;
typedef TYPE_2__ DD_GETDRIVERINFODATA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

BOOL FUNC_3(PEDD_DIRECTDRAW_GLOBAL VAR_4, GUID VAR_5, PVOID VAR_6, ULONG VAR_7, ULONG *VAR_8)
{
    DD_GETDRIVERINFODATA VAR_9;

    if (VAR_4->ddHalInfo.dwFlags & VAR_1 && VAR_4->ddHalInfo.GetDriverInfo)
    {
        FUNC_1(&VAR_9, 0, sizeof(DD_GETDRIVERINFODATA));
        VAR_9.dwSize = sizeof(DD_GETDRIVERINFODATA);
        VAR_9.dhpdev = VAR_4->dhpdev;
        FUNC_0(&VAR_9.guidInfo, &VAR_5, sizeof(GUID));
        VAR_9.dwExpectedSize = VAR_7;
        VAR_9.lpvData = VAR_6;
        VAR_9.ddRVal = VAR_0;
        if (VAR_4->ddHalInfo.GetDriverInfo(&VAR_9) && !VAR_9.ddRVal)
        {
            if (VAR_8)
                *VAR_8 = VAR_9.dwActualSize;
            return VAR_3;
        }

    }


    FUNC_1(VAR_6, 0, VAR_7);
    if (VAR_8)
        *VAR_8 = 0;
    return VAR_2;
}
