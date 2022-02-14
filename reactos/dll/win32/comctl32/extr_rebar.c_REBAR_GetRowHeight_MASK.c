
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int bottom; int top; } ;
struct TYPE_10__ {scalar_t__ iRow; TYPE_1__ rcBand; } ;
struct TYPE_9__ {scalar_t__ uNumBands; } ;
typedef TYPE_2__ REBAR_INFO ;
typedef TYPE_3__ REBAR_BAND ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__ const*,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,int) ;

__attribute__((used)) static LRESULT
FUNC_3 (const REBAR_INFO *VAR_0, INT VAR_1)
{
    int VAR_2 = 0, VAR_3 = 0;
    UINT VAR_4;
    REBAR_BAND *VAR_5;

    for (VAR_4=0; VAR_4<VAR_0->uNumBands; VAR_4++) {
 VAR_5 = FUNC_1(VAR_0, VAR_4);
 if (FUNC_0(VAR_5)) continue;
 if (VAR_5->iRow != VAR_1) continue;
        VAR_2 = VAR_5->rcBand.bottom - VAR_5->rcBand.top;
 if (VAR_2 > VAR_3) VAR_3 = VAR_2;
    }

    FUNC_2("row %d, height %d\n", VAR_1, VAR_3);

    return VAR_3;
}
