
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {int iGrabbedBand; int fStatus; int hwndSelf; TYPE_1__ dragStart; TYPE_1__ dragNow; } ;
typedef int RECT ;
typedef TYPE_2__ REBAR_INFO ;
typedef int NMHDR ;
typedef int LRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 () ;
 int VAR_3 ;

__attribute__((used)) static LRESULT
FUNC_5 (REBAR_INFO *VAR_4)
{
    if (VAR_4->iGrabbedBand >= 0)
    {
        NMHDR VAR_5;
        RECT VAR_6;

        VAR_4->dragStart.x = 0;
        VAR_4->dragStart.y = 0;
        VAR_4->dragNow = VAR_4->dragStart;

        FUNC_4 ();

        if (VAR_4->fStatus & VAR_0) {
            FUNC_2(&VAR_5, VAR_4, VAR_2);
            FUNC_3 (VAR_4, VAR_4->iGrabbedBand, VAR_1);
            VAR_4->fStatus &= ~VAR_0;
        }

        VAR_4->iGrabbedBand = -1;

        FUNC_0(VAR_4->hwndSelf, &VAR_6);
        FUNC_1(VAR_4->hwndSelf, ((void*)0), VAR_3);
    }

    return 0;
}
