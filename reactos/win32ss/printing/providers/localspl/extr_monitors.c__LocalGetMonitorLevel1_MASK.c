
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int pwszName; } ;
typedef scalar_t__ PMONITOR_INFO_1W ;
typedef TYPE_1__* PLOCAL_PRINT_MONITOR ;
typedef int* PDWORD ;
typedef int PCWSTR ;
typedef int PBYTE ;
typedef int MONITOR_INFO_1W ;
typedef int DWORD ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(PLOCAL_PRINT_MONITOR VAR_1, PMONITOR_INFO_1W* VAR_2, PBYTE* VAR_3, PDWORD VAR_4)
{
    DWORD VAR_5;
    PCWSTR VAR_6[1];


    if (!VAR_2)
    {
        VAR_5 = (FUNC_1(VAR_1->pwszName) + 1) * sizeof(WCHAR);

        *VAR_4 += sizeof(MONITOR_INFO_1W) + VAR_5;
        return;
    }


    VAR_6[0] = VAR_1->pwszName;


    *VAR_3 = FUNC_0(VAR_6, (PBYTE)(*VAR_2), VAR_0, *VAR_3);
    (*VAR_2)++;
}
