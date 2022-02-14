
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ cy; scalar_t__ cx; int hInstance; } ;
struct TYPE_10__ {scalar_t__ bmHeight; int bmWidth; } ;
struct TYPE_9__ {int LowerRight; scalar_t__ UpperLeft; } ;
struct TYPE_8__ {int Red; int Green; int Blue; int Alpha; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ TRIVERTEX ;
typedef int * HDC ;
typedef int * HBRUSH ;
typedef int * HBITMAP ;
typedef TYPE_2__ GRADIENT_RECT ;
typedef int BOOL ;
typedef TYPE_3__ BITMAP ;


 int FUNC_0 (int *,int ,scalar_t__,int ,scalar_t__,int *,int ,int ,int ) ;
 int * FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *,int,TYPE_3__*) ;
 int FUNC_7 (int *,TYPE_1__*,int,TYPE_2__*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (int *,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_13 (int,int,int) ;
 int VAR_10 ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int ,scalar_t__,scalar_t__,scalar_t__,int *,int ,int ,int ,scalar_t__,int ) ;
 TYPE_4__* VAR_11 ;

HDC
FUNC_16(HDC VAR_12)
{
    HBITMAP VAR_13 = ((void*)0);
    HDC VAR_14 = ((void*)0);
    BOOL VAR_15 = VAR_0;



    VAR_14 = FUNC_2(VAR_12);
    if (VAR_14)
    {

        VAR_13 = FUNC_1(VAR_12, VAR_11->cx, VAR_11->cy);
        if (VAR_13)
        {

            FUNC_14(VAR_14, VAR_13);


            {
                HBITMAP VAR_16;
                HBRUSH VAR_17;
                BITMAP VAR_18;
                HDC VAR_19;


                VAR_17 = FUNC_3(FUNC_13(90, 126, 220));
                FUNC_14(VAR_14, VAR_17);
                FUNC_12(VAR_14,
                        0,
                        VAR_8,
                        VAR_11->cx,
                        VAR_11->cy - VAR_8 - VAR_7,
                        VAR_9);
                FUNC_5(VAR_17);


                VAR_16 = (HBITMAP)FUNC_9(VAR_11->hInstance,
                                                    FUNC_11(VAR_3),
                                                    VAR_5,
                                                    0,
                                                    0,
                                                    VAR_6);
                if (VAR_16)
                {

                    FUNC_6(VAR_16, sizeof(BITMAP), &VAR_18);


                    VAR_19 = FUNC_2(VAR_12);
                    if (VAR_19)
                    {

                        FUNC_14(VAR_19, VAR_16);


                        FUNC_0(VAR_14,
                                0,
                                VAR_8,
                                VAR_18.bmWidth,
                                VAR_18.bmHeight,
                                VAR_19,
                                0,
                                0,
                                VAR_10);


                        FUNC_4(VAR_19);
                    }


                    FUNC_5(VAR_16);
                }
            }


            {
                HBITMAP VAR_20;
                HBRUSH VAR_21;
                BITMAP VAR_22;
                HDC VAR_23;


                VAR_21 = FUNC_3(FUNC_13(0, 48, 156));
                FUNC_14(VAR_14, VAR_21);
                FUNC_12(VAR_14, 0, 0, VAR_11->cx, VAR_8, VAR_9);
                FUNC_5(VAR_21);


                VAR_20 = (HBITMAP)FUNC_9(VAR_11->hInstance,
                                                    FUNC_11(VAR_4),
                                                    VAR_5,
                                                    0,
                                                    0,
                                                    VAR_6);
                if (VAR_20)
                {

                    FUNC_6(VAR_20, sizeof(BITMAP), &VAR_22);


                    VAR_23 = FUNC_2(VAR_12);
                    if (VAR_23)
                    {

                        FUNC_14(VAR_23, VAR_20);


                        FUNC_15(VAR_14,
                                    0,
                                    VAR_8 - VAR_22.bmHeight,
                                    VAR_11->cx,
                                    VAR_8,
                                    VAR_23,
                                    0,
                                    0,
                                    VAR_22.bmWidth,
                                    VAR_8,
                                    VAR_10);


                        FUNC_4(VAR_23);
                    }


                    FUNC_5(VAR_20);
                }
            }


            {
                HBITMAP VAR_24;
                TRIVERTEX VAR_25[2];
                GRADIENT_RECT VAR_26;
                BITMAP VAR_27;
                HDC VAR_28;







                VAR_24 = (HBITMAP)FUNC_8(VAR_11->hInstance,
                                                    FUNC_10(VAR_2),
                                                    VAR_5,
                                                    0,
                                                    0,
                                                    VAR_6);
                if (VAR_24)
                {

                    FUNC_6(VAR_24, sizeof(BITMAP), &VAR_27);


                    VAR_28 = FUNC_2(VAR_12);
                    if (VAR_28)
                    {

                        FUNC_14(VAR_28, VAR_24);


                        FUNC_15(VAR_14,
                                    0,
                                    VAR_11->cy - VAR_7,
                                    VAR_11->cx,
                                    VAR_11->cy - VAR_7 + VAR_27.bmHeight,
                                    VAR_28,
                                    0,
                                    0,
                                    VAR_27.bmWidth,
                                    VAR_11->cy - VAR_7 + VAR_27.bmHeight,
                                    VAR_10);


                        FUNC_4(VAR_28);
                    }


                    FUNC_5(VAR_24);
                }


                VAR_25[0].x = 0;
                VAR_25[0].y = VAR_11->cy - VAR_7 + 2;
                VAR_25[0].Red = 0x3900;
                VAR_25[0].Green = 0x3400;
                VAR_25[0].Blue = 0xAE00;
                VAR_25[0].Alpha = 0x0000;


                VAR_25[1].x = VAR_11->cx;
                VAR_25[1].y = VAR_11->cy;
                VAR_25[1].Red = 0x0000;
                VAR_25[1].Green = 0x3000;
                VAR_25[1].Blue = 0x9600;
                VAR_25[1].Alpha = 0x0000;


                VAR_26.UpperLeft = 0;
                VAR_26.LowerRight = 1;


                FUNC_7(VAR_14,
                                VAR_25,
                                2,
                                &VAR_26,
                                1,
                                VAR_1);
            }


            FUNC_5(VAR_13);
        }
    }

    return VAR_14;
}
