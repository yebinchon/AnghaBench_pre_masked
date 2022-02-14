
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int shInputDll ;
typedef int VOID ;
struct TYPE_4__ {int cbSize; void* lpParameters; void* lpFile; void* lpVerb; int hwnd; } ;
typedef TYPE_1__ SHELLEXECUTEINFO ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,void*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static VOID
FUNC_4(HWND VAR_2)
{
    SHELLEXECUTEINFO VAR_3;

    FUNC_3(&VAR_3, 0x0, sizeof(SHELLEXECUTEINFO));

    VAR_3.cbSize = sizeof(VAR_3);
    VAR_3.hwnd = VAR_2;
    VAR_3.lpVerb = FUNC_2("open");
    VAR_3.lpFile = FUNC_2("rundll32.exe");
    VAR_3.lpParameters = FUNC_2("shell32.dll,Control_RunDLL hdwwiz.cpl");

    if (FUNC_1(&VAR_3) == 0)
    {
        FUNC_0(((void*)0),
                   FUNC_2("Can't start hdwwiz.cpl"),
                   ((void*)0),
                   VAR_1 | VAR_0);
    }
}
