
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nPos; scalar_t__ TLbtnState; int dwStyle; int nWidth; int nHeight; scalar_t__ hwndChild; int hwndSelf; scalar_t__ nButtonSize; } ;
struct TYPE_5__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ PAGER_INFO ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ,int,int,int,int,int ) ;
 int FUNC_3 (char*,int ,int,int,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(PAGER_INFO* VAR_4)
{
    if (VAR_4->hwndChild)
    {
        RECT VAR_5;
        int VAR_6 = VAR_4->nPos;


        if (VAR_4->TLbtnState == VAR_1)
            VAR_6 += VAR_4->nButtonSize;

        FUNC_0(VAR_4->hwndSelf, &VAR_5);

        if (VAR_4->dwStyle & VAR_2)
        {
            int VAR_7 = FUNC_4(0, VAR_5.right - VAR_5.left);
            if (VAR_4->nWidth < VAR_7)
                VAR_4->nWidth = VAR_7;

            FUNC_3("[%p] SWP %dx%d at (%d,%d)\n", VAR_4->hwndSelf,
                         VAR_4->nWidth, VAR_4->nHeight,
                         -VAR_6, 0);
            FUNC_2(VAR_4->hwndChild, VAR_0,
                         -VAR_6, 0,
                         VAR_4->nWidth, VAR_4->nHeight, 0);
        }
        else
        {
            int VAR_8 = FUNC_4(0, VAR_5.bottom - VAR_5.top);
            if (VAR_4->nHeight < VAR_8)
                VAR_4->nHeight = VAR_8;

            FUNC_3("[%p] SWP %dx%d at (%d,%d)\n", VAR_4->hwndSelf,
                         VAR_4->nWidth, VAR_4->nHeight,
                         0, -VAR_6);
            FUNC_2(VAR_4->hwndChild, VAR_0,
                         0, -VAR_6,
                         VAR_4->nWidth, VAR_4->nHeight, 0);
        }

        FUNC_1(VAR_4->hwndChild, ((void*)0), VAR_3);
    }
}
