
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mi ;
typedef int WPARAM ;
struct TYPE_7__ {int codepage; int flags; } ;
struct TYPE_6__ {int cbSize; scalar_t__ dwItemData; int fMask; } ;
struct TYPE_5__ {int cbSize; int dwMask; int wAlignment; scalar_t__ wNumbering; } ;
typedef TYPE_1__ PARAFORMAT ;
typedef TYPE_2__ MENUITEMINFOW ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HMENU ;
typedef TYPE_3__ GETTEXTLENGTHEX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_13 ;
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
 scalar_t__ FUNC_5 (int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ) ;
 int VAR_42 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static LRESULT FUNC_8( HWND VAR_43, WPARAM VAR_44 )
{
    HMENU VAR_45 = (HMENU)VAR_44;
    HWND VAR_46 = FUNC_2(VAR_43, VAR_13);
    HWND VAR_47 = FUNC_2(VAR_43, VAR_14);
    PARAFORMAT VAR_48;
    int VAR_49 = -1;
    int VAR_50, VAR_51;
    GETTEXTLENGTHEX VAR_52;
    LRESULT VAR_53;
    MENUITEMINFOW VAR_54;

    FUNC_6(VAR_42, VAR_7, (WPARAM)&VAR_50, (LPARAM)&VAR_51);
    FUNC_1(VAR_45, VAR_19, (VAR_50 == VAR_51) ? VAR_34 : VAR_33);
    FUNC_1(VAR_45, VAR_20, (VAR_50 == VAR_51) ? VAR_34 : VAR_33);

    VAR_48.cbSize = sizeof(PARAFORMAT);
    FUNC_6(VAR_46, VAR_6, 0, (LPARAM)&VAR_48);
    FUNC_0(VAR_45, VAR_22,
      (FUNC_4(VAR_46, VAR_12) & VAR_9) ? VAR_32 : VAR_35);
    FUNC_0(VAR_45, VAR_21,
      FUNC_6(VAR_46, VAR_5, 0, 0) ? VAR_32 : VAR_35);
    if (VAR_48.dwMask & VAR_40)
        VAR_49 = VAR_48.wAlignment;
    FUNC_0(VAR_45, VAR_16, (VAR_49 == VAR_38) ? VAR_32 : VAR_35);
    FUNC_0(VAR_45, VAR_15, (VAR_49 == VAR_37) ? VAR_32 : VAR_35);
    FUNC_0(VAR_45, VAR_17, (VAR_49 == VAR_39) ? VAR_32 : VAR_35);
    FUNC_0(VAR_45, VAR_18, ((VAR_48.wNumbering == VAR_41) ? VAR_32 : VAR_35));
    FUNC_1(VAR_45, VAR_24, FUNC_6(VAR_46, VAR_4, 0, 0) ?
            VAR_33 : VAR_34);
    FUNC_1(VAR_45, VAR_23, FUNC_6(VAR_46, VAR_3, 0, 0) ?
            VAR_33 : VAR_34);

    FUNC_0(VAR_45, VAR_31, FUNC_7(VAR_2) ?
            VAR_32 : VAR_35);

    FUNC_0(VAR_45, VAR_28, FUNC_7(VAR_0) ?
            VAR_32 : VAR_35);

    FUNC_0(VAR_45, VAR_30, FUNC_5(VAR_47) ?
            VAR_32 : VAR_35);

    FUNC_0(VAR_45, VAR_29, FUNC_7(VAR_1) ? VAR_32 : VAR_35);

    VAR_52.flags = VAR_11;
    VAR_52.codepage = 1200;
    VAR_53 = FUNC_6(VAR_42, VAR_8, (WPARAM)&VAR_52, 0);
    FUNC_1(VAR_45, VAR_25, VAR_53 ? VAR_33 : VAR_34);

    VAR_54.cbSize = sizeof(VAR_54);
    VAR_54.fMask = VAR_36;

    FUNC_3(VAR_45, VAR_26, VAR_10, &VAR_54);

    FUNC_1(VAR_45, VAR_26, (VAR_53 && VAR_54.dwItemData) ? VAR_33 : VAR_34);

    FUNC_1(VAR_45, VAR_27, VAR_53 ? VAR_33 : VAR_34);

    return 0;
}
