
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {scalar_t__ pwszPortName; } ;
struct TYPE_5__ {int fPortType; scalar_t__ Reserved; } ;
typedef scalar_t__ PWSTR ;
typedef TYPE_1__* PPORT_INFO_2W ;
typedef int PORT_INFO_2W ;
typedef TYPE_2__* PLOCALMON_PORT ;
typedef int * PDWORD ;
typedef scalar_t__ PCWSTR ;
typedef int PBYTE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(PLOCALMON_PORT VAR_7, PPORT_INFO_2W* VAR_8, PBYTE* VAR_9, PDWORD VAR_10)
{
    DWORD VAR_11;
    PCWSTR VAR_12[3];


    if (!VAR_8)
    {
        VAR_11 = (FUNC_1(VAR_7->pwszPortName) + 1) * sizeof(WCHAR);

        *VAR_10 += sizeof(PORT_INFO_2W) + VAR_11 + VAR_2 + VAR_3;
        return;
    }


    (*VAR_8)->fPortType = VAR_1 | VAR_0;
    (*VAR_8)->Reserved = 0;


    VAR_12[0] = VAR_7->pwszPortName;


    VAR_12[1] = (PWSTR)VAR_5;


    VAR_12[2] = (PWSTR)VAR_6;


    *VAR_9 = FUNC_0(VAR_12, (PBYTE)(*VAR_8), VAR_4, *VAR_9);
    (*VAR_8)++;
}
