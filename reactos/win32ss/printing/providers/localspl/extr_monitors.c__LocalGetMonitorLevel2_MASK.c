
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {scalar_t__ pwszFileName; scalar_t__ pwszName; } ;
typedef scalar_t__ PWSTR ;
typedef scalar_t__ PMONITOR_INFO_2W ;
typedef TYPE_1__* PLOCAL_PRINT_MONITOR ;
typedef int * PDWORD ;
typedef scalar_t__ PCWSTR ;
typedef int PBYTE ;
typedef int MONITOR_INFO_2W ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(PLOCAL_PRINT_MONITOR VAR_3, PMONITOR_INFO_2W* VAR_4, PBYTE* VAR_5, PDWORD VAR_6)
{
    DWORD VAR_7;
    DWORD VAR_8;
    PCWSTR VAR_9[3];


    if (!VAR_4)
    {
        VAR_8 = (FUNC_1(VAR_3->pwszName) + 1) * sizeof(WCHAR);
        VAR_7 = (FUNC_1(VAR_3->pwszFileName) + 1) * sizeof(WCHAR);

        *VAR_6 += sizeof(MONITOR_INFO_2W) + VAR_8 + VAR_0 + VAR_7;
        return;
    }


    VAR_9[0] = VAR_3->pwszName;


    VAR_9[1] = (PWSTR)VAR_2;


    VAR_9[2] = VAR_3->pwszFileName;


    *VAR_5 = FUNC_0(VAR_9, (PBYTE)(*VAR_4), VAR_1, *VAR_5);
    (*VAR_4)++;
}
