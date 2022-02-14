
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int x; int y; } ;
struct TYPE_14__ {int bottom; } ;
struct TYPE_16__ {int fStyle; TYPE_1__ rcBand; } ;
struct TYPE_15__ {int dwStyle; int uNumBands; int iGrabbedBand; int ihitoffset; int bands; } ;
typedef TYPE_2__ REBAR_INFO ;
typedef TYPE_3__ REBAR_BAND ;
typedef TYPE_4__ POINT ;
typedef int INT ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 void* FUNC_1 (int ,int,TYPE_3__*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,int,int,int,int ) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_8 (REBAR_INFO *VAR_4, const POINT *VAR_5)
{
    INT VAR_6 = (VAR_4->dwStyle & VAR_0) ? VAR_5->x : VAR_5->y;
    INT VAR_7, VAR_8, VAR_9;
    REBAR_BAND *VAR_10, *VAR_11;

    if(VAR_4->uNumBands <= 0)
        FUNC_2("There are no bands in this rebar\n");



    if(VAR_4->uNumBands <= 1)
        return;

    VAR_7 = VAR_4->iGrabbedBand;
    VAR_10 = FUNC_3(VAR_4, VAR_7);




    if((VAR_10->fStyle & VAR_2) &&
        (VAR_7 < VAR_4->uNumBands - 1))
        FUNC_3(VAR_4, VAR_7 + 1)->fStyle |= VAR_2;

    if(VAR_6 < 0)
    {

        if(VAR_7==0 && (VAR_4->uNumBands==1 || FUNC_3(VAR_4, 1)->fStyle&VAR_2))
            return;
        FUNC_0(VAR_4->bands, VAR_7);
        VAR_10->fStyle &= ~VAR_2;
        FUNC_3(VAR_4, 0)->fStyle |= VAR_2;
        VAR_4->iGrabbedBand = FUNC_1(
            VAR_4->bands, 0, VAR_10);
    }
    else if(VAR_6 > FUNC_3(VAR_4, VAR_4->uNumBands - 1)->rcBand.bottom)
    {

        if(VAR_7 == VAR_4->uNumBands-1 && VAR_10->fStyle&VAR_2)
            return;
        FUNC_0(VAR_4->bands, VAR_7);
        VAR_10->fStyle |= VAR_2;
        VAR_4->iGrabbedBand = FUNC_1(
            VAR_4->bands, VAR_4->uNumBands - 1, VAR_10);
    }
    else
    {

        VAR_8 = FUNC_6(VAR_4);
        while(VAR_8 < VAR_4->uNumBands)
        {
            VAR_9 = FUNC_7(VAR_4, VAR_8);
            VAR_11 = FUNC_3(VAR_4, VAR_8);
            if(VAR_11->rcBand.bottom > VAR_6)
            {
                FUNC_5(
                    VAR_4, VAR_7, VAR_8, VAR_9,
                    ((VAR_4->dwStyle & VAR_0) ? VAR_5->y : VAR_5->x)
                        - VAR_3 - VAR_4->ihitoffset, VAR_1);
                break;
            }

            VAR_8 = VAR_9;
        }
    }

    FUNC_4(VAR_4);
}
