
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* fltColors; } ;
struct TYPE_7__ {double right; int bottom; } ;
struct TYPE_6__ {int hSelf; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PMAIN_WND_INFO ;
typedef int LPARAM ;
typedef int * HWND ;
typedef int HDC ;
typedef int * HBITMAP ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int ,int *,int,int,int,int,int,int ,int *,int ,int *) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_10 (int ,int,int,scalar_t__,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_11 (char*) ;
 int VAR_17 ;

BOOL
FUNC_12(PMAIN_WND_INFO VAR_18)
{
    HWND VAR_19;
    HWND VAR_20;
    HWND VAR_21;
    HWND VAR_22;
    RECT VAR_23;
    HBITMAP VAR_24;

    FUNC_3(VAR_18->fltColors->hSelf,
                  &VAR_23);

    VAR_19 = FUNC_0(0,
                                  VAR_13,
                                  ((void*)0),
                                  VAR_14 | VAR_16 | VAR_2,
                                  2,
                                  2,
                                  (int) (VAR_23.right * 0.65),
                                  VAR_23.bottom - 2,
                                  VAR_18->fltColors->hSelf,
                                  ((void*)0),
                                  VAR_17,
                                  ((void*)0));
    if (VAR_19 == ((void*)0))
        return VAR_5;

    VAR_20 = FUNC_0(0,
                                VAR_13,
                                ((void*)0),
                                VAR_14 | VAR_16 | VAR_2,
                                145,
                                35,
                                25,
                                135,
                                VAR_18->fltColors->hSelf,
                                ((void*)0),
                                VAR_17,
                                ((void*)0));
    if (VAR_20 == ((void*)0))
        return VAR_5;

    VAR_21 = FUNC_0(0,
                                  VAR_12,
                                  ((void*)0),
                                  VAR_14 | VAR_16 | VAR_2,
                                  118, 5, 75, 25,
                                  VAR_18->fltColors->hSelf,
                                  ((void*)0),
                                  VAR_17,
                                  ((void*)0));
    if (VAR_21 == ((void*)0))
        return VAR_5;

    FUNC_7(VAR_21);


    FUNC_9(VAR_21, VAR_3, 0, (LPARAM)FUNC_11("Primary"));
    FUNC_9(VAR_21, VAR_3, 0, (LPARAM)FUNC_11("Secondary"));
    FUNC_9(VAR_21, VAR_4, 0, 0);


    VAR_22 = FUNC_0(VAR_15,
                           VAR_11,
                           ((void*)0),
                           VAR_14 | VAR_16 | VAR_1,
                           VAR_23.right - 15,
                           VAR_23.bottom - 15,
                           15, 15,
                           VAR_18->fltColors->hSelf,
                           ((void*)0),
                           VAR_17,
                           ((void*)0));
    if (VAR_22 == ((void*)0))
        return VAR_5;

    VAR_24 = (HBITMAP)FUNC_5(VAR_17,
                                     FUNC_6(VAR_6),
                                     VAR_7,
                                     12,
                                     11,
                                     VAR_9 | VAR_8);
    if (VAR_24 != ((void*)0))
    {
        FUNC_9(VAR_22,
                    VAR_0,
                    VAR_7,
                    (LPARAM)VAR_24);
    }



    FUNC_2(VAR_20);
    FUNC_1(VAR_19);

    if (VAR_19 != ((void*)0))
    {
        HDC VAR_25 = FUNC_4(VAR_19);
        FUNC_10(VAR_25, 8, 75, FUNC_11("Possible layout?"), 16);
        FUNC_8(VAR_19, VAR_25);
    }

    return VAR_10;

}
