
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int top; int bottom; } ;
struct TYPE_4__ {int iRow; int cyRowSoFar; TYPE_2__ rcBand; int fDraw; int cyMinBand; } ;
typedef int REBAR_INFO ;
typedef TYPE_1__ REBAR_BAND ;
typedef int INT ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int const*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int const*,int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(const REBAR_INFO *VAR_2, INT VAR_3, INT VAR_4, INT VAR_5)
{
    REBAR_BAND *VAR_6;
    int VAR_7 = 0;
    int VAR_8 = VAR_5;
    int VAR_9 = FUNC_0(VAR_2, VAR_3)->iRow;
    int VAR_10;
    for (VAR_10 = VAR_3; VAR_10 < VAR_4; VAR_10 = FUNC_3(VAR_2, VAR_10))
    {
        VAR_6 = FUNC_0(VAR_2, VAR_10);
        VAR_6->cyRowSoFar = VAR_7;
        VAR_7 = FUNC_2(VAR_7, VAR_6->cyMinBand);
    }
    FUNC_1("Bands [%d; %d) height: %d\n", VAR_3, VAR_4, VAR_7);

    for (VAR_10 = VAR_3; VAR_10 < VAR_4; VAR_10 = FUNC_3(VAR_2, VAR_10))
    {
        VAR_6 = FUNC_0(VAR_2, VAR_10);

        if (VAR_6->iRow != VAR_9) {
            VAR_8 += VAR_7 + VAR_1;
            VAR_9 = VAR_6->iRow;
        }

        if (VAR_6->rcBand.top != VAR_8 || VAR_6->rcBand.bottom != VAR_8 + VAR_7) {
            VAR_6->fDraw |= VAR_0;
            VAR_6->rcBand.top = VAR_8;
            VAR_6->rcBand.bottom = VAR_8 + VAR_7;
            FUNC_1("Band %d: %s\n", VAR_10, FUNC_4(&VAR_6->rcBand));
        }
    }
    return VAR_8 + VAR_7;
}
