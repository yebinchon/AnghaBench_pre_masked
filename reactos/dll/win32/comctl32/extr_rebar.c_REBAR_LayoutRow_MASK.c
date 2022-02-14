
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int iRow; scalar_t__ cxEffective; int cx; int cxMinBand; } ;
struct TYPE_12__ {int dwStyle; } ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_1__ const*,int,int) ;
 TYPE_2__* FUNC_2 (TYPE_1__ const*,int) ;
 int FUNC_3 (TYPE_1__ const*,int,int,int) ;
 int FUNC_4 (TYPE_1__ const*,int,int) ;
 int FUNC_5 (TYPE_1__ const*,int,int,int,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (char*,int,...) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__ const*,int) ;

__attribute__((used)) static void FUNC_9(const REBAR_INFO *VAR_3, int VAR_4, int VAR_5, int VAR_6, int *VAR_7, int *VAR_8)
{
    REBAR_BAND *VAR_9;
    int VAR_10, VAR_11;
    int VAR_12 = 0;

    FUNC_6("Adjusting row [%d;%d). Width: %d\n", VAR_4, VAR_5, VAR_6);
    for (VAR_10 = VAR_4; VAR_10 < VAR_5; VAR_10++)
        FUNC_2(VAR_3, VAR_10)->iRow = *VAR_7;


    for (VAR_10 = VAR_4; VAR_10 < VAR_5; VAR_10 = FUNC_8(VAR_3, VAR_10))
    {
        VAR_9 = FUNC_2(VAR_3, VAR_10);
        if (VAR_10 > VAR_4)
            VAR_12 += VAR_2;
        VAR_9->cxEffective = FUNC_7(VAR_9->cxMinBand, VAR_9->cx);
        VAR_12 += VAR_9->cxEffective;
    }

    VAR_11 = VAR_6 - VAR_12;
    FUNC_6("Extra space: %d\n", VAR_11);
    if (VAR_11 < 0) {
        int VAR_13 = FUNC_5(VAR_3, VAR_4, VAR_5, -VAR_11, VAR_0);
        if (VAR_13 > 0 && FUNC_8(VAR_3, VAR_4) != VAR_5)
            FUNC_0("Error layouting row %d - couldn't shrink for %d pixels (%d total shrink)\n", *VAR_7, VAR_13, -VAR_11);
    } else
    if (VAR_11 > 0) {
        VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5);
        VAR_9->cxEffective += VAR_11;
    }

    FUNC_4(VAR_3, VAR_4, VAR_5);
    if (VAR_3->dwStyle & VAR_1)
    {
        if (*VAR_7 > 0)
            *VAR_8 += VAR_2;
        *VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, *VAR_8);
    }
    (*VAR_7)++;
}
