
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int fStyle; scalar_t__ iRow; scalar_t__ cxMinBand; scalar_t__ cxEffective; scalar_t__ cx; } ;
struct TYPE_15__ {scalar_t__ uNumBands; int dwStyle; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__ const*,int,int) ;
 int FUNC_2 (TYPE_1__ const*,int,int) ;
 TYPE_2__* FUNC_3 (TYPE_1__ const*,int) ;
 int FUNC_4 (TYPE_1__ const*,int,int ) ;
 int FUNC_5 (TYPE_1__ const*,int,int) ;
 int FUNC_6 (TYPE_1__ const*,int,int) ;
 int FUNC_7 (char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_10 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_11 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_12 (TYPE_1__ const*,scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_13 (const REBAR_INFO *VAR_4, INT VAR_5)
{
    REBAR_BAND *VAR_6;
    int VAR_7, VAR_8, VAR_9;







    if (VAR_4->uNumBands == 0 || VAR_5 < 0 || VAR_5 >= VAR_4->uNumBands) {

 FUNC_0("Illegal MinimizeBand, requested=%d, current band count=%d\n",
       VAR_5, VAR_4->uNumBands);
       return VAR_1;
    }


    VAR_6 = FUNC_3(VAR_4, VAR_5);

    if (VAR_6->fStyle & VAR_2)
    {

        FUNC_8("Ignoring minimize request on a hidden band (%d)\n", VAR_5);
        return VAR_1;
    }

    VAR_7 = FUNC_12(VAR_4, VAR_5);

    if (VAR_7 < 0 || FUNC_3(VAR_4, VAR_7)->iRow != VAR_6->iRow) {
        int VAR_10 = FUNC_11(VAR_4, VAR_5);
        if (VAR_10 < VAR_4->uNumBands && FUNC_3(VAR_4, VAR_10)->iRow == VAR_6->iRow) {
            FUNC_7("(%d): Minimizing the first band in row is by maximizing the second\n", VAR_5);
            FUNC_4(VAR_4, VAR_10, VAR_1);
        }
        else
            FUNC_7("(%d): Only one band in row - nothing to do\n", VAR_5);
        return VAR_3;
    }

    FUNC_3(VAR_4, VAR_7)->cxEffective += VAR_6->cxEffective - VAR_6->cxMinBand;
    FUNC_3(VAR_4, VAR_7)->cx = FUNC_3(VAR_4, VAR_7)->cxEffective;
    VAR_6->cx = VAR_6->cxEffective = VAR_6->cxMinBand;

    VAR_8 = FUNC_9(VAR_4, VAR_5);
    VAR_9 = FUNC_10(VAR_4, VAR_5);
    FUNC_6(VAR_4, VAR_8, VAR_9);

    if (VAR_4->dwStyle & VAR_0)
        FUNC_2(VAR_4, VAR_8, VAR_9);
    else
        FUNC_1(VAR_4, VAR_8, VAR_9);
    FUNC_5(VAR_4, VAR_8, VAR_9);
    return VAR_1;
}
