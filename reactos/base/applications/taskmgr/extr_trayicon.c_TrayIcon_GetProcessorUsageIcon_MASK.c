
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {int * hbmColor; int * hbmMask; int fIcon; } ;
struct TYPE_5__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ ICONINFO ;
typedef int * HICON ;
typedef int * HDC ;
typedef int * HBRUSH ;
typedef int * HBITMAP ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,int *) ;
 int * FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

HICON FUNC_13(void)
{
    HICON VAR_4 = ((void*)0);
    HDC VAR_5 = ((void*)0);
    HDC VAR_6 = ((void*)0);
    HBITMAP VAR_7 = ((void*)0);
    HBITMAP VAR_8 = ((void*)0);
    HBITMAP VAR_9 = ((void*)0);
    ICONINFO VAR_10;
    ULONG VAR_11;
    int VAR_12;
    HBRUSH VAR_13 = ((void*)0);
    RECT VAR_14;




    VAR_5 = FUNC_6(((void*)0));
    if (!VAR_5)
        goto done;




    VAR_6 = FUNC_0(VAR_5);
    if (!VAR_6)
        goto done;




    VAR_7 = FUNC_7(VAR_3, FUNC_8(VAR_0));
    VAR_9 = FUNC_7(VAR_3, FUNC_8(VAR_1));
    if (!VAR_7 || !VAR_9)
        goto done;

    VAR_13 = FUNC_2(FUNC_10(0, 255, 0));
    if (!VAR_13)
        goto done;





    VAR_8 = (HBITMAP) FUNC_12(VAR_6, VAR_7);




    VAR_11 = FUNC_9();







    VAR_12 = (VAR_11 + (VAR_11 / 10)) / 11;
    VAR_14.left = 3;
    VAR_14.top = 12 - VAR_12;
    VAR_14.right = 13;
    VAR_14.bottom = 13;




    if (VAR_12)
        FUNC_5(VAR_6, &VAR_14, VAR_13);





    VAR_7 = FUNC_12(VAR_6, VAR_8);
    VAR_8 = ((void*)0);

    VAR_10.fIcon = VAR_2;
    VAR_10.hbmMask = VAR_9;
    VAR_10.hbmColor = VAR_7;

    VAR_4 = FUNC_1(&VAR_10);

done:



    if (VAR_5)
        FUNC_11(((void*)0), VAR_5);
    if (VAR_6)
        FUNC_3(VAR_6);
    if (VAR_13)
        FUNC_4(VAR_13);
    if (VAR_7)
        FUNC_4(VAR_7);
    if (VAR_9)
        FUNC_4(VAR_9);




    return VAR_4;
}
