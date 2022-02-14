
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cbSize; int cbWndExtra; void* hIconSm; int lpszClassName; void* hbrBackground; void* hCursor; void* hIcon; void* hInstance; int lpfnWndProc; } ;
typedef TYPE_1__ WNDCLASSEXW ;
typedef int LPCWSTR ;
typedef int * HMENU ;
typedef void* HINSTANCE ;
typedef void* HICON ;
typedef void* HBRUSH ;
typedef int HANDLE ;
typedef int BOOL ;
typedef int ATOM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int ,int ,int *,void*,void*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (void*,int) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_14 ;
 void* FUNC_7 (int *,int ) ;
 void* FUNC_8 (void*,int ) ;
 scalar_t__ FUNC_9 (void*,int ,int ,int ,int ,int ) ;
 void* FUNC_10 (void*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (int *,int,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_17 (int *,int ,int) ;
 int FUNC_18 (int ,int ) ;
 int VAR_22 ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_21 (TYPE_1__*,int) ;
 int VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

BOOL FUNC_22(HINSTANCE VAR_38, int VAR_39)
{
    BOOL VAR_40;
    HMENU VAR_41;

    WNDCLASSEXW VAR_42;
    WNDCLASSEXW VAR_43;
    ATOM VAR_44;

    FUNC_21(&VAR_42, sizeof(WNDCLASSEXW));
    VAR_42.cbSize = sizeof(WNDCLASSEXW);
    VAR_42.lpfnWndProc = VAR_4;
    VAR_42.hInstance = VAR_38;
    VAR_42.hIcon = FUNC_8(VAR_38, FUNC_12(VAR_6));
    VAR_42.hIconSm = (HICON)FUNC_9(VAR_38, FUNC_12(VAR_6),
                                        VAR_13, FUNC_4(VAR_19),
                                        FUNC_4(VAR_20), VAR_14);
    VAR_42.hCursor = FUNC_7(((void*)0), VAR_5);
    VAR_42.hbrBackground = (HBRUSH)(VAR_0 + 1);
    VAR_42.lpszClassName = VAR_36;

    VAR_44 = FUNC_13(&VAR_42);

    FUNC_21(&VAR_43, sizeof(WNDCLASSEXW));
    VAR_43.cbSize = sizeof(WNDCLASSEXW);
    VAR_43.lpfnWndProc = VAR_2;
    VAR_43.cbWndExtra = sizeof(HANDLE);
    VAR_43.hInstance = VAR_38;
    VAR_43.hIcon = FUNC_8(VAR_38, FUNC_12(VAR_6));
    VAR_43.hCursor = FUNC_7(((void*)0), VAR_5);
    VAR_43.hbrBackground = (HBRUSH)(VAR_0 + 1);
    VAR_43.lpszClassName = VAR_35;
    VAR_43.hIconSm = (HICON)FUNC_9(VAR_38, FUNC_12(VAR_6),
                                        VAR_13, FUNC_4(VAR_19),
                                        FUNC_4(VAR_20), VAR_14);

    FUNC_13(&VAR_43);

    FUNC_15(VAR_38);

    VAR_30 = FUNC_10(VAR_38, FUNC_12(VAR_8));
    VAR_31 = FUNC_10(VAR_38, FUNC_12(VAR_7));



    FUNC_5();

    VAR_41 = FUNC_3(VAR_30, 1);

    VAR_40 = FUNC_6();
    if(!VAR_40)
    {

        if(VAR_41 != ((void*)0))
        {
            FUNC_16(VAR_41, VAR_10, VAR_15);

            FUNC_16(VAR_41, 4, VAR_16);
        }
    }

    if(VAR_41 != ((void*)0))
        FUNC_17(VAR_41, VAR_9, VAR_15);

    VAR_33 = FUNC_14(VAR_34);




    VAR_29 = FUNC_2(VAR_26, (LPCWSTR)(FUNC_19(VAR_44)), VAR_37,
                                VAR_27 | VAR_25 | VAR_24,
                                VAR_1, VAR_1, VAR_1, VAR_1,
                                ((void*)0), VAR_30, VAR_38, ((void*)0) );

    if (!VAR_29)
    {
        return VAR_3;
    }


    VAR_32 = FUNC_1(VAR_28 | VAR_23 | VAR_25 | VAR_24 | VAR_18,
                                     L"", VAR_29, VAR_21);
    if (VAR_32)
    {

        FUNC_18(VAR_29, VAR_3);
        FUNC_0(FUNC_3(VAR_30, VAR_11), VAR_12, VAR_15 | VAR_17);
    }

    FUNC_11();
    FUNC_20(VAR_29);
    return VAR_22;
}
