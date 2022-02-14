
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_19__ {scalar_t__ left; } ;
struct TYPE_21__ {int cxEffective; int cx; TYPE_1__ rcBand; } ;
struct TYPE_20__ {scalar_t__ iGrabbedBand; int dwStyle; scalar_t__ ihitoffset; int uNumBands; } ;
typedef TYPE_2__ REBAR_INFO ;
typedef TYPE_3__ REBAR_BAND ;
typedef TYPE_4__ POINT ;
typedef scalar_t__ INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_11 (REBAR_INFO *VAR_4, const POINT *VAR_5)




{
    REBAR_BAND *VAR_6;
    INT VAR_7, VAR_8, VAR_9;
    INT VAR_10, VAR_11, VAR_12 = 0;
    BOOL VAR_13 = VAR_1;

    VAR_7 = VAR_4->iGrabbedBand;
    VAR_8 = FUNC_8(VAR_4, VAR_7);
    VAR_9 = FUNC_9(VAR_4, VAR_7);
    VAR_6 = FUNC_2(VAR_4, VAR_7);

    VAR_11 = VAR_6->rcBand.left;
    VAR_10 = (VAR_4->dwStyle&VAR_0 ? VAR_5->y : VAR_5->x)
                    - (VAR_11 + VAR_2 - VAR_4->ihitoffset);


    if(VAR_7 != VAR_8)
    {
        if (VAR_10 < 0) {
            VAR_12 = FUNC_7(VAR_4, VAR_8, VAR_7, -VAR_10, VAR_3);

            if(VAR_12 < -VAR_10)
            {
                VAR_6->cxEffective += -VAR_10 - VAR_12;
                VAR_6->cx = VAR_6->cxEffective;
                VAR_13 = VAR_3;
            }

        } else if (VAR_10 > 0) {

            VAR_12 = VAR_10;
            if (FUNC_10(VAR_4, VAR_7) >= 0)
                VAR_12 = FUNC_6(VAR_4, VAR_7, VAR_9, VAR_10, VAR_3);

            if(VAR_12 < VAR_10)
            {
                REBAR_BAND *VAR_14 = FUNC_2(VAR_4, FUNC_10(VAR_4, VAR_7));
                VAR_14->cxEffective += VAR_10 - VAR_12;
                VAR_14->cx = VAR_6->cxEffective;
                VAR_13 = VAR_3;
            }

        }
    }

    if(!VAR_13)
    {


        FUNC_3(VAR_4, VAR_7, VAR_8,
            VAR_9, VAR_11 + VAR_10, VAR_3);
    }

    FUNC_5(VAR_4, VAR_8, VAR_9);
    if (VAR_4->dwStyle & VAR_0)
        FUNC_1(VAR_4, 0, VAR_4->uNumBands);
    else
        FUNC_0(VAR_4, 0, VAR_4->uNumBands);
    FUNC_4(VAR_4, VAR_8, VAR_9);
}
