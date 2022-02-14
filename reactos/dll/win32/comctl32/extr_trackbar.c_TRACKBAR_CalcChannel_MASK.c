
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_5__ {int uThumbLen; int dwStyle; int hwndSelf; TYPE_2__ rcChannel; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef TYPE_2__ RECT ;
typedef int INT ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1 (TRACKBAR_INFO *VAR_5)
{
    INT VAR_6, VAR_7, VAR_8;
    RECT VAR_9, *VAR_10 = & VAR_5->rcChannel;

    FUNC_0 (VAR_5->hwndSelf, &VAR_9);

    VAR_7 = VAR_5->uThumbLen / 4;
    VAR_8 = VAR_7 + 3;
    VAR_6 = (VAR_5->dwStyle & VAR_1) ? VAR_7*3 : 4;
    if (VAR_5->dwStyle & VAR_4) {
        VAR_10->top = VAR_9.top + VAR_8;
        VAR_10->bottom = VAR_9.bottom - VAR_8;
        if (VAR_5->dwStyle & VAR_1)
            VAR_10->left = VAR_9.left + ((VAR_5->uThumbLen - VAR_6 + 2) / 2);
        else
            VAR_10->left = VAR_9.left + (VAR_5->uThumbLen / 2) - 1;
        if (VAR_5->dwStyle & VAR_0) {
            if (VAR_5->dwStyle & VAR_2)
                VAR_10->left += 1;
            else
                VAR_10->left += 9;
        }
        else if (VAR_5->dwStyle & VAR_3) {
            if (VAR_5->dwStyle & VAR_2)
                VAR_10->left += 2;
            else
                VAR_10->left += 10;
        }
        VAR_10->right = VAR_10->left + VAR_6;
    } else {
        VAR_10->left = VAR_9.left + VAR_8;
        VAR_10->right = VAR_9.right - VAR_8;
        if (VAR_5->dwStyle & VAR_1)
            VAR_10->top = VAR_9.top + ((VAR_5->uThumbLen - VAR_6 + 2) / 2);
        else
            VAR_10->top = VAR_9.top + (VAR_5->uThumbLen / 2) - 1;
        if (VAR_5->dwStyle & VAR_0) {
            if (VAR_5->dwStyle & VAR_2)
                VAR_10->top += 1;
            else
                VAR_10->top += 9;
        }
        else if (VAR_5->dwStyle & VAR_3) {
            if (VAR_5->dwStyle & VAR_2)
                VAR_10->top += 2;
            else
                VAR_10->top += 10;
        }
        VAR_10->bottom = VAR_10->top + VAR_6;
    }
}
