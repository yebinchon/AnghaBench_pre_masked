
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dwStyle; int orgStyle; int hwndSelf; } ;
struct TYPE_6__ {int styleOld; int styleNew; } ;
typedef TYPE_1__ STYLESTRUCT ;
typedef TYPE_2__ REBAR_INFO ;
typedef int LRESULT ;
typedef scalar_t__ INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int,int,int) ;
 int VAR_3 ;

__attribute__((used)) static LRESULT
FUNC_3 (REBAR_INFO *VAR_4, INT VAR_5, const STYLESTRUCT *VAR_6)
{
    FUNC_2("current style=%08x, styleOld=%08x, style being set to=%08x\n",
   VAR_4->dwStyle, VAR_6->styleOld, VAR_6->styleNew);
    if (VAR_5 == VAR_2)
    {
        VAR_4->orgStyle = VAR_4->dwStyle = VAR_6->styleNew;
        if (FUNC_0 (VAR_4->hwndSelf))
            VAR_4->dwStyle &= ~VAR_3;

        if ((VAR_6->styleNew ^ VAR_6->styleOld) & VAR_0)
            FUNC_1(VAR_4);
    }
    return VAR_1;
}
