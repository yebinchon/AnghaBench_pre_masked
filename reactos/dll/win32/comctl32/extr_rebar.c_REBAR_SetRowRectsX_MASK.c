
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int left; scalar_t__ right; } ;
struct TYPE_5__ {scalar_t__ cxEffective; TYPE_1__ rcBand; int fDraw; } ;
typedef int REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef int INT ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int const*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,int,scalar_t__) ;
 int FUNC_2 (int const*,int) ;

__attribute__((used)) static void FUNC_3(const REBAR_INFO *VAR_2, INT VAR_3, INT VAR_4)
{
    int VAR_5 = 0, VAR_6;
    for (VAR_6 = VAR_3; VAR_6 < VAR_4; VAR_6 = FUNC_2(VAR_2, VAR_6))
    {
        REBAR_BAND *VAR_7 = FUNC_0(VAR_2, VAR_6);
        if (VAR_7->rcBand.left != VAR_5 || VAR_7->rcBand.right != VAR_5 + VAR_7->cxEffective) {
            VAR_7->fDraw |= VAR_0;
            FUNC_1("Setting rect %d to %d,%d\n", VAR_6, VAR_5, VAR_5 + VAR_7->cxEffective);
            VAR_7->rcBand.left = VAR_5;
            VAR_7->rcBand.right = VAR_5 + VAR_7->cxEffective;
        }
        VAR_5 += VAR_7->cxEffective + VAR_1;
    }
}
