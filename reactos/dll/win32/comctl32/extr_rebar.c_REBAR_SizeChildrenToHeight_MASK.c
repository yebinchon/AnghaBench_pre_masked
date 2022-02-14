
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bottom; int top; } ;
struct TYPE_8__ {int cyChild; int fStyle; int cyMinBand; int fDraw; int cyMaxChild; scalar_t__ hwndChild; TYPE_1__ rcBand; } ;
typedef int REBAR_INFO ;
typedef TYPE_2__ REBAR_BAND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int const*,int) ;
 int FUNC_2 (char*,int,int,int,...) ;
 int VAR_2 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int const*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(const REBAR_INFO *VAR_3, int VAR_4, int VAR_5, int VAR_6, BOOL *VAR_7)
{
    int VAR_8;
    int VAR_9 = 0;
    int VAR_10;

    FUNC_2("[%d;%d) by %d\n", VAR_4, VAR_5, VAR_6);

    VAR_8 = FUNC_1(VAR_3, VAR_4)->rcBand.bottom -
                 FUNC_1(VAR_3, VAR_4)->rcBand.top;
    for (VAR_10 = VAR_4; VAR_10 < VAR_5; VAR_10 = FUNC_4(VAR_3, VAR_10))
    {
        REBAR_BAND *VAR_11 = FUNC_1(VAR_3, VAR_10);
        int VAR_12 = VAR_8 - FUNC_0(VAR_11) + VAR_6;
        int VAR_13 = FUNC_5(VAR_11, VAR_12);

        if (VAR_11->hwndChild && VAR_13 != VAR_11->cyChild && (VAR_11->fStyle & VAR_1))
        {
            FUNC_2("Resizing %d: %d -> %d [%d]\n", VAR_10, VAR_11->cyChild, VAR_13, VAR_11->cyMaxChild);
            *VAR_7 = VAR_2;
            VAR_11->cyChild = VAR_13;
            VAR_11->fDraw |= VAR_0;
            FUNC_6(VAR_3, VAR_11);
        }
        VAR_9 = FUNC_3(VAR_9, VAR_11->cyMinBand);
    }
    return VAR_9 - VAR_8;
}
