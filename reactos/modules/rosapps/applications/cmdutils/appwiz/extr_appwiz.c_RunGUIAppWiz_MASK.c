
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int shInputDll ;
struct TYPE_4__ {int cbSize; void* lpParameters; void* lpFile; void* lpVerb; int * hwnd; } ;
typedef TYPE_1__ SHELLEXECUTEINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

void FUNC_4()
{
    SHELLEXECUTEINFO VAR_2;

    FUNC_3(&VAR_2, 0x0, sizeof(SHELLEXECUTEINFO));
    VAR_2.cbSize = sizeof(VAR_2);
    VAR_2.hwnd = ((void*)0);
    VAR_2.lpVerb = FUNC_2("open");
    VAR_2.lpFile = FUNC_2("RunDll32.exe");
    VAR_2.lpParameters = FUNC_2("shell32.dll,Control_RunDLL appwiz.cpl");

    if (FUNC_1(&VAR_2) == 0)
    {
        FUNC_0(((void*)0), FUNC_2("Can not start appwiz.cpl"), ((void*)0), VAR_1 | VAR_0);
    }
}
