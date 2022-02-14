
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int si ;
typedef int sbi ;
struct TYPE_19__ {unsigned int cyTopHeight; unsigned int cyBottomHeight; unsigned int cxLeftWidth; unsigned int cxRightWidth; } ;
struct TYPE_18__ {scalar_t__ left; scalar_t__ top; scalar_t__ bottom; scalar_t__ right; } ;
struct TYPE_17__ {int cbSize; } ;
struct TYPE_16__ {int cbSize; int fMask; } ;
struct TYPE_15__ {unsigned int cy; unsigned int cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ SCROLLINFO ;
typedef TYPE_3__ SCROLLBARINFO ;
typedef TYPE_4__ RECT ;
typedef int PAINTSTRUCT ;
typedef TYPE_5__ MARGINS ;
typedef scalar_t__ HWND ;
typedef int HTHEME ;
typedef int HDC ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ,int ,int ,int,TYPE_4__*,int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (scalar_t__,int ,TYPE_3__*) ;
 int FUNC_5 (scalar_t__,int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ,int ,int,int ,TYPE_4__*,TYPE_5__*) ;
 int FUNC_7 (int ,int ,int ,int,int *,int ,TYPE_1__*) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,TYPE_4__*) ;
 int FUNC_10 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_11 (TYPE_4__*,scalar_t__,scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (unsigned int,TYPE_2__*,unsigned int*,unsigned int*) ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;

__attribute__((used)) static void FUNC_15(HWND VAR_45, HTHEME VAR_46)
{
    HDC VAR_47;
    PAINTSTRUCT VAR_48;
    RECT VAR_49;
    DWORD VAR_50 = FUNC_8(VAR_45, VAR_12);
    BOOL VAR_51 = VAR_50 & VAR_27;
    BOOL VAR_52 = !FUNC_10(VAR_45);

    FUNC_9(VAR_45, &VAR_49);
    FUNC_11(&VAR_49, -VAR_49.left, -VAR_49.top);

    VAR_47 = FUNC_0(VAR_45, &VAR_48);

    if (VAR_50 & VAR_24 || VAR_50 & VAR_26) {
        int VAR_53;

        if (VAR_50 & VAR_25)
            VAR_53 = VAR_40;
        else
            VAR_53 = VAR_39;

        FUNC_1(VAR_46, VAR_47, VAR_19, VAR_53, &VAR_49, ((void*)0));
    } else {
        SCROLLBARINFO VAR_54;
        SCROLLINFO VAR_55;
        unsigned int VAR_56, VAR_57;
        int VAR_58, VAR_59, VAR_60;
        RECT VAR_61, VAR_62;
        SIZE VAR_63;

        VAR_54.cbSize = sizeof(VAR_54);
        FUNC_4(VAR_45, VAR_13, &VAR_54);

        VAR_55.cbSize = sizeof(VAR_55);
        VAR_55.fMask = VAR_38;
        FUNC_5(VAR_45, VAR_28, &VAR_55);

        VAR_62 = VAR_49;

        if (VAR_52) {
            VAR_58 = VAR_29;
            VAR_59 = VAR_29;
            VAR_60 = VAR_29;
        } else {
            VAR_58 = VAR_31;
            VAR_59 = VAR_31;
            VAR_60 = VAR_31;

            if (VAR_44 == VAR_45) {
                if (VAR_43 == VAR_37)
                    VAR_58 = VAR_30;
                else if (VAR_43 == VAR_33)
                    VAR_59 = VAR_30;
                else if (VAR_43 == VAR_35)
                    VAR_60 = VAR_30;
            }
        }

        if (VAR_51) {
            SIZE VAR_64, VAR_65;
            int VAR_66, VAR_67;

            if (VAR_52) {
                VAR_66 = VAR_9;
                VAR_67 = VAR_0;
            } else {
                VAR_66 = VAR_11;
                VAR_67 = VAR_2;

                if (VAR_44 == VAR_45) {
                    if (VAR_43 == VAR_36)
                        VAR_66 = VAR_10;
                    else if (VAR_43 == VAR_32)
                        VAR_67 = VAR_1;
                }
            }

            if (FUNC_3(FUNC_7(VAR_46, VAR_47, VAR_14, VAR_66, ((void*)0), VAR_42, &VAR_64))) {
                FUNC_13("Could not get up arrow size.\n");
                return;
            }

            if (FUNC_3(FUNC_7(VAR_46, VAR_47, VAR_14, VAR_67, ((void*)0), VAR_42, &VAR_65))) {
                FUNC_13("Could not get down arrow size.\n");
                return;
            }

            if (VAR_49.bottom - VAR_49.top - VAR_64.cy - VAR_65.cy < VAR_34)
                VAR_64.cy = VAR_65.cy = (VAR_49.bottom - VAR_49.top - VAR_34)/2;

            VAR_61 = VAR_49;
            VAR_61.bottom = VAR_61.top + VAR_64.cy;
            FUNC_1(VAR_46, VAR_47, VAR_14, VAR_66, &VAR_61, ((void*)0));

            VAR_62.top = VAR_61.bottom;

            VAR_61.bottom = VAR_49.bottom;
            VAR_61.top = VAR_61.bottom - VAR_65.cy;
            FUNC_1(VAR_46, VAR_47, VAR_14, VAR_67, &VAR_61, ((void*)0));

            VAR_62.bottom = VAR_61.top;

            FUNC_14(VAR_62.bottom - VAR_62.top, &VAR_55, &VAR_56, &VAR_57);

            if (VAR_56 > 0) {
                VAR_61.top = VAR_62.top;
                VAR_61.bottom = VAR_61.top + VAR_56;

                FUNC_1(VAR_46, VAR_47, VAR_23, VAR_58, &VAR_61, ((void*)0));
            }

            if (VAR_57 > 0) {
                VAR_61.top = VAR_62.top + VAR_56;
                VAR_61.bottom = VAR_61.top + VAR_57;

                FUNC_1(VAR_46, VAR_47, VAR_21, VAR_60, &VAR_61, ((void*)0));

                if (FUNC_12(FUNC_7(VAR_46, VAR_47, VAR_16, VAR_60, ((void*)0), VAR_42, &VAR_63))) {
                    MARGINS VAR_68;

                    if (FUNC_12(FUNC_6(VAR_46, VAR_47, VAR_21, VAR_60, VAR_41, &VAR_61, &VAR_68))) {
                        if (VAR_63.cy <= (VAR_57 - VAR_68.cyTopHeight - VAR_68.cyBottomHeight))
                            FUNC_1(VAR_46, VAR_47, VAR_16, VAR_60, &VAR_61, ((void*)0));
                    }
                }
            }

            if (VAR_56 + VAR_57 < VAR_62.bottom - VAR_62.top) {
                VAR_61.bottom = VAR_62.bottom;
                VAR_61.top = VAR_62.top + VAR_57 + VAR_56;

                FUNC_1(VAR_46, VAR_47, VAR_18, VAR_59, &VAR_61, ((void*)0));
            }
        } else {
            SIZE VAR_69, VAR_70;
            int VAR_71, VAR_72;

            if (VAR_52) {
                VAR_71 = VAR_3;
                VAR_72 = VAR_6;
            } else {
                VAR_71 = VAR_5;
                VAR_72 = VAR_8;

                if (VAR_44 == VAR_45) {
                    if (VAR_43 == VAR_36)
                        VAR_71 = VAR_4;
                    else if (VAR_43 == VAR_32)
                        VAR_72 = VAR_7;
                }
            }

            if (FUNC_3(FUNC_7(VAR_46, VAR_47, VAR_14, VAR_71, ((void*)0), VAR_42, &VAR_69))) {
                FUNC_13("Could not get left arrow size.\n");
                return;
            }

            if (FUNC_3(FUNC_7(VAR_46, VAR_47, VAR_14, VAR_72, ((void*)0), VAR_42, &VAR_70))) {
                FUNC_13("Could not get right arrow size.\n");
                return;
            }

            if (VAR_49.right - VAR_49.left - VAR_69.cx - VAR_70.cx < VAR_34)
                VAR_69.cx = VAR_70.cx = (VAR_49.right - VAR_49.left - VAR_34)/2;

            VAR_61 = VAR_49;
            VAR_61.right = VAR_61.left + VAR_69.cx;
            FUNC_1(VAR_46, VAR_47, VAR_14, VAR_71, &VAR_61, ((void*)0));

            VAR_62.left = VAR_61.right;

            VAR_61.right = VAR_49.right;
            VAR_61.left = VAR_61.right - VAR_70.cx;
            FUNC_1(VAR_46, VAR_47, VAR_14, VAR_72, &VAR_61, ((void*)0));

            VAR_62.right = VAR_61.left;

            FUNC_14(VAR_62.right - VAR_62.left, &VAR_55, &VAR_56, &VAR_57);

            if (VAR_56 > 0) {
                VAR_61.left = VAR_62.left;
                VAR_61.right = VAR_61.left + VAR_56;

                FUNC_1(VAR_46, VAR_47, VAR_22, VAR_58, &VAR_61, ((void*)0));
            }

            if (VAR_57 > 0) {
                VAR_61.left = VAR_62.left + VAR_56;
                VAR_61.right = VAR_61.left + VAR_57;

                FUNC_1(VAR_46, VAR_47, VAR_20, VAR_60, &VAR_61, ((void*)0));

                if (FUNC_12(FUNC_7(VAR_46, VAR_47, VAR_15, VAR_60, ((void*)0), VAR_42, &VAR_63))) {
                    MARGINS VAR_73;

                    if (FUNC_12(FUNC_6(VAR_46, VAR_47, VAR_20, VAR_60, VAR_41, &VAR_61, &VAR_73))) {
                        if (VAR_63.cx <= (VAR_57 - VAR_73.cxLeftWidth - VAR_73.cxRightWidth))
                            FUNC_1(VAR_46, VAR_47, VAR_15, VAR_60, &VAR_61, ((void*)0));
                    }
                }
            }

            if (VAR_56 + VAR_57 < VAR_62.right - VAR_62.left) {
                VAR_61.right = VAR_62.right;
                VAR_61.left = VAR_62.left + VAR_57 + VAR_56;

                FUNC_1(VAR_46, VAR_47, VAR_17, VAR_59, &VAR_61, ((void*)0));
            }
        }
    }

    FUNC_2(VAR_45, &VAR_48);
}
