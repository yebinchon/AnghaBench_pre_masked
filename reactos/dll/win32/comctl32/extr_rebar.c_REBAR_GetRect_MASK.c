
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rcBand; } ;
struct TYPE_6__ {scalar_t__ uNumBands; } ;
typedef int RECT ;
typedef TYPE_1__ REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__ const*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static LRESULT
FUNC_3 (const REBAR_INFO *VAR_2, INT VAR_3, RECT *VAR_4)
{
    REBAR_BAND *VAR_5;

    if (VAR_3 < 0 || VAR_3 >= VAR_2->uNumBands)
 return VAR_0;
    if (!VAR_4)
 return VAR_0;

    VAR_5 = FUNC_0(VAR_2, VAR_3);

    *VAR_4 = VAR_5->rcBand;

    FUNC_1("band %d, (%s)\n", VAR_3, FUNC_2(VAR_4));

    return VAR_1;
}
