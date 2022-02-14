
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ato ;
typedef int WCHAR ;
struct TYPE_3__ {int cbSize; int iTimeOutMSec; } ;
typedef int DWORD ;
typedef TYPE_1__ ACCESSTIMEOUT ;


 int FUNC_0 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_1 (char*,char*,int **,int*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(void)
{
    ACCESSTIMEOUT VAR_2;

    WCHAR VAR_3[6];
    DWORD VAR_4;

    VAR_2.cbSize = sizeof(VAR_2);
    FUNC_0(VAR_0, 0, &VAR_2, 0);
    VAR_2.iTimeOutMSec++;
    FUNC_0(VAR_1, 0, &VAR_2, 0);
    VAR_2.iTimeOutMSec--;




    FUNC_0(VAR_1, 0, &VAR_2, 0);

    VAR_4 = 6;
    FUNC_1(L"Control Panel\\Accessibility\\TimeOut", L"TimeToWait", &VAR_3, &VAR_4, ((void*)0));

}
