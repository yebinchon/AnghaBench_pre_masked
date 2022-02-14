
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int idFrom; int code; int hwndFrom; } ;
struct TYPE_12__ {scalar_t__ iXpos; scalar_t__ iYpos; scalar_t__ iScroll; TYPE_1__ hdr; scalar_t__ iDir; int rcParent; } ;
struct TYPE_11__ {int dwStyle; scalar_t__ nPos; int nButtonSize; int direction; int hwndSelf; int hwndNotify; scalar_t__ hwndChild; } ;
struct TYPE_10__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ PAGER_INFO ;
typedef TYPE_4__ NMPGSCROLL ;
typedef int LPARAM ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_4__*,int) ;

__attribute__((used)) static void
FUNC_7(PAGER_INFO* VAR_7, INT VAR_8)
{
    NMPGSCROLL VAR_9;
    RECT VAR_10;

    if (VAR_7->hwndChild)
    {
        FUNC_6 (&VAR_9, sizeof (NMPGSCROLL));
        VAR_9.hdr.hwndFrom = VAR_7->hwndSelf;
        VAR_9.hdr.idFrom = FUNC_1 (VAR_7->hwndSelf, VAR_0);
        VAR_9.hdr.code = VAR_3;

        FUNC_2(VAR_7->hwndSelf, &VAR_10);
        FUNC_0(VAR_7->hwndSelf, &VAR_9.rcParent);
        VAR_9.iXpos = VAR_9.iYpos = 0;
        VAR_9.iDir = VAR_8;

        if (VAR_7->dwStyle & VAR_4)
        {
            VAR_9.iScroll = VAR_10.right - VAR_10.left;
            VAR_9.iXpos = VAR_7->nPos;
        }
        else
        {
            VAR_9.iScroll = VAR_10.bottom - VAR_10.top;
            VAR_9.iYpos = VAR_7->nPos;
        }
        VAR_9.iScroll -= 2*VAR_7->nButtonSize;

        FUNC_4 (VAR_7->hwndNotify, VAR_6, VAR_9.hdr.idFrom, (LPARAM)&VAR_9);

        FUNC_5("[%p] PGN_SCROLL returns iScroll=%d\n", VAR_7->hwndSelf, VAR_9.iScroll);

        if (VAR_9.iScroll > 0)
        {
            VAR_7->direction = VAR_8;

            if (VAR_8 == VAR_1 || VAR_8 == VAR_2)
                FUNC_3(VAR_7, VAR_7->nPos - VAR_9.iScroll, VAR_5, VAR_5);
            else
                FUNC_3(VAR_7, VAR_7->nPos + VAR_9.iScroll, VAR_5, VAR_5);
        }
        else
            VAR_7->direction = -1;
    }
}
