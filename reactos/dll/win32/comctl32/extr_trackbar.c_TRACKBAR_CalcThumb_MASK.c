
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int left; int right; int top; int bottom; } ;
struct TYPE_7__ {int bottom; int top; int right; int left; } ;
struct TYPE_8__ {int lRangeMax; int lRangeMin; int uThumbLen; int dwStyle; TYPE_1__ rcChannel; int hwndSelf; } ;
typedef TYPE_2__ TRACKBAR_INFO ;
typedef TYPE_3__ RECT ;
typedef int LONG ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1 (const TRACKBAR_INFO *VAR_5, LONG VAR_6, RECT *VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11;
    RECT VAR_12;

    VAR_8 = VAR_5->lRangeMax - VAR_5->lRangeMin;
    VAR_11 = (VAR_5->uThumbLen / 2) | 1;

    if (!VAR_8) VAR_8 = 1;

    FUNC_0(VAR_5->hwndSelf, &VAR_12);
    if (VAR_5->dwStyle & VAR_4)
    {
     VAR_10 = VAR_5->rcChannel.bottom - VAR_5->rcChannel.top - VAR_11;

        if ((VAR_5->dwStyle & (VAR_0 | VAR_1)) && !(VAR_5->dwStyle & VAR_2))
            VAR_7->left = 10;
        else
            VAR_7->left = 2;
        VAR_7->right = VAR_7->left + VAR_5->uThumbLen;
        VAR_7->top = VAR_5->rcChannel.top +
                     (VAR_10*(VAR_6 - VAR_5->lRangeMin))/VAR_8;
        VAR_7->bottom = VAR_7->top + VAR_11;
    }
    else
    {
     VAR_9 = VAR_5->rcChannel.right - VAR_5->rcChannel.left - VAR_11;

        VAR_7->left = VAR_5->rcChannel.left +
                      (VAR_9*(VAR_6 - VAR_5->lRangeMin))/VAR_8;
        VAR_7->right = VAR_7->left + VAR_11;
        if ((VAR_5->dwStyle & (VAR_0 | VAR_3)) && !(VAR_5->dwStyle & VAR_2))
            VAR_7->top = 10;
        else
            VAR_7->top = 2;
        VAR_7->bottom = VAR_7->top + VAR_5->uThumbLen;
    }
}
