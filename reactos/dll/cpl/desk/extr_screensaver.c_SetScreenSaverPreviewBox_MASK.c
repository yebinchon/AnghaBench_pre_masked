
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int si ;
typedef int VOID ;
typedef int ULONG_PTR ;
struct TYPE_9__ {int cb; int * hProcess; int * hThread; } ;
struct TYPE_10__ {size_t Selection; TYPE_2__ PrevWindowPi; TYPE_1__* ScreenSaverItems; } ;
struct TYPE_8__ {int szFilename; } ;
typedef int TCHAR ;
typedef TYPE_2__ STARTUPINFO ;
typedef TYPE_3__* PDATA ;
typedef scalar_t__ HWND ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int *,int ,int ,int *,int *,TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ,int ) ;

__attribute__((used)) static VOID
FUNC_7(HWND VAR_2, PDATA VAR_3)
{
    HWND VAR_4 = FUNC_2(VAR_2, VAR_1);
    STARTUPINFO VAR_5;
    TCHAR VAR_6[2048];


    if (VAR_3->PrevWindowPi.hProcess)
    {
        FUNC_3(VAR_3->PrevWindowPi.hProcess, 0);
        FUNC_0(VAR_3->PrevWindowPi.hProcess);
        FUNC_0(VAR_3->PrevWindowPi.hThread);
        VAR_3->PrevWindowPi.hThread = VAR_3->PrevWindowPi.hProcess = ((void*)0);
    }

    if (VAR_3->Selection > 0)
    {
        FUNC_6(VAR_6,
                  FUNC_5("%s /p %Iu"),
                  VAR_3->ScreenSaverItems[VAR_3->Selection].szFilename,
                  (ULONG_PTR)VAR_4);

        FUNC_4(&VAR_5, sizeof(VAR_5));
        VAR_5.cb = sizeof(VAR_5);
        FUNC_4(&VAR_3->PrevWindowPi, sizeof(VAR_3->PrevWindowPi));

        if (!FUNC_1(((void*)0),
                           VAR_6,
                           ((void*)0),
                           ((void*)0),
                           VAR_0,
                           0,
                           ((void*)0),
                           ((void*)0),
                           &VAR_5,
                           &VAR_3->PrevWindowPi))
        {
            VAR_3->PrevWindowPi.hThread = VAR_3->PrevWindowPi.hProcess = ((void*)0);
        }
    }
}
