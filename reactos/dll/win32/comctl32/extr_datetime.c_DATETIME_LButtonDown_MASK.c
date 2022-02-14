
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int wDay; int wMonth; int wYear; } ;
struct TYPE_18__ {void* bottom; } ;
struct TYPE_17__ {void* left; } ;
struct TYPE_16__ {void* left; } ;
struct TYPE_22__ {int nrFields; int* fieldspec; scalar_t__ select; int dwStyle; int hwndSelf; int hwndNotify; int hMonthCal; void* bDropdownEnabled; TYPE_4__ date; TYPE_3__ rcClient; TYPE_2__ rcDraw; TYPE_1__ calbutton; void* bCalDepressed; } ;
struct TYPE_21__ {void* y; void* x; } ;
struct TYPE_20__ {scalar_t__ top; scalar_t__ bottom; void* left; void* right; } ;
typedef TYPE_4__ SYSTEMTIME ;
typedef TYPE_5__ RECT ;
typedef TYPE_6__ POINT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef void* INT ;
typedef TYPE_7__ DATETIME_INFO ;


 int FUNC_0 (TYPE_7__*,int) ;
 int FUNC_1 (TYPE_7__*,TYPE_6__) ;
 int FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_7__*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,void*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,int ,TYPE_6__*,int) ;
 int FUNC_8 (TYPE_5__*,void*,void*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,void*,scalar_t__,void*,scalar_t__,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,int ,int ,int ,...) ;
 void* VAR_13 ;

__attribute__((used)) static LRESULT
FUNC_14 (DATETIME_INFO *VAR_14, INT VAR_15, INT VAR_16)
{
    POINT VAR_17;
    int VAR_18;

    VAR_17.x = VAR_15;
    VAR_17.y = VAR_16;
    VAR_18 = FUNC_1 (VAR_14, VAR_17);

    FUNC_10(VAR_14->hwndSelf);

    if (!(VAR_18 & VAR_1) || (VAR_18 == VAR_2))
    {
        if (VAR_18 == VAR_2)
            VAR_18 = VAR_14->nrFields - 1;
        else
        {

            if (VAR_14->fieldspec[VAR_18] & VAR_6)
            {
                VAR_18 = FUNC_0(VAR_14, VAR_18);
                if (VAR_18 == -1) return 0;
            }

            if (VAR_14->fieldspec[VAR_18] == VAR_8) return 0;
        }
    }

    FUNC_3(VAR_14, VAR_18);

    if (VAR_14->select == VAR_0) {
        RECT VAR_19;
        POINT VAR_20;
        FUNC_9(VAR_14->hMonthCal, VAR_9, 0, (LPARAM)&VAR_19);



        VAR_14->bCalDepressed = VAR_13;


        if(VAR_14->dwStyle & VAR_5)
            VAR_20.x = VAR_14->calbutton.left - (VAR_19.right - VAR_19.left);
        else

            VAR_20.x = VAR_14->rcDraw.left;

        VAR_20.y = VAR_14->rcClient.bottom;
        FUNC_8( &VAR_19, VAR_20.x, VAR_20.y );
        FUNC_7( VAR_14->hwndSelf, 0, (POINT *)&VAR_19, 2 );
        FUNC_11(VAR_14->hMonthCal, 0, VAR_19.left, VAR_19.top,
                     VAR_19.right - VAR_19.left, VAR_19.bottom - VAR_19.top, 0);

        if(FUNC_6(VAR_14->hMonthCal)) {
            FUNC_12(VAR_14->hMonthCal, VAR_11);
            VAR_14->bDropdownEnabled = VAR_7;
            FUNC_2 (VAR_14, VAR_3);
        } else {
            const SYSTEMTIME *VAR_21 = &VAR_14->date;
            FUNC_13("update calendar %04d/%02d/%02d\n",
            VAR_21->wYear, VAR_21->wMonth, VAR_21->wDay);
            FUNC_9(VAR_14->hMonthCal, VAR_10, 0, (LPARAM)(&VAR_14->date));

            if (VAR_14->bDropdownEnabled) {
                FUNC_12(VAR_14->hMonthCal, VAR_12);
                FUNC_2 (VAR_14, VAR_4);
            }
            VAR_14->bDropdownEnabled = VAR_13;
        }

        FUNC_13 ("dt:%p mc:%p mc parent:%p, desktop:%p\n",
               VAR_14->hwndSelf, VAR_14->hMonthCal, VAR_14->hwndNotify, FUNC_4 ());
    }

    FUNC_5(VAR_14->hwndSelf, ((void*)0), VAR_13);

    return 0;
}
