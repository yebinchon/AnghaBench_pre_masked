
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int X; int Y; } ;
typedef int * HDC ;
typedef int GpStatus ;
typedef int GpPointF ;
typedef TYPE_1__ GpPoint ;
typedef int GpPen ;
typedef int GpGraphics ;
typedef int ARGB ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int ,float,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int ,int *) ;
 int VAR_2 ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    GpStatus VAR_4;
    GpGraphics *VAR_5 = ((void*)0);
    GpPen *VAR_6 = ((void*)0);
    GpPoint *VAR_7 = ((void*)0);
    HDC VAR_8 = FUNC_7( VAR_3 );


    FUNC_10(VAR_8 != ((void*)0), "Expected HDC to be initialized\n");

    VAR_4 = FUNC_1(VAR_8, &VAR_5);
    FUNC_9(VAR_1, VAR_4);
    FUNC_10(VAR_5 != ((void*)0), "Expected graphics to be initialized\n");

    VAR_4 = FUNC_2((ARGB)0xffff00ff, 10.0f, VAR_2, &VAR_6);
    FUNC_9(VAR_1, VAR_4);
    FUNC_10(VAR_6 != ((void*)0), "Expected pen to be initialized\n");


    VAR_7 = FUNC_0(2 * sizeof(GpPointF));

    VAR_7[0].X = 1;
    VAR_7[0].Y = 1;

    VAR_7[1].X = 2;
    VAR_7[1].Y = 2;


    VAR_4 = FUNC_5(((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_9(VAR_0, VAR_4);

    VAR_4 = FUNC_5(VAR_5, VAR_6, VAR_7, 0);
    FUNC_9(VAR_0, VAR_4);

    VAR_4 = FUNC_5(VAR_5, ((void*)0), VAR_7, 2);
    FUNC_9(VAR_0, VAR_4);

    VAR_4 = FUNC_5(((void*)0), VAR_6, VAR_7, 2);
    FUNC_9(VAR_0, VAR_4);


    VAR_4 = FUNC_5(VAR_5, VAR_6, VAR_7, 2);
    FUNC_9(VAR_1, VAR_4);

    FUNC_6(VAR_7);
    FUNC_4(VAR_6);
    FUNC_3(VAR_5);

    FUNC_8(VAR_3, VAR_8);
}
