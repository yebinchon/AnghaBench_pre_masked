
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Height; int Width; int Y; int X; } ;
typedef int GpStatus ;
typedef TYPE_1__ GpRectF ;
typedef int GpPathGradient ;
typedef int GpBrush ;


 int FUNC_0 (int ,int,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (double,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(void)
{
    GpStatus VAR_4;
    GpPathGradient *VAR_5;
    GpRectF VAR_6;

    VAR_4 = FUNC_0(VAR_3, 4, VAR_2, &VAR_5);
    FUNC_3(VAR_1, VAR_4);

    VAR_4 = FUNC_2(((void*)0), ((void*)0));
    FUNC_3(VAR_0, VAR_4);
    VAR_4 = FUNC_2(VAR_5, ((void*)0));
    FUNC_3(VAR_0, VAR_4);
    VAR_4 = FUNC_2(((void*)0), &VAR_6);
    FUNC_3(VAR_0, VAR_4);

    VAR_4 = FUNC_2(VAR_5, &VAR_6);
    FUNC_3(VAR_1, VAR_4);
    FUNC_4(0.0, VAR_6.X);
    FUNC_4(20.0, VAR_6.Y);
    FUNC_4(50.0, VAR_6.Width);
    FUNC_4(30.0, VAR_6.Height);

    FUNC_1((GpBrush*) VAR_5);
}
