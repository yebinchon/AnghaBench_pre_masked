
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int szDestinationName; TYPE_2__* pProfileData; } ;
struct TYPE_6__ {size_t dwProfileCount; size_t dwSelectedProfileIndex; TYPE_1__* pProfiles; } ;
struct TYPE_5__ {int szFriendlyName; } ;
typedef TYPE_3__* PPROFILENAMES ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static
BOOL
FUNC_1(
    PPROFILENAMES VAR_2,
    BOOL VAR_3)
{
    DWORD VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->pProfileData->dwProfileCount; VAR_4++)
    {
        if (VAR_3 == VAR_1 && VAR_4 == VAR_2->pProfileData->dwSelectedProfileIndex)
            continue;

        if (FUNC_0(VAR_2->pProfileData->pProfiles[VAR_4].szFriendlyName, VAR_2->szDestinationName) == 0)
            return VAR_1;
    }

    return VAR_0;
}
