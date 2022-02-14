
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_8__ {void* IsVertical; void* iCommand; int hWndControl; void* HideVertical; } ;
struct TYPE_7__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_6__ {int fsState; scalar_t__ dwData; int fsStyle; void* idCommand; scalar_t__ iBitmap; int member_0; } ;
typedef int TBCUSTCTL ;
typedef TYPE_1__ TBBUTTON ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PTBCUSTCTL ;
typedef int LPARAM ;
typedef void* INT ;
typedef int HWND ;
typedef scalar_t__ DWORD_PTR ;
typedef void* BOOL ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;

BOOL
FUNC_5(HWND VAR_12,
                             HWND VAR_13,
                             INT VAR_14,
                             INT VAR_15,
                             BOOL VAR_16)
{
    PTBCUSTCTL VAR_17;
    RECT VAR_18, VAR_19;

    VAR_17 = FUNC_1(VAR_2,
                     0,
                     sizeof(TBCUSTCTL));
    if (VAR_17 == ((void*)0))
        return VAR_1;

    VAR_17->HideVertical = VAR_16;
    VAR_17->hWndControl = VAR_13;
    VAR_17->iCommand = VAR_15;

    if (FUNC_0(VAR_13,
                      &VAR_18))
    {
        TBBUTTON VAR_20 = {0};

        VAR_20.iBitmap = VAR_18.right - VAR_18.left;
        VAR_20.idCommand = VAR_15;
        VAR_20.fsStyle = VAR_7;
        VAR_20.dwData = (DWORD_PTR)VAR_17;

        if (FUNC_2(VAR_12,
                        VAR_9,
                        0,
                        0) & VAR_0)
        {
            if (VAR_16)
                VAR_20.fsState |= VAR_6;

            VAR_17->IsVertical = VAR_11;
        }
        else
            VAR_17->IsVertical = VAR_1;

        if (FUNC_2(VAR_12,
                        VAR_10,
                        (WPARAM)VAR_14,
                        (LPARAM)&VAR_20))
        {
            if (FUNC_2(VAR_12,
                            VAR_8,
                            (WPARAM)VAR_14,
                            (LPARAM)&VAR_19))
            {
                FUNC_3(VAR_13,
                             ((void*)0),
                             VAR_19.left,
                             VAR_19.top,
                             VAR_19.right - VAR_19.left,
                             VAR_19.bottom - VAR_19.top,
                             VAR_3);

                FUNC_4(VAR_13,
                           VAR_5);

                return VAR_11;
            }
            else if (VAR_20.fsState & VAR_6)
            {
                FUNC_4(VAR_13,
                           VAR_4);
            }
        }
    }

    return VAR_1;
}
