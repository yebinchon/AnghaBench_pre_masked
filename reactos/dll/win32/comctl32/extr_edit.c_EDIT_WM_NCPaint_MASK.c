
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_6__ {int left; int top; scalar_t__ bottom; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ HWND ;
typedef scalar_t__ HTHEME ;
typedef scalar_t__ HRGN ;
typedef int HDC ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int,int,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int const,int,TYPE_1__*,int ) ;
 int FUNC_4 (scalar_t__,int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int,int,scalar_t__,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int const,int) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_1__*,int,int) ;
 int VAR_10 ;
 int FUNC_16 (scalar_t__,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_17(HWND VAR_15, HRGN VAR_16)
{
    DWORD VAR_17 = FUNC_10(VAR_15, VAR_8);
    HTHEME VAR_18 = FUNC_12(VAR_15);
    HRGN VAR_19 = VAR_16;

    if (VAR_18 && VAR_17 & VAR_14)
    {
        HDC VAR_20;
        RECT VAR_21;
        int VAR_22 = FUNC_8(VAR_11),
            VAR_23 = FUNC_8(VAR_12);
        const int VAR_24 = VAR_2;
        int VAR_25 = VAR_6;
        DWORD VAR_26 = FUNC_10(VAR_15, VAR_9);

        if (!FUNC_14(VAR_15))
            VAR_25 = VAR_4;
        else if (VAR_26 & VAR_3)
            VAR_25 = VAR_7;
        else if (FUNC_7() == VAR_15)
            VAR_25 = VAR_5;

        FUNC_11(VAR_15, &VAR_21);


        VAR_19 = FUNC_1(VAR_21.left + VAR_22, VAR_21.top + VAR_23,
            VAR_21.right - VAR_22, VAR_21.bottom - VAR_23);
        if (VAR_16 != (HRGN)1)
            FUNC_0(VAR_19, VAR_19, VAR_16, VAR_10);
        FUNC_15(&VAR_21, -VAR_21.left, -VAR_21.top);
        VAR_20 = FUNC_6(VAR_15, VAR_16, VAR_1|VAR_0);
        FUNC_15(&VAR_21, -VAR_21.left, -VAR_21.top);


        if (FUNC_13(VAR_18, VAR_24, VAR_25))
            FUNC_4(VAR_15, VAR_20, &VAR_21);
        FUNC_3(VAR_18, VAR_20, VAR_24, VAR_25, &VAR_21, 0);
        FUNC_16(VAR_15, VAR_20);
    }


    FUNC_2 (VAR_15, VAR_13, (WPARAM)VAR_19, 0);
}
