
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int bDestroyTarget; scalar_t__ hbm32bpp; scalar_t__ hwndTarget; } ;
typedef TYPE_1__ WCHAR ;
struct TYPE_22__ {scalar_t__ lpCreateParams; } ;
struct TYPE_21__ {scalar_t__ fnid; } ;
struct TYPE_20__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PWND ;
typedef TYPE_1__* LPWSTR ;
typedef int LONG_PTR ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef scalar_t__ HBITMAP ;
typedef TYPE_1__ GHOST_DATA ;
typedef int DWORD ;
typedef TYPE_6__ CREATESTRUCTW ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,TYPE_2__*) ;
 TYPE_1__* FUNC_8 (scalar_t__,int*,int) ;
 TYPE_1__* FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,TYPE_1__*) ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,TYPE_1__*,int) ;
 int FUNC_14 (scalar_t__,int *,int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ,int ,TYPE_1__*,int) ;
 int FUNC_18 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_19 (scalar_t__,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_20 (scalar_t__,int ,scalar_t__) ;
 int FUNC_21 (scalar_t__,int ,int ,int *) ;
 int FUNC_22 (scalar_t__,int ,int) ;
 int FUNC_23 (scalar_t__,scalar_t__,int ,int ,int ,int ,int) ;
 int FUNC_24 (scalar_t__,TYPE_1__*) ;
 int FUNC_25 (scalar_t__,int ) ;
 int FUNC_26 (TYPE_1__*,int,TYPE_1__*) ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_3__* FUNC_27 (scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static BOOL
FUNC_28(HWND VAR_21, CREATESTRUCTW *VAR_22)
{
    HBITMAP VAR_23;
    HWND VAR_24, VAR_25;
    GHOST_DATA *VAR_26;
    RECT VAR_27;
    DWORD VAR_28, VAR_29;
    WCHAR VAR_30[320], VAR_31[32];
    LPWSTR VAR_32;
    INT VAR_33, VAR_34, VAR_35;
    PWND VAR_36 = FUNC_27(VAR_21);
    if (VAR_36)
    {
        if (!VAR_36->fnid)
        {
            FUNC_19(VAR_21, VAR_1);
        }
        else if (VAR_36->fnid != VAR_1)
        {
             FUNC_2("Wrong window class for Ghost! fnId 0x%x\n", VAR_36->fnid);
             return VAR_0;
        }
    }


    VAR_24 = (HWND)VAR_22->lpCreateParams;
    if (!FUNC_16(VAR_24) ||
        (FUNC_6(VAR_24, VAR_7) & VAR_17) ||
        !FUNC_15(VAR_24))
    {
        return VAR_0;
    }


    if (FUNC_4(VAR_24, VAR_3))
        return VAR_0;


    FUNC_20(VAR_24, VAR_3, VAR_21);


    VAR_26 = FUNC_9(FUNC_3(), 0, sizeof(GHOST_DATA));
    if (!VAR_26)
    {
        FUNC_2("HeapAlloc failed\n");
        return VAR_0;
    }


    FUNC_7(VAR_24, &VAR_27);
    VAR_23 = FUNC_11(VAR_24,
                                  VAR_27.right - VAR_27.left,
                                  VAR_27.bottom - VAR_27.top);
    if (!VAR_23)
    {
        FUNC_2("hbm32bpp was NULL\n");
        FUNC_10(FUNC_3(), 0, VAR_26);
        return VAR_0;
    }

    FUNC_12(VAR_23);


    VAR_26->hwndTarget = VAR_24;
    VAR_26->hbm32bpp = VAR_23;
    VAR_26->bDestroyTarget = VAR_0;
    FUNC_22(VAR_21, VAR_5, (LONG_PTR)VAR_26);


    VAR_28 = FUNC_6(VAR_24, VAR_7);
    VAR_29 = FUNC_6(VAR_24, VAR_6);


    VAR_33 = FUNC_0(VAR_30);
    VAR_34 = FUNC_0(VAR_31);
    VAR_35 = VAR_33 - VAR_34;
    if (FUNC_13(VAR_24, VAR_30,
                              VAR_35) < VAR_35 - 1)
    {
        VAR_32 = VAR_30;
    }
    else
    {
        VAR_33 *= 2;
        VAR_32 = FUNC_8(VAR_24, &VAR_33, VAR_34);
        if (!VAR_32)
        {
            FUNC_2("Ghost_GetText failed\n");
            FUNC_1(VAR_23);
            FUNC_10(FUNC_3(), 0, VAR_26);
            return VAR_0;
        }
    }


    VAR_28 &= ~(VAR_18 | VAR_20 | VAR_19);


    FUNC_22(VAR_21, VAR_7, VAR_28);
    FUNC_22(VAR_21, VAR_6, VAR_29);


    FUNC_17(VAR_16, VAR_9,
                VAR_31, FUNC_0(VAR_31));
    FUNC_26(VAR_32, VAR_33, VAR_31);
    FUNC_24(VAR_21, VAR_32);


    if (VAR_30 != VAR_32)
        FUNC_10(FUNC_3(), 0, VAR_32);


    VAR_25 = FUNC_5(VAR_24, VAR_8);


    FUNC_25(VAR_24, VAR_14);



    FUNC_23(VAR_21, VAR_25, 0, 0, 0, 0,
                 VAR_12 | VAR_11 | VAR_13 |
                 VAR_10);


    FUNC_18(VAR_21, VAR_27.left, VAR_27.top,
               VAR_27.right - VAR_27.left, VAR_27.bottom - VAR_27.top, VAR_15);


    FUNC_22(VAR_21, VAR_7, VAR_28 | VAR_19);


    FUNC_14(VAR_21, ((void*)0), VAR_15);


    FUNC_21(VAR_21, VAR_4, VAR_2, ((void*)0));

    return VAR_15;
}
