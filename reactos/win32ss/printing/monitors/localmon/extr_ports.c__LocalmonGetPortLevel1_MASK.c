
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int pwszPortName; } ;
typedef scalar_t__ PPORT_INFO_1W ;
typedef int PORT_INFO_1W ;
typedef TYPE_1__* PLOCALMON_PORT ;
typedef int* PDWORD ;
typedef int PCWSTR ;
typedef int PBYTE ;
typedef int DWORD ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(PLOCALMON_PORT VAR_1, PPORT_INFO_1W* VAR_2, PBYTE* VAR_3, PDWORD VAR_4)
{
    DWORD VAR_5;
    PCWSTR VAR_6[1];


    if (!VAR_2)
    {
        VAR_5 = (FUNC_1(VAR_1->pwszPortName) + 1) * sizeof(WCHAR);

        *VAR_4 += sizeof(PORT_INFO_1W) + VAR_5;
        return;
    }


    VAR_6[0] = VAR_1->pwszPortName;


    *VAR_3 = FUNC_0(VAR_6, (PBYTE)(*VAR_2), VAR_0, *VAR_3);
    (*VAR_2)++;
}
