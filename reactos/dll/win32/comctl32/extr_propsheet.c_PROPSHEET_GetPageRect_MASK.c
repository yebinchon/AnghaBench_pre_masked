
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int dwFlags; } ;
struct TYPE_10__ {int dwFlags; } ;
struct TYPE_12__ {TYPE_1__ ppshheader; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_11__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ PropSheetInfo ;
typedef int LPPOINT ;
typedef TYPE_4__* LPCPROPSHEETPAGEW ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_5(const PropSheetInfo * VAR_11, HWND VAR_12,
                                  RECT *VAR_13, LPCPROPSHEETPAGEW VAR_14)
{
    if (VAR_11->ppshheader.dwFlags & VAR_3) {
        HWND VAR_15;
        RECT VAR_16;

        if (((VAR_11->ppshheader.dwFlags & (VAR_6 | VAR_7)) &&
             (VAR_11->ppshheader.dwFlags & VAR_4) &&
             !(VAR_14->dwFlags & VAR_8)) ||
            (VAR_11->ppshheader.dwFlags & VAR_5))
        {
            VAR_13->left = VAR_13->top = VAR_10;
        }
        else
        {
            VAR_13->left = VAR_13->top = 0;
        }
        VAR_13->right = VAR_11->width - VAR_13->left;
        VAR_13->bottom = VAR_11->height - VAR_13->top;
        FUNC_2(VAR_12, VAR_13);

        if ((VAR_11->ppshheader.dwFlags & (VAR_6 | VAR_7)) &&
            (VAR_11->ppshheader.dwFlags & VAR_4) &&
            !(VAR_14->dwFlags & VAR_8))
        {
            VAR_15 = FUNC_1(VAR_12, VAR_1);
            FUNC_0(VAR_15, &VAR_16);
            FUNC_3(VAR_15, VAR_12, (LPPOINT) &VAR_16, 2);
            VAR_13->top += VAR_16.bottom + 1;
        }
    } else {
        HWND VAR_17 = FUNC_1(VAR_12, VAR_2);
        FUNC_0(VAR_17, VAR_13);
        FUNC_4(VAR_17, VAR_9, VAR_0, (LPARAM)VAR_13);
        FUNC_3(VAR_17, VAR_12, (LPPOINT)VAR_13, 2);
    }
}
