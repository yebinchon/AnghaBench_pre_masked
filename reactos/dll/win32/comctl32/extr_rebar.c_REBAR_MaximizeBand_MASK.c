
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int fStyle; int cxIdeal; int cxHeader; int cxEffective; int cx; } ;
struct TYPE_16__ {int cx; } ;
struct TYPE_17__ {scalar_t__ uNumBands; int dwStyle; TYPE_1__ calcSize; } ;
typedef TYPE_2__ REBAR_INFO ;
typedef TYPE_3__ REBAR_BAND ;
typedef int LRESULT ;
typedef scalar_t__ LPARAM ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__ const*,int,int) ;
 int FUNC_2 (TYPE_2__ const*,int,int) ;
 TYPE_3__* FUNC_3 (TYPE_2__ const*,scalar_t__) ;
 int FUNC_4 (TYPE_2__ const*,int,int) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__ const*,int,int) ;
 int FUNC_6 (TYPE_2__ const*,int ,int,int,int ) ;
 int FUNC_7 (TYPE_2__ const*,int,scalar_t__,int,int ) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__,int,int,int,int) ;
 int VAR_4 ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (TYPE_2__ const*,scalar_t__) ;
 int FUNC_11 (TYPE_2__ const*,scalar_t__) ;
 int FUNC_12 (TYPE_2__ const*,scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_13 (const REBAR_INFO *VAR_5, INT VAR_6, LPARAM VAR_7)
{
    REBAR_BAND *VAR_8;
    int VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13;
    int VAR_14;


    if (VAR_5->uNumBands == 0 || VAR_6 < 0 || VAR_6 >= VAR_5->uNumBands) {

 FUNC_0("Illegal MaximizeBand, requested=%d, current band count=%d\n",
       VAR_6, VAR_5->uNumBands);
       return VAR_1;
    }

    VAR_8 = FUNC_3(VAR_5, VAR_6);

    if (VAR_8->fStyle & VAR_2)
    {

        FUNC_9("Ignoring maximize request on a hidden band (%d)\n", VAR_6);
        return VAR_1;
    }

    VAR_14 = VAR_8->cxIdeal + VAR_8->cxHeader + VAR_3;
    if (VAR_7 && (VAR_8->cxEffective < VAR_14))
        VAR_11 = VAR_14;
    else
        VAR_11 = VAR_5->calcSize.cx;

    VAR_9 = FUNC_10(VAR_5, VAR_6);
    VAR_10 = FUNC_11(VAR_5, VAR_6);
    VAR_13 = VAR_12 = VAR_11 - VAR_8->cxEffective;
    if (VAR_12 > 0)
        VAR_12 = FUNC_7(VAR_5, VAR_9, VAR_6, VAR_12, VAR_4);
    if (VAR_12 > 0)
        VAR_12 = FUNC_6(VAR_5, FUNC_12(VAR_5, VAR_6), VAR_10, VAR_12, VAR_4);
    VAR_8->cxEffective += VAR_13 - VAR_12;
    VAR_8->cx = VAR_8->cxEffective;
    FUNC_8("(%d, %ld): Wanted size %d, obtained %d (shrink %d, %d)\n", VAR_6, VAR_7, VAR_11, VAR_8->cx, VAR_13, VAR_12);
    FUNC_5(VAR_5, VAR_9, VAR_10);

    if (VAR_5->dwStyle & VAR_0)
        FUNC_2(VAR_5, VAR_9, VAR_10);
    else
        FUNC_1(VAR_5, VAR_9, VAR_10);
    FUNC_4(VAR_5, VAR_9, VAR_10);
    return VAR_4;

}
