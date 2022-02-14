
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int toolbarBtns ;
struct TYPE_9__ {int member_0; int member_1; int member_11; int member_10; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; } ;
typedef TYPE_1__ WNDCLASSEX ;
struct TYPE_10__ {int member_0; int member_9; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; } ;
typedef TYPE_2__ WNDCLASS ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_12__ {int member_0; int member_1; } ;
struct TYPE_11__ {int member_0; int member_1; int member_3; int member_2; } ;
typedef TYPE_3__ TBBUTTON ;
typedef int LPCTSTR ;
typedef int LPARAM ;
typedef TYPE_4__ INITCOMMONCONTROLSEX ;
typedef int HMENU ;
typedef int HINSTANCE ;
typedef int HICON ;
typedef int HDC ;
typedef int BOOL ;
typedef scalar_t__ ATOM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int,char*,int ,int ) ;
 int FUNC_3 (int ,int,int ,int,int ,int ,TYPE_3__*,int,int,int,int,int,int) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
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
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_16 (int,int ,int) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int ,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_20 (int ,int ,int,int ) ;
 int FUNC_21 (int ,int) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_24 (char*) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;

BOOL FUNC_25(HINSTANCE VAR_50, int VAR_51)
{
    WNDCLASSEX VAR_52 = {
        sizeof(WNDCLASSEX),
        VAR_2 | VAR_3 ,
        VAR_7,
        0 ,
        0 ,
        VAR_50,
        FUNC_12(VAR_50, FUNC_15(VAR_14)),
        FUNC_11(0, VAR_10),
        0 ,
        0 ,
        VAR_48,
        (HICON)FUNC_13(VAR_50, FUNC_15(VAR_14), VAR_22,
            FUNC_8(VAR_30), FUNC_8(VAR_31), VAR_24)
    };
    ATOM VAR_53 = FUNC_18(&VAR_52);
    HMENU VAR_54 = FUNC_14(VAR_50, FUNC_15(VAR_11));
    HMENU VAR_55 = FUNC_7(VAR_54, VAR_15);


    INITCOMMONCONTROLSEX VAR_56 = {
        sizeof(INITCOMMONCONTROLSEX),
        VAR_8
    };

    HDC VAR_57 = FUNC_5(0);

    VAR_44 = VAR_54;

    VAR_41 = FUNC_10(VAR_50, FUNC_15(VAR_11));
    VAR_42 = FUNC_1(-FUNC_16(8,FUNC_6(VAR_57,VAR_23),72), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, FUNC_24("MS Sans Serif"));
    FUNC_19(0, VAR_57);

    VAR_43 = FUNC_4(0, (LPCTSTR)(ULONG_PTR)VAR_53, VAR_49,

                    VAR_39 | VAR_37,
                    VAR_4, VAR_4, VAR_4, VAR_4,
                    ((void*)0) , VAR_44, VAR_50, ((void*)0) );
    if (!VAR_43) {
        return VAR_6;
    }

    if (FUNC_9(&VAR_56))
    {
        int VAR_58[3];
        TBBUTTON VAR_59[] = {
            {0, 0, 0, VAR_34},
            {0, VAR_19, VAR_32, VAR_33},
            {1, VAR_18, VAR_32, VAR_33},
            {2, VAR_20, VAR_32, VAR_33},
            {3, VAR_21, VAR_32, VAR_33},
            {4, 2 , VAR_32, VAR_33},
            {5, 2 , VAR_32, VAR_33},
        };

        VAR_46 = FUNC_3(VAR_43, VAR_36|VAR_40,
            VAR_13, 2, VAR_50, VAR_9, VAR_59,
            sizeof(VAR_59)/sizeof(TBBUTTON), 16, 15, 16, 15, sizeof(TBBUTTON));
        FUNC_0(VAR_55, VAR_17, VAR_25|VAR_26);


        VAR_45 = FUNC_2(VAR_40|VAR_36|VAR_38|VAR_28,
                                        "", VAR_43, VAR_12);
        if (!VAR_45)
            return VAR_6;
        FUNC_0(VAR_55, VAR_16, VAR_25|VAR_26);


        VAR_58[0] = 100;
        VAR_58[1] = 210;
        VAR_58[2] = 400;
        FUNC_20(VAR_45, VAR_29, 3, (LPARAM)VAR_58);
    } else {
        FUNC_0(VAR_55, VAR_17, VAR_25|VAR_27);
        FUNC_0(VAR_55, VAR_16, VAR_25|VAR_27);
 }

    FUNC_21(VAR_43, VAR_51);
    FUNC_23(VAR_43);
    FUNC_22();
    return VAR_35;
}
