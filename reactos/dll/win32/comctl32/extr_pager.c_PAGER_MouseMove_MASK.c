
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ hwndFrom; int idFrom; int code; } ;
struct TYPE_14__ {scalar_t__ hwndSelf; scalar_t__ TLbtnState; scalar_t__ BRbtnState; int dwStyle; int hwndNotify; void* bCapture; int clrBk; } ;
struct TYPE_13__ {scalar_t__ y; scalar_t__ x; } ;
typedef int RECT ;
typedef TYPE_1__ POINT ;
typedef TYPE_2__ PAGER_INFO ;
typedef TYPE_3__ NMHDR ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HDC ;
typedef void* BOOL ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,scalar_t__,TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ,int ,int,void*,scalar_t__) ;
 int FUNC_9 (TYPE_2__*,int *,int *,void*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (int *,TYPE_1__) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (scalar_t__,int *,int *,int) ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_15 (int ,int ,int ,int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__,int ,int,int ) ;
 int FUNC_18 (scalar_t__,int ,int ,int ,int ,int ,int) ;
 int VAR_18 ;
 int FUNC_19 (char*,scalar_t__,...) ;
 void* VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_20 (TYPE_1__) ;
 int FUNC_21 (TYPE_3__*,int ,int) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static LRESULT
FUNC_23 (PAGER_INFO* VAR_21, INT VAR_22, INT VAR_23, INT VAR_24)
{
    POINT VAR_25, VAR_26;
    RECT VAR_27;
    BOOL VAR_28 = VAR_0;
    INT VAR_29 = 0;
    INT VAR_30;
    HDC VAR_31;

    VAR_26.x = VAR_23;
    VAR_26.y = VAR_24;

    FUNC_19("[%p] to (%d,%d)\n", VAR_21->hwndSelf, VAR_23, VAR_24);
    FUNC_0(VAR_21->hwndSelf, &VAR_26);
    FUNC_4(VAR_21->hwndSelf, &VAR_27);
    if (FUNC_11(&VAR_27, VAR_26)) {
 RECT VAR_32, VAR_33, *VAR_34 = ((void*)0);

 FUNC_9(VAR_21, &VAR_32, &VAR_33, VAR_0);

 VAR_25 = VAR_26;
 FUNC_7(0, VAR_21->hwndSelf, &VAR_25, 1);
 VAR_30 = FUNC_10(VAR_21, &VAR_25);
 if ((VAR_30 == VAR_4) && (VAR_21->TLbtnState == VAR_8))
 {
     VAR_28 = VAR_19;
     VAR_34 = &VAR_32;
     VAR_21->TLbtnState = VAR_6;
     VAR_29 = VAR_21->TLbtnState;
 }
 else if ((VAR_30 == VAR_3) && (VAR_21->BRbtnState == VAR_8))
 {
     VAR_28 = VAR_0;
     VAR_34 = &VAR_33;
     VAR_21->BRbtnState = VAR_6;
     VAR_29 = VAR_21->BRbtnState;
 }


 if (VAR_34)
 {
            FUNC_19("[%p] draw btn (%s), Capture %s, style %08x\n",
                  VAR_21->hwndSelf, FUNC_22(VAR_34),
    (VAR_21->bCapture) ? "TRUE" : "FALSE",
    VAR_21->dwStyle);
     if (!VAR_21->bCapture)
     {
         FUNC_19("[%p] SetCapture\n", VAR_21->hwndSelf);
         FUNC_16(VAR_21->hwndSelf);
         VAR_21->bCapture = VAR_19;
     }
     if (VAR_21->dwStyle & VAR_9)
  FUNC_17(VAR_21->hwndSelf, VAR_18, 0x3e, 0);
     VAR_31 = FUNC_2(VAR_21->hwndSelf);

     FUNC_8(VAR_31, VAR_21->clrBk, *VAR_34,
        VAR_21->dwStyle & VAR_10, VAR_28, VAR_29);
     FUNC_14(VAR_21->hwndSelf, VAR_31);
     return 0;
 }
    }


    if (VAR_21->bCapture && (FUNC_20(VAR_26) != VAR_21->hwndSelf))
    {
     NMHDR VAR_35;

        VAR_21->bCapture = VAR_0;

        if (FUNC_1() == VAR_21->hwndSelf)
        {
            FUNC_13();

            if (VAR_21->TLbtnState == VAR_5)
            {
                VAR_21->TLbtnState = VAR_7;
                FUNC_18(VAR_21->hwndSelf, 0, 0, 0, 0, 0,
                             VAR_13 | VAR_16 | VAR_15 |
                             VAR_17 | VAR_14);
            }
            else if (VAR_21->TLbtnState == VAR_6)
            {
         VAR_21->TLbtnState = VAR_8;

                FUNC_12(VAR_21->hwndSelf, ((void*)0), ((void*)0), VAR_11 | VAR_12);
            }

            if (VAR_21->BRbtnState == VAR_5)
            {
                VAR_21->BRbtnState = VAR_7;
                FUNC_18(VAR_21->hwndSelf, 0, 0, 0, 0, 0,
                             VAR_13 | VAR_16 | VAR_15 |
                             VAR_17 | VAR_14);
            }
            else if (VAR_21->BRbtnState == VAR_6)
            {
         VAR_21->BRbtnState = VAR_8;

                FUNC_12(VAR_21->hwndSelf, ((void*)0), ((void*)0), VAR_11 | VAR_12);
            }


         FUNC_21(&VAR_35, 0, sizeof(NMHDR));
         VAR_35.hwndFrom = VAR_21->hwndSelf;
         VAR_35.idFrom = FUNC_3(VAR_21->hwndSelf, VAR_1);
         VAR_35.code = VAR_2;
  FUNC_15(VAR_21->hwndNotify, VAR_20, VAR_35.idFrom, (LPARAM)&VAR_35);
        }
        if (FUNC_5(VAR_21->hwndSelf))
            FUNC_6(VAR_21->hwndSelf, VAR_18);
    }
    return 0;
}
