
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int fStyle; int cxMinBand; scalar_t__ cxEffective; } ;
struct TYPE_8__ {int iGrabbedBand; int bands; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef int INT ;
typedef int BOOL ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4(REBAR_INFO *VAR_2, INT VAR_3, INT VAR_4,
    INT VAR_5, INT VAR_6, BOOL VAR_7)
{
    REBAR_BAND *VAR_8 = FUNC_2(VAR_2, VAR_3);
    int VAR_9 = 0, VAR_10;
    const BOOL VAR_11 = FUNC_2(VAR_2, VAR_4)->fStyle & VAR_0;


    if(VAR_7)
    {

        for (VAR_10 = VAR_4; VAR_10 < VAR_5; VAR_10 = FUNC_3(VAR_2, VAR_10))
        {
            if(VAR_9 > VAR_6)
                break;
            VAR_9 += FUNC_2(VAR_2, VAR_10)->cxEffective + VAR_1;
        }
    }
    else
    {

        for (VAR_10 = VAR_4; VAR_10 < VAR_5; VAR_10 = FUNC_3(VAR_2, VAR_10))
        {
            const REBAR_BAND *VAR_12 = FUNC_2(VAR_2, VAR_10);
            if(VAR_9 + VAR_12->cxMinBand / 2 > VAR_6)
                break;
            VAR_9 += VAR_12->cxEffective + VAR_1;
        }
    }


    FUNC_0(VAR_2->bands, VAR_3);
    if(VAR_10 > VAR_3)
        VAR_10--;
    FUNC_1(VAR_2->bands, VAR_10, VAR_8);


    VAR_8->fStyle &= ~VAR_0;
    if(VAR_11)
        FUNC_2(VAR_2, VAR_4)->fStyle |= VAR_0;


    if(VAR_2->iGrabbedBand == VAR_3)
    {
        VAR_2->iGrabbedBand = VAR_10;
        return VAR_10;
    }
    else return -1;
}
