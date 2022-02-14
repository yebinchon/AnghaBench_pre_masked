
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int X; int Y; } ;
typedef int * HDC ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpPen ;
typedef int GpGraphics ;
typedef int ARGB ;


 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int ,float,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,TYPE_1__*,int,int) ;
 int * FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int *) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    GpStatus VAR_4;
    GpGraphics *VAR_5 = ((void*)0);
    GpPen *VAR_6 = ((void*)0);
    HDC VAR_7 = FUNC_5( VAR_3 );
    GpPointF VAR_8[3];

    VAR_8[0].X = 0;
    VAR_8[0].Y = 0;

    VAR_8[1].X = 40;
    VAR_8[1].Y = 20;

    VAR_8[2].X = 10;
    VAR_8[2].Y = 40;


    FUNC_8(VAR_7 != ((void*)0), "Expected HDC to be initialized\n");

    VAR_4 = FUNC_0(VAR_7, &VAR_5);
    FUNC_7(VAR_1, VAR_4);
    FUNC_8(VAR_5 != ((void*)0), "Expected graphics to be initialized\n");

    VAR_4 = FUNC_1((ARGB)0xffff00ff, 10.0f, VAR_2, &VAR_6);
    FUNC_7(VAR_1, VAR_4);
    FUNC_8(VAR_6 != ((void*)0), "Expected pen to be initialized\n");


    VAR_4 = FUNC_4(((void*)0), ((void*)0), VAR_8, 3, 1);
    FUNC_7(VAR_0, VAR_4);

    VAR_4 = FUNC_4(VAR_5, ((void*)0), VAR_8, 3, 1);
    FUNC_7(VAR_0, VAR_4);

    VAR_4 = FUNC_4(((void*)0), VAR_6, VAR_8, 3, 1);
    FUNC_7(VAR_0, VAR_4);


    VAR_4 = FUNC_4(VAR_5, VAR_6, VAR_8, -1, 1);
    FUNC_7(VAR_0, VAR_4);

    VAR_4 = FUNC_4(VAR_5, VAR_6, VAR_8, 0, 1);
    FUNC_7(VAR_0, VAR_4);

    VAR_4 = FUNC_4(VAR_5, VAR_6, VAR_8, 1, 1);
    FUNC_7(VAR_0, VAR_4);


    VAR_4 = FUNC_4(VAR_5, VAR_6, VAR_8, 2, 1);
    FUNC_7(VAR_1, VAR_4);

    VAR_4 = FUNC_4(VAR_5, VAR_6, VAR_8, 3, 2);
    FUNC_7(VAR_1, VAR_4);

    VAR_4 = FUNC_4(VAR_5, VAR_6, VAR_8, 3, -2);
    FUNC_7(VAR_1, VAR_4);

    VAR_4 = FUNC_4(VAR_5, VAR_6, VAR_8, 3, 0);
    FUNC_7(VAR_1, VAR_4);

    FUNC_3(VAR_6);
    FUNC_2(VAR_5);

    FUNC_6(VAR_3, VAR_7);
}
