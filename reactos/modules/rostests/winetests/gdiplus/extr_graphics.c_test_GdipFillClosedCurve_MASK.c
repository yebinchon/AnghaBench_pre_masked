
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int X; int Y; } ;
typedef int * HDC ;
typedef int GpStatus ;
typedef int GpSolidFill ;
typedef TYPE_1__ GpPointF ;
typedef int GpGraphics ;
typedef int GpBrush ;
typedef int ARGB ;


 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,TYPE_1__*,int) ;
 int * FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    GpStatus VAR_3;
    GpGraphics *VAR_4 = ((void*)0);
    GpSolidFill *VAR_5 = ((void*)0);
    HDC VAR_6 = FUNC_5( VAR_2 );
    GpPointF VAR_7[3];

    VAR_7[0].X = 0;
    VAR_7[0].Y = 0;

    VAR_7[1].X = 40;
    VAR_7[1].Y = 20;

    VAR_7[2].X = 10;
    VAR_7[2].Y = 40;


    FUNC_8(VAR_6 != ((void*)0), "Expected HDC to be initialized\n");

    VAR_3 = FUNC_0(VAR_6, &VAR_4);
    FUNC_7(VAR_1, VAR_3);
    FUNC_8(VAR_4 != ((void*)0), "Expected graphics to be initialized\n");

    FUNC_1((ARGB)0xdeadbeef, &VAR_5);


    VAR_3 = FUNC_4(((void*)0), ((void*)0), ((void*)0), 3);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(VAR_4, ((void*)0), ((void*)0), 3);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(((void*)0), (GpBrush*)VAR_5, ((void*)0), 3);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(((void*)0), ((void*)0), VAR_7, 3);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(VAR_4, (GpBrush*)VAR_5, ((void*)0), 3);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(VAR_4, ((void*)0), VAR_7, 3);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(((void*)0), (GpBrush*)VAR_5, VAR_7, 3);
    FUNC_7(VAR_0, VAR_3);


    VAR_3 = FUNC_4(VAR_4, (GpBrush*)VAR_5, VAR_7, -1);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(VAR_4, (GpBrush*)VAR_5, VAR_7, 0);
    FUNC_7(VAR_0, VAR_3);


    VAR_3 = FUNC_4(VAR_4, (GpBrush*)VAR_5, VAR_7, 1);
    FUNC_7(VAR_1, VAR_3);

    VAR_3 = FUNC_4(VAR_4, (GpBrush*)VAR_5, VAR_7, 2);
    FUNC_7(VAR_1, VAR_3);

    VAR_3 = FUNC_4(VAR_4, (GpBrush*)VAR_5, VAR_7, 3);
    FUNC_7(VAR_1, VAR_3);

    FUNC_3(VAR_4);
    FUNC_2((GpBrush*)VAR_5);

    FUNC_6(VAR_2, VAR_6);
}
