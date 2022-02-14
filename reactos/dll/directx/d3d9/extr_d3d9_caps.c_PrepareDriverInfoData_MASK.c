
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwSize; int ddRVal; int lpvData; int dwExpectedSize; int guidInfo; } ;
typedef int LPVOID ;
typedef int DWORD ;
typedef TYPE_1__ DD_GETDRIVERINFODATA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(DD_GETDRIVERINFODATA* VAR_2, LPVOID VAR_3, DWORD VAR_4)
{
    FUNC_0(VAR_2, 0, sizeof(DD_GETDRIVERINFODATA));
    VAR_2->dwSize = sizeof(DD_GETDRIVERINFODATA);
    VAR_2->guidInfo = VAR_1;
    VAR_2->dwExpectedSize = VAR_4;
    VAR_2->lpvData = VAR_3;
    VAR_2->ddRVal = VAR_0;
}
