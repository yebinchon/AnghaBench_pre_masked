
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_13__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_12__ {scalar_t__ tmHeight; } ;
struct TYPE_11__ {scalar_t__ nMaxTextRows; scalar_t__ nNumButtons; scalar_t__ nNumStrings; int hwndSelf; int * buttons; int hFont; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ TEXTMETRICW ;
typedef int TBUTTON_INFO ;
typedef TYPE_3__ SIZE ;
typedef TYPE_4__* LPSIZE ;
typedef scalar_t__ INT ;
typedef int HFONT ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*,int *) ;
 int FUNC_5 (TYPE_1__ const*,int *,int ,TYPE_3__*) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_7 (const TOOLBAR_INFO *VAR_0, LPSIZE VAR_1)
{
    TBUTTON_INFO *VAR_2;
    INT VAR_3;
    SIZE VAR_4;
    HDC VAR_5;
    HFONT VAR_6;

    VAR_1->cx = 0;
    VAR_1->cy = 0;

    if (VAR_0->nMaxTextRows == 0)
        return;

    VAR_5 = FUNC_0 (VAR_0->hwndSelf);
    VAR_6 = FUNC_3 (VAR_5, VAR_0->hFont);

    if (VAR_0->nNumButtons == 0 && VAR_0->nNumStrings > 0)
    {
        TEXTMETRICW VAR_7;

        FUNC_1(VAR_5, &VAR_7);
        VAR_1->cy = VAR_7.tmHeight;
    }

    VAR_2 = VAR_0->buttons;
    for (VAR_3 = 0; VAR_3 < VAR_0->nNumButtons; VAR_3++, VAR_2++) {
        if(FUNC_4(VAR_0, VAR_2))
        {
            FUNC_5(VAR_0, VAR_2, VAR_5, &VAR_4);
            if (VAR_4.cx > VAR_1->cx)
                VAR_1->cx = VAR_4.cx;
            if (VAR_4.cy > VAR_1->cy)
                VAR_1->cy = VAR_4.cy;
        }
    }

    FUNC_3 (VAR_5, VAR_6);
    FUNC_2 (VAR_0->hwndSelf, VAR_5);

    FUNC_6("max string size %d x %d\n", VAR_1->cx, VAR_1->cy);
}
