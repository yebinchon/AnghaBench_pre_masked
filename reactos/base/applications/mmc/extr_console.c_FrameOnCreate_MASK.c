
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int idFirstChild; int hWindowMenu; } ;
struct TYPE_6__ {scalar_t__ lpCreateParams; } ;
struct TYPE_5__ {int hwndMDIClient; void* hMenuConsoleLarge; int hwnd; void* hMenuConsoleSmall; void* AppAuthorMode; } ;
typedef TYPE_1__* PCONSOLE_MAINFRAME_WND ;
typedef int LRESULT ;
typedef int LPVOID ;
typedef int * LPCTSTR ;
typedef TYPE_2__* LPCREATESTRUCT ;
typedef scalar_t__ LPARAM ;
typedef int LONG_PTR ;
typedef int HWND ;
typedef int HMENU ;
typedef int CONSOLE_MAINFRAME_WND ;
typedef TYPE_3__ CLIENTCREATESTRUCT ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (void*,int) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static LRESULT
FUNC_10(HWND VAR_17,
              LPARAM VAR_18)
{
    PCONSOLE_MAINFRAME_WND VAR_19;
    CLIENTCREATESTRUCT VAR_20;
    LPCTSTR VAR_21 = (LPCTSTR)(((LPCREATESTRUCT)VAR_18)->lpCreateParams);

    VAR_19 = FUNC_2(VAR_14,
                     VAR_1,
                     sizeof(CONSOLE_MAINFRAME_WND));
    if (VAR_19 == ((void*)0))
        return -1;

    VAR_19->hwnd = VAR_17;

    FUNC_6(VAR_17,
                     0,
                     (LONG_PTR)VAR_19);

    VAR_19->hMenuConsoleSmall = FUNC_3(VAR_15,
                                       FUNC_4(VAR_3));

    VAR_19->hMenuConsoleLarge = FUNC_3(VAR_15,
                                       FUNC_4(VAR_2));

    if (VAR_21 == ((void*)0))
    {

        VAR_19->AppAuthorMode = VAR_6;

    }
    else
    {
        VAR_19->AppAuthorMode = VAR_6;

    }

    FUNC_5(VAR_19->hwnd,
            VAR_19->hMenuConsoleSmall);

    FUNC_7(VAR_19->hwnd, FUNC_9("ReactOS Management Console"));

    VAR_20.hWindowMenu = FUNC_1(VAR_19->hMenuConsoleLarge, 1);
    VAR_20.idFirstChild = VAR_4;


    VAR_16 = FUNC_0(VAR_10,
                                   L"MDICLIENT",
                                   (LPCTSTR)((void*)0),
                                   VAR_8 | VAR_9 | VAR_13 | VAR_11 | VAR_12 | VAR_7,
                                   VAR_0,
                                   VAR_0,
                                   VAR_0,
                                   VAR_0,
                                   VAR_17,
                                   (HMENU)0xCAC,
                                   VAR_15,
                                   (LPVOID)&VAR_20);

    FUNC_8(VAR_19->hwndMDIClient, VAR_5);

    return 0;
}
