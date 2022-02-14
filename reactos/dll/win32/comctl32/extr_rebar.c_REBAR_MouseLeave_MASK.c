
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fDraw; int rcChevron; } ;
struct TYPE_6__ {int ichevronhotBand; int iOldBand; int hwndSelf; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef int LRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int VAR_1 ;

__attribute__((used)) static LRESULT
FUNC_2 (REBAR_INFO *VAR_2)
{
    if (VAR_2->ichevronhotBand >= 0)
    {
        REBAR_BAND *VAR_3 = FUNC_1(VAR_2, VAR_2->ichevronhotBand);
        if (VAR_3->fDraw & VAR_0)
        {
            VAR_3->fDraw &= ~VAR_0;
            FUNC_0(VAR_2->hwndSelf, &VAR_3->rcChevron, VAR_1);
        }
    }
    VAR_2->iOldBand = -1;
    VAR_2->ichevronhotBand = -2;

    return VAR_1;
}
