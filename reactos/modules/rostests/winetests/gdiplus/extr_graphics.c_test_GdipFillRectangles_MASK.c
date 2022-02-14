
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; int member_2; int member_3; } ;
typedef int * HDC ;
typedef int GpStatus ;
typedef int GpSolidFill ;
typedef TYPE_1__ GpRectF ;
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
    GpBrush *VAR_5 = ((void*)0);
    HDC VAR_6 = FUNC_5( VAR_2 );
    GpRectF VAR_7[2] = {{0,0,10,10}, {10,10,10,10}};

    FUNC_8(VAR_6 != ((void*)0), "Expected HDC to be initialized\n");

    VAR_3 = FUNC_0(VAR_6, &VAR_4);
    FUNC_7(VAR_1, VAR_3);
    FUNC_8(VAR_4 != ((void*)0), "Expected graphics to be initialized\n");

    VAR_3 = FUNC_1((ARGB)0xffff00ff, (GpSolidFill**)&VAR_5);
    FUNC_7(VAR_1, VAR_3);
    FUNC_8(VAR_5 != ((void*)0), "Expected brush to be initialized\n");

    VAR_3 = FUNC_4(((void*)0), VAR_5, VAR_7, 2);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(VAR_4, ((void*)0), VAR_7, 2);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(VAR_4, VAR_5, ((void*)0), 2);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(VAR_4, VAR_5, VAR_7, 0);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(VAR_4, VAR_5, VAR_7, -1);
    FUNC_7(VAR_0, VAR_3);

    VAR_3 = FUNC_4(VAR_4, VAR_5, VAR_7, 1);
    FUNC_7(VAR_1, VAR_3);

    VAR_3 = FUNC_4(VAR_4, VAR_5, VAR_7, 2);
    FUNC_7(VAR_1, VAR_3);

    FUNC_2(VAR_5);
    FUNC_3(VAR_4);

    FUNC_6(VAR_2, VAR_6);
}
