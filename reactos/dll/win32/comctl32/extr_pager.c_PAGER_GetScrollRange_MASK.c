
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hwndSelf; int dwStyle; scalar_t__ nWidth; scalar_t__ nHeight; scalar_t__ nButtonSize; scalar_t__ hwndChild; } ;
struct TYPE_6__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ PAGER_INFO ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static INT
FUNC_3(PAGER_INFO* VAR_1, BOOL VAR_2)
{
    INT VAR_3 = 0;

    if (VAR_1->hwndChild)
    {
        INT VAR_4, VAR_5;
        RECT VAR_6;
        FUNC_0(VAR_1->hwndSelf, &VAR_6);

        if (VAR_2)
            FUNC_1(VAR_1);
        if (VAR_1->dwStyle & VAR_0)
        {
            VAR_4 = VAR_6.right - VAR_6.left;
            VAR_5 = VAR_1->nWidth;
        }
        else
        {
            VAR_4 = VAR_6.bottom - VAR_6.top;
            VAR_5 = VAR_1->nHeight;
        }

        FUNC_2("childSize = %d,  wndSize = %d\n", VAR_5, VAR_4);
        if (VAR_5 > VAR_4)
            VAR_3 = VAR_5 - VAR_4 + VAR_1->nButtonSize;
    }

    FUNC_2("[%p] returns %d\n", VAR_1->hwndSelf, VAR_3);
    return VAR_3;
}
