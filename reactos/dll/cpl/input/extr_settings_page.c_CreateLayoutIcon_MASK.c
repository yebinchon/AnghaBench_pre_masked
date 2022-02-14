
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int lf ;
struct TYPE_9__ {int fIcon; int * hbmMask; int * hbmColor; } ;
struct TYPE_8__ {int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef char* LPWSTR ;
typedef int LOGFONTW ;
typedef int INT ;
typedef TYPE_2__ ICONINFO ;
typedef int * HICON ;
typedef int * HFONT ;
typedef scalar_t__ HDC ;
typedef int * HBITMAP ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int,int,int,int *) ;
 int * FUNC_1 (scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,char*,int,TYPE_1__*,int) ;
 int VAR_8 ;
 int FUNC_8 (scalar_t__,int ,int ,int ,TYPE_1__*,char*,int ,int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (scalar_t__,TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,int ,int ,int,int,int ) ;
 int FUNC_15 (int *,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_16 (scalar_t__,int *) ;
 int FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (TYPE_1__*,int,int ,int,int) ;
 int FUNC_19 (scalar_t__,int ) ;
 scalar_t__ FUNC_20 (int ,int,int *,int ) ;
 int VAR_13 ;

__attribute__((used)) static HICON
FUNC_21(LPWSTR VAR_14, BOOL VAR_15)
{
    INT VAR_16 = FUNC_13(VAR_10) * 2;
    INT VAR_17 = FUNC_13(VAR_11);
    HDC VAR_18;
    HDC VAR_19;
    HBITMAP VAR_20;
    HICON VAR_21 = ((void*)0);

    VAR_19 = FUNC_10(((void*)0));
    VAR_18 = FUNC_2(VAR_19);
    VAR_20 = FUNC_1(VAR_19, VAR_16, VAR_17);

    FUNC_15(((void*)0), VAR_19);

    if (VAR_18 && VAR_20)
    {
        HBITMAP VAR_22;

        VAR_22 = FUNC_0(VAR_16, VAR_17, 1, 1, ((void*)0));
        if (VAR_22)
        {
            LOGFONTW VAR_23;

            if (FUNC_20(VAR_12, sizeof(VAR_23), &VAR_23, 0))
            {
                ICONINFO VAR_24;
                HFONT VAR_25;

                VAR_25 = FUNC_3(&VAR_23);

                if (VAR_25 != ((void*)0))
                {
                    HBITMAP VAR_26;

                    VAR_26 = FUNC_16(VAR_18, VAR_20);

                    if (VAR_26 != ((void*)0))
                    {
                        RECT VAR_27;

                        FUNC_18(&VAR_27, 0, 0, VAR_16 / 2, VAR_17);

                        if (VAR_15 != VAR_9)
                        {
                            FUNC_17(VAR_18, FUNC_11(VAR_3));
                            FUNC_19(VAR_18, FUNC_11(VAR_4));

                            FUNC_8(VAR_18, VAR_27.left, VAR_27.top, VAR_8, &VAR_27, L"", 0, ((void*)0));

                            FUNC_16(VAR_18, VAR_25);
                            FUNC_7(VAR_18, L"\x2022", 1, &VAR_27, VAR_6 | VAR_5 | VAR_7);
                        }
                        else
                        {
                            FUNC_9(VAR_18, &VAR_27, FUNC_12(VAR_3));
                        }

                        FUNC_18(&VAR_27, VAR_16 / 2, 0, VAR_16, VAR_17);

                        FUNC_17(VAR_18, FUNC_11(VAR_1));
                        FUNC_19(VAR_18, FUNC_11(VAR_2));

                        FUNC_8(VAR_18, VAR_27.left, VAR_27.top, VAR_8, &VAR_27, L"", 0, ((void*)0));

                        FUNC_16(VAR_18, VAR_25);
                        FUNC_7(VAR_18, VAR_14, 2, &VAR_27, VAR_6 | VAR_5 | VAR_7);

                        FUNC_16(VAR_18, VAR_22);

                        FUNC_14(VAR_18, 0, 0, VAR_16, VAR_17, VAR_0);

                        FUNC_16(VAR_18, VAR_26);

                        VAR_24.hbmColor = VAR_20;
                        VAR_24.hbmMask = VAR_22;
                        VAR_24.fIcon = VAR_13;

                        VAR_21 = FUNC_4(&VAR_24);

                        FUNC_6(VAR_26);
                    }

                    FUNC_6(VAR_25);
                }
            }

            FUNC_6(VAR_22);
        }
    }

    FUNC_5(VAR_18);
    FUNC_6(VAR_20);

    return VAR_21;
}
