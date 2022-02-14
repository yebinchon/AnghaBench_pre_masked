
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cxEffective; scalar_t__ cx; scalar_t__ cxMinBand; } ;
typedef int REBAR_INFO ;
typedef TYPE_1__ REBAR_BAND ;
typedef scalar_t__ INT ;
typedef scalar_t__ BOOL ;


 TYPE_1__* FUNC_0 (int const*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int const*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(const REBAR_INFO *VAR_0, INT VAR_1, INT VAR_2, INT VAR_3, BOOL VAR_4)
{
    REBAR_BAND *VAR_5;
    INT VAR_6, VAR_7;

    FUNC_1("Shrinking bands [%d..%d) by %d, right-to-left\n", VAR_1, VAR_2, VAR_3);
    for (VAR_7 = FUNC_3(VAR_0, VAR_2); VAR_7 >= VAR_1; VAR_7 = FUNC_3(VAR_0, VAR_7))
    {
        VAR_5 = FUNC_0(VAR_0, VAR_7);

        VAR_6 = FUNC_2(VAR_5->cxEffective - VAR_3, (int)VAR_5->cxMinBand);
        VAR_3 -= VAR_5->cxEffective - VAR_6;
        VAR_5->cxEffective = VAR_6;
        if (VAR_4 && VAR_5->cx > VAR_5->cxEffective)
            VAR_5->cx = VAR_5->cxEffective;
        if (VAR_3 == 0)
            break;
    }
    return VAR_3;
}
