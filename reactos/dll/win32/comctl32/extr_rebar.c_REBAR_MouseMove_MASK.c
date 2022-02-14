
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_23__ {short x; short y; } ;
struct TYPE_19__ {int top; int bottom; } ;
struct TYPE_22__ {int fDraw; int rcChevron; TYPE_2__ rcBand; } ;
struct TYPE_18__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_21__ {void* iGrabbedBand; int dwStyle; scalar_t__ hwndSelf; int fStatus; scalar_t__ iOldBand; scalar_t__ ichevronhotBand; TYPE_1__ dragStart; TYPE_1__ dragNow; } ;
struct TYPE_20__ {int cbSize; int dwFlags; scalar_t__ hwndTrack; scalar_t__ dwHoverTime; } ;
typedef TYPE_3__ TRACKMOUSEEVENT ;
typedef TYPE_4__ REBAR_INFO ;
typedef TYPE_5__ REBAR_BAND ;
typedef TYPE_6__ POINT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef void* INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_5 (TYPE_4__*,void*) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_6__*,scalar_t__*,void**) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int,int ) ;
 int FUNC_10 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static LRESULT
FUNC_13 (REBAR_INFO *VAR_10, LPARAM VAR_11)
{
    REBAR_BAND *VAR_12;
    POINT VAR_13;

    VAR_13.x = (short)FUNC_4(VAR_11);
    VAR_13.y = (short)FUNC_2(VAR_11);


    if (VAR_10->iGrabbedBand >= 0)
    {
        REBAR_BAND *VAR_14;
        int VAR_15 = (VAR_10->dwStyle & VAR_1 ? VAR_13.x : VAR_13.y);

        if (FUNC_1() != VAR_10->hwndSelf)
            FUNC_0("We are dragging but haven't got capture?!?\n");

        VAR_14 = FUNC_5(VAR_10, VAR_10->iGrabbedBand);


        if ((FUNC_12(VAR_13.x - VAR_10->dragNow.x) <= VAR_8) &&
            (FUNC_12(VAR_13.y - VAR_10->dragNow.y) <= VAR_9)) return 0;


        if (!(VAR_10->fStatus & VAR_0)) {
            if (FUNC_9 (VAR_10, -1, VAR_4)) {

                VAR_10->dragStart.x = 0;
                VAR_10->dragStart.y = 0;
                VAR_10->dragNow = VAR_10->dragStart;
                VAR_10->iGrabbedBand = -1;
                FUNC_10 ();
                return 0;
            }
            VAR_10->fStatus |= VAR_0;
        }


        if ((VAR_15 < VAR_14->rcBand.top) ||
              (VAR_15 > VAR_14->rcBand.bottom)) {
            FUNC_7 (VAR_10, &VAR_13);
        }
        else {
            FUNC_6 (VAR_10, &VAR_13);
        }
    }
    else
    {
        INT VAR_16;
        UINT VAR_17;
        TRACKMOUSEEVENT VAR_18;

        FUNC_8(VAR_10, &VAR_13, &VAR_17, &VAR_16);

        if (VAR_10->iOldBand >= 0 && VAR_10->iOldBand == VAR_10->ichevronhotBand)
        {
            VAR_12 = FUNC_5(VAR_10, VAR_10->ichevronhotBand);
            if (VAR_12->fDraw & VAR_2)
            {
                VAR_12->fDraw &= ~VAR_2;
                FUNC_3(VAR_10->hwndSelf, &VAR_12->rcChevron, VAR_7);
            }
            VAR_10->ichevronhotBand = -2;
        }

        if (VAR_17 == VAR_3)
        {

            VAR_18.cbSize = sizeof(TRACKMOUSEEVENT);
            VAR_18.dwFlags = VAR_6;
            VAR_18.hwndTrack = VAR_10->hwndSelf;
            VAR_18.dwHoverTime = 0;


            FUNC_11(&VAR_18);


            if(!(VAR_18.dwFlags & VAR_5))
            {
                VAR_18.dwFlags = VAR_5;



                FUNC_11(&VAR_18);
            }

            VAR_12 = FUNC_5(VAR_10, VAR_16);
            if (!(VAR_12->fDraw & VAR_2))
            {
                VAR_12->fDraw |= VAR_2;
                FUNC_3(VAR_10->hwndSelf, &VAR_12->rcChevron, VAR_7);
                VAR_10->ichevronhotBand = VAR_16;
            }
        }
        VAR_10->iOldBand = VAR_16;
    }

    return 0;
}
