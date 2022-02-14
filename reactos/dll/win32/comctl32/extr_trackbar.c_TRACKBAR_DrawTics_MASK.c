
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int member_0; int member_1; } ;
struct TYPE_10__ {int lopnColor; int member_2; TYPE_1__ member_1; int member_0; } ;
struct TYPE_9__ {int dwStyle; unsigned int uNumTics; int lSelMax; int lSelMin; int lRangeMax; int lRangeMin; int * tics; int hwndSelf; } ;
typedef TYPE_2__ TRACKBAR_INFO ;
typedef TYPE_3__ LOGPEN ;
typedef scalar_t__ HTHEME ;
typedef scalar_t__ HPEN ;
typedef int HDC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_2__ const*,int ,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_2__ const*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_8 (const TRACKBAR_INFO *VAR_11, HDC VAR_12)
{
    unsigned int VAR_13;
    int VAR_14 = VAR_11->dwStyle & 0x0f;
    LOGPEN VAR_15 = { VAR_1, {1, 0}, FUNC_2 (VAR_0) };
    HPEN VAR_16, VAR_17;
    HTHEME VAR_18 = FUNC_4 (VAR_11->hwndSelf);

    if (VAR_18)
    {
        int VAR_19 = (VAR_11->dwStyle & VAR_3) ? VAR_8 : VAR_7;
        FUNC_3 (VAR_18, VAR_19, VAR_10, VAR_9, &VAR_15.lopnColor);
    }

    VAR_17 = FUNC_0(&VAR_15);
    VAR_16 = VAR_17 ? FUNC_5(VAR_12, VAR_17) : 0;


    for (VAR_13=0; VAR_13<VAR_11->uNumTics; VAR_13++)
        FUNC_6 (VAR_11, VAR_12, VAR_11->tics[VAR_13], VAR_14);

    FUNC_6 (VAR_11, VAR_12, VAR_11->lRangeMin, VAR_14 | VAR_4);
    FUNC_6 (VAR_11, VAR_12, VAR_11->lRangeMax, VAR_14 | VAR_4);

    if ((VAR_11->dwStyle & VAR_2) && FUNC_7(VAR_11)) {
        FUNC_6 (VAR_11, VAR_12, VAR_11->lSelMin,
                          VAR_14 | VAR_6);
        FUNC_6 (VAR_11, VAR_12, VAR_11->lSelMax,
                          VAR_14 | VAR_5);
    }


    if (VAR_17) {
 FUNC_5(VAR_12, VAR_16);
 FUNC_1(VAR_17);
    }
}
