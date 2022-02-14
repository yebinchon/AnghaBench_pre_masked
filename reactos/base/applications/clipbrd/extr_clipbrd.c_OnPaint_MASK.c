
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ps ;
typedef int WPARAM ;
struct TYPE_10__ {int uDisplayFormat; int hInstance; int hMainWnd; } ;
struct TYPE_9__ {int hdc; int rcPaint; scalar_t__ fErase; } ;
typedef int RECT ;
typedef int PPAINTSTRUCT ;
typedef TYPE_1__ PAINTSTRUCT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HGLOBAL ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int COLORREF ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,TYPE_1__,int ) ;
 int FUNC_5 (int ,int ,int ,int *,int) ;
 int VAR_6 ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,int *,int ) ;
 int VAR_7 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 TYPE_3__ VAR_8 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int,TYPE_1__,int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_22(HWND VAR_13, WPARAM VAR_14, LPARAM VAR_15)
{
    HDC VAR_16;
    PAINTSTRUCT VAR_17;
    COLORREF VAR_18, VAR_19;
    RECT VAR_20;

    if (!FUNC_14(VAR_8.hMainWnd))
        return;

    VAR_16 = FUNC_0(VAR_13, &VAR_17);


    if (VAR_17.fErase)
        FUNC_7(VAR_17.hdc, &VAR_17.rcPaint, (HBRUSH)(VAR_0 + 1));


    VAR_18 = FUNC_19(VAR_17.hdc, FUNC_9(VAR_0));
    VAR_19 = FUNC_21(VAR_17.hdc, FUNC_9(VAR_1));


    FUNC_17(VAR_17.hdc);

    switch (VAR_8.uDisplayFormat)
    {
        case 132:
        {

            break;
        }

        case 135:
        case 129:
        case 131:
        case 128:
        {
            FUNC_4(VAR_8.uDisplayFormat, VAR_17, VAR_10);
            break;
        }

        case 138:
        case 141:
        {
            FUNC_1(VAR_17, VAR_10, VAR_9);
            break;
        }

        case 140:
        case 139:
        {
            FUNC_20(VAR_8.uDisplayFormat, VAR_17, VAR_10, VAR_2);
            break;
        }

        case 136:
        case 133:
        {
            FUNC_8(VAR_13, &VAR_20);
            FUNC_16(VAR_16, &VAR_20);
            break;
        }

        case 137:
        case 134:
        {
            FUNC_8(VAR_13, &VAR_20);
            FUNC_15(VAR_16, &VAR_20);
            break;
        }





        case 130:
        {
            HGLOBAL VAR_21;
            PPAINTSTRUCT VAR_22;

            VAR_21 = FUNC_10(VAR_7, sizeof(VAR_17));
            if (VAR_21)
            {
                VAR_22 = FUNC_12(VAR_21);
                FUNC_3(VAR_22, &VAR_17, sizeof(VAR_17));
                FUNC_13(VAR_21);

                FUNC_18(VAR_11, VAR_12,
                                          (WPARAM)VAR_13, (LPARAM)VAR_21);

                FUNC_11(VAR_21);
            }
            break;
        }

        default:
        {
            FUNC_8(VAR_13, &VAR_20);
            FUNC_5(VAR_8.hInstance, VAR_6,
                                 VAR_16, &VAR_20, VAR_3 | VAR_5 | VAR_4);
            break;
        }
    }


    FUNC_21(VAR_17.hdc, VAR_19);
    FUNC_19(VAR_17.hdc, VAR_18);

    FUNC_6(VAR_13, &VAR_17);

    FUNC_2();
}
