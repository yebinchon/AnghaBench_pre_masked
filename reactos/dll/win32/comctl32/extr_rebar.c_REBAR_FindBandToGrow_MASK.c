
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cxMinBand; scalar_t__ cxEffective; int fStyle; } ;
typedef int REBAR_INFO ;
typedef TYPE_1__ REBAR_BAND ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int const*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int const*,scalar_t__) ;

__attribute__((used)) static REBAR_BAND *FUNC_3(const REBAR_INFO *VAR_1, INT VAR_2, INT VAR_3)
{
    INT VAR_4 = 0, VAR_5;

    VAR_4 = FUNC_0(VAR_1, VAR_2)->cxMinBand;

    for (VAR_5 = FUNC_2(VAR_1, VAR_3); VAR_5 >= VAR_2; VAR_5 = FUNC_2(VAR_1, VAR_5))
        if (FUNC_0(VAR_1, VAR_5)->cxEffective > VAR_4 &&
          !(FUNC_0(VAR_1, VAR_5)->fStyle & VAR_0))
            break;

    if (VAR_5 < VAR_2)
        for (VAR_5 = FUNC_2(VAR_1, VAR_3); VAR_5 >= VAR_2; VAR_5 = FUNC_2(VAR_1, VAR_5))
            if (FUNC_0(VAR_1, VAR_5)->cxMinBand == VAR_4)
                break;

    FUNC_1("Extra space for row [%d..%d) should be added to band %d\n", VAR_2, VAR_3, VAR_5);
    return FUNC_0(VAR_1, VAR_5);
}
