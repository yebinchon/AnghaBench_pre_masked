
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
typedef int (* ToolbarChangeControlCallback ) (int ,int ,int) ;
struct TYPE_4__ {int IsVertical; scalar_t__ HideVertical; scalar_t__ iCommand; int hWndControl; } ;
struct TYPE_3__ {int fsStyle; scalar_t__ dwData; } ;
typedef TYPE_1__ TBBUTTON ;
typedef TYPE_2__* PTBCUSTCTL ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

VOID
FUNC_2(HWND VAR_8,
                           ToolbarChangeControlCallback VAR_9)
{
    BOOL VAR_10;
    DWORD VAR_11, VAR_12;
    TBBUTTON VAR_13;

    VAR_10 = ((FUNC_0(VAR_8,
                         VAR_6,
                         0,
                         0) & VAR_0) != 0);

    VAR_11 = (DWORD)FUNC_0(VAR_8,
                                  VAR_4,
                                  0,
                                  0);

    for (VAR_12 = 0;
         VAR_12 != VAR_11;
         VAR_12++)
    {
        if (FUNC_0(VAR_8,
                        VAR_5,
                        (WPARAM)VAR_12,
                        (LPARAM)&VAR_13))
        {
            if ((VAR_13.fsStyle & VAR_3) && VAR_13.dwData != 0)
            {
                PTBCUSTCTL VAR_14 = (PTBCUSTCTL)VAR_13.dwData;

                VAR_14->IsVertical = VAR_10;

                if (VAR_14->HideVertical)
                {
                    FUNC_1(VAR_14->hWndControl,
                               (VAR_10 ? VAR_1 : VAR_2));
                    goto ShowHideSep;
                }
                else if (VAR_14->IsVertical != VAR_10)
                {
                    VAR_9(VAR_8,
                                   VAR_14->hWndControl,
                                   VAR_10);

ShowHideSep:

                    FUNC_0(VAR_8,
                                VAR_7,
                                (WPARAM)VAR_14->iCommand,
                                (LPARAM)VAR_10 && VAR_14->HideVertical);
                }
            }
        }
    }
}
