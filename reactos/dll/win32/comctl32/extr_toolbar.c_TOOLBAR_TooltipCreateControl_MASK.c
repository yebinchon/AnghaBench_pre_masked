
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int hdr; scalar_t__ hwndToolTips; } ;
struct TYPE_7__ {int nNumButtons; int * buttons; scalar_t__ hwndToolTip; int hwndSelf; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ NMTOOLTIPSCREATED ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(TOOLBAR_INFO *VAR_4)
{
    int VAR_5;
    NMTOOLTIPSCREATED VAR_6;

    VAR_4->hwndToolTip = FUNC_0(0, VAR_2, ((void*)0), VAR_3,
            VAR_0, VAR_0, VAR_0, VAR_0,
            VAR_4->hwndSelf, 0, 0, 0);

    if (!VAR_4->hwndToolTip)
        return;


    VAR_6.hwndToolTips = VAR_4->hwndToolTip;
    FUNC_1(&VAR_6.hdr, VAR_4, VAR_1);

    for (VAR_5 = 0; VAR_5 < VAR_4->nNumButtons; VAR_5++)
    {
        FUNC_2(VAR_4, &VAR_4->buttons[VAR_5]);
        FUNC_3(VAR_4, &VAR_4->buttons[VAR_5]);
    }
}
