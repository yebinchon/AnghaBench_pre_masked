
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int y; int x; } ;
struct TYPE_14__ {int right; int left; int bottom; int top; } ;
struct TYPE_12__ {int right; int left; int bottom; int top; } ;
struct TYPE_11__ {int bottom; int top; int right; int left; } ;
struct TYPE_13__ {int dwStyle; scalar_t__ lPos; TYPE_2__ rcChannel; TYPE_1__ rcThumb; } ;
typedef TYPE_3__ TRACKBAR_INFO ;
typedef TYPE_4__ RECT ;
typedef TYPE_5__ POINT ;
typedef scalar_t__ LONG ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_5__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__ const*,int) ;

__attribute__((used)) static LONG
FUNC_2 (const TRACKBAR_INFO *VAR_1, POINT VAR_2)
{
    RECT VAR_3;

    if (VAR_1->dwStyle & VAR_0) {
 VAR_3.top = VAR_1->rcChannel.top;
 VAR_3.bottom = VAR_1->rcChannel.bottom;
 VAR_3.left = VAR_1->rcThumb.left;
 VAR_3.right = VAR_1->rcThumb.right;
    } else {
 VAR_3.top = VAR_1->rcThumb.top;
 VAR_3.bottom = VAR_1->rcThumb.bottom;
 VAR_3.left = VAR_1->rcChannel.left;
 VAR_3.right = VAR_1->rcChannel.right;
    }


    if (FUNC_0(&VAR_3, VAR_2))
    {
 int VAR_4 = (VAR_1->dwStyle & VAR_0) ? VAR_2.y : VAR_2.x;

        LONG VAR_5 = FUNC_1(VAR_1, VAR_4);

 return VAR_5 - VAR_1->lPos;
    }

    return 0;
}
