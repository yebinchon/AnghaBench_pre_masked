
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int top; int bottom; int left; int right; } ;
struct TYPE_9__ {int bottom; int top; int left; int right; } ;
struct TYPE_8__ {int bottom; int top; int right; int left; } ;
struct TYPE_10__ {int lRangeMax; int lRangeMin; int dwStyle; int lSelMin; int lSelMax; TYPE_2__ rcChannel; TYPE_1__ rcThumb; TYPE_4__ rcSelection; } ;
typedef TYPE_3__ TRACKBAR_INFO ;
typedef TYPE_4__ RECT ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_3 (TRACKBAR_INFO *VAR_1)
{
    RECT *VAR_2 = &VAR_1->rcSelection;
    int VAR_3 = VAR_1->lRangeMax - VAR_1->lRangeMin;
    int VAR_4, VAR_5, VAR_6;

    if (VAR_3 <= 0) {
        FUNC_0 (VAR_2);
    } else {
        if (VAR_1->dwStyle & VAR_0) {
            VAR_4 = (VAR_1->rcThumb.bottom - VAR_1->rcThumb.top)/2;
            VAR_5 = VAR_1->rcChannel.bottom - VAR_1->rcChannel.top - VAR_4*2;
            VAR_2->top = VAR_1->rcChannel.top + VAR_4 +
                (VAR_5*VAR_1->lSelMin)/VAR_3;
            VAR_2->bottom = VAR_1->rcChannel.top + VAR_4 +
                (VAR_5*VAR_1->lSelMax)/VAR_3;
            VAR_2->left = VAR_1->rcChannel.left + 3;
            VAR_2->right = VAR_1->rcChannel.right - 3;
        } else {
            VAR_4 = (VAR_1->rcThumb.right - VAR_1->rcThumb.left)/2;
            VAR_6 = VAR_1->rcChannel.right - VAR_1->rcChannel.left - VAR_4*2;
            VAR_2->left = VAR_1->rcChannel.left + VAR_4 +
                (VAR_6*VAR_1->lSelMin)/VAR_3;
            VAR_2->right = VAR_1->rcChannel.left + VAR_4 +
                (VAR_6*VAR_1->lSelMax)/VAR_3;
            VAR_2->top = VAR_1->rcChannel.top + 3;
            VAR_2->bottom = VAR_1->rcChannel.bottom - 3;
        }
    }

    FUNC_1("selection[%s]\n", FUNC_2(VAR_2));
}
