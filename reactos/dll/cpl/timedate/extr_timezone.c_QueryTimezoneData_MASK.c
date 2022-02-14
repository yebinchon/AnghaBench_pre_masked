
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TimezoneInfo; int DaylightName; int StandardName; int Description; } ;
typedef TYPE_1__* PTIMEZONE_ENTRY ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int *,int *,int ,int*) ;

__attribute__((used)) static
LONG
FUNC_1(
    HKEY VAR_1,
    PTIMEZONE_ENTRY VAR_2)
{
    DWORD VAR_3;
    LONG VAR_4;

    VAR_3 = sizeof(VAR_2->Description);
    VAR_4 = FUNC_0(VAR_1,
                              L"Display",
                              ((void*)0),
                              ((void*)0),
                              (LPBYTE)&VAR_2->Description,
                              &VAR_3);
    if (VAR_4 != VAR_0)
        return VAR_4;

    VAR_3 = sizeof(VAR_2->StandardName);
    VAR_4 = FUNC_0(VAR_1,
                              L"Std",
                              ((void*)0),
                              ((void*)0),
                              (LPBYTE)&VAR_2->StandardName,
                              &VAR_3);
    if (VAR_4 != VAR_0)
        return VAR_4;

    VAR_3 = sizeof(VAR_2->DaylightName);
    VAR_4 = FUNC_0(VAR_1,
                              L"Dlt",
                              ((void*)0),
                              ((void*)0),
                              (LPBYTE)&VAR_2->DaylightName,
                              &VAR_3);
    if (VAR_4 != VAR_0)
        return VAR_4;

    VAR_3 = sizeof(VAR_2->TimezoneInfo);
    VAR_4 = FUNC_0(VAR_1,
                              L"TZI",
                              ((void*)0),
                              ((void*)0),
                              (LPBYTE)&VAR_2->TimezoneInfo,
                              &VAR_3);
    return VAR_4;
}
