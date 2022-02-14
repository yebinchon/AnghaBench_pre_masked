
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bottom; int right; } ;
typedef TYPE_1__ RECT ;
typedef int LPWSTR ;
typedef int * HWND ;
typedef int HMENU ;


 int * FUNC_0 (int ,int ,int *,int,int ,int ,int ,int ,int *,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
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

HWND FUNC_5(HWND VAR_11, LPWSTR VAR_12, HMENU VAR_13)
{
    RECT VAR_14;
    HWND VAR_15;


    FUNC_2(VAR_11, &VAR_14);
    VAR_15 = FUNC_0(VAR_7, VAR_5, ((void*)0),
                            VAR_9 | VAR_6 | VAR_8 | VAR_2 | VAR_1 | VAR_3 | VAR_0 | VAR_4,
                            0, 0, VAR_14.right, VAR_14.bottom,
                            VAR_11, VAR_13, VAR_10, ((void*)0));

    if (!FUNC_3(VAR_15) || !FUNC_4(VAR_15, VAR_12))
    {
        FUNC_1(VAR_15);
        return ((void*)0);
    }
    return VAR_15;
}
