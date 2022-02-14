
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int right; int left; int bottom; int top; } ;
struct TYPE_7__ {int dwStyle; int uThumbLen; int flags; int hwndSelf; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef TYPE_2__ RECT ;
typedef int LRESULT ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static LRESULT
FUNC_3 (TRACKBAR_INFO *VAR_3)
{
    RECT VAR_4;
    int VAR_5, VAR_6;


    VAR_6 = (VAR_3->dwStyle & VAR_0) ? 23 : 21;
    FUNC_0(VAR_3->hwndSelf,&VAR_4);
    if (VAR_3->dwStyle & VAR_1) {
 VAR_5 = VAR_4.right - VAR_4.left;
    } else {
 VAR_5 = VAR_4.bottom - VAR_4.top;
    }
    if (VAR_5 >= VAR_6)
        VAR_3->uThumbLen = VAR_6;
    else
        VAR_3->uThumbLen = VAR_5 > 9 ? VAR_5 - 6 : 4;

    FUNC_1 (VAR_3);
    FUNC_2 (VAR_3);
    VAR_3->flags &= ~VAR_2;

    return 0;
}
