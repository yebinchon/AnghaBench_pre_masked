
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wDeviceType; void* dwNumber; void* dwRetSize; int lpstrReturn; scalar_t__ dwCallback; } ;
typedef TYPE_1__ MCI_SYSINFO_PARMS ;
typedef int LPTSTR ;
typedef int DWORD_PTR ;
typedef void* DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static DWORD
FUNC_1(DWORD VAR_4, LPTSTR VAR_5, DWORD VAR_6)
{
    MCI_SYSINFO_PARMS VAR_7;

    VAR_7.dwCallback = 0;
    VAR_7.lpstrReturn = VAR_5;
    VAR_7.dwRetSize = VAR_6;
    VAR_7.dwNumber = VAR_4;
    VAR_7.wDeviceType = VAR_1;

    return FUNC_0(VAR_0, VAR_2, VAR_3, (DWORD_PTR)&VAR_7);
}
