
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int X; int Y; } ;
struct TYPE_5__ {int X; int Y; int Width; int Height; } ;
typedef int REAL ;
typedef int GpStatus ;
typedef TYPE_1__ GpRectF ;
typedef TYPE_2__ GpPointF ;
typedef int GpMatrix ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (double,int ) ;

__attribute__((used)) static void FUNC_5(void)
{


    GpMatrix *VAR_1;
    REAL VAR_2[6];
    GpRectF VAR_3;
    GpPointF VAR_4[3];
    GpStatus VAR_5;

    VAR_3.X = 10;
    VAR_3.Y = 10;
    VAR_3.Width = 10;
    VAR_3.Height = 10;

    VAR_4[0].X = 10;
    VAR_4[0].Y = 10;
    VAR_4[1].X = 20;
    VAR_4[1].Y = 10;
    VAR_4[2].X = 10;
    VAR_4[2].Y = 20;

    VAR_5 = FUNC_0(&VAR_3, VAR_4, &VAR_1);
    FUNC_3(VAR_0, VAR_5);

    VAR_5 = FUNC_2(VAR_1, VAR_2);
    FUNC_3(VAR_0, VAR_5);

    FUNC_4(1.0, VAR_2[0]);
    FUNC_4(0.0, VAR_2[1]);
    FUNC_4(0.0, VAR_2[2]);
    FUNC_4(1.0, VAR_2[3]);
    FUNC_4(0.0, VAR_2[4]);
    FUNC_4(0.0, VAR_2[5]);

    FUNC_1(VAR_1);

    VAR_4[0].X = 20;
    VAR_4[0].Y = 10;
    VAR_4[1].X = 40;
    VAR_4[1].Y = 10;
    VAR_4[2].X = 20;
    VAR_4[2].Y = 20;

    VAR_5 = FUNC_0(&VAR_3, VAR_4, &VAR_1);
    FUNC_3(VAR_0, VAR_5);

    VAR_5 = FUNC_2(VAR_1, VAR_2);
    FUNC_3(VAR_0, VAR_5);

    FUNC_4(2.0, VAR_2[0]);
    FUNC_4(0.0, VAR_2[1]);
    FUNC_4(0.0, VAR_2[2]);
    FUNC_4(1.0, VAR_2[3]);
    FUNC_4(0.0, VAR_2[4]);
    FUNC_4(0.0, VAR_2[5]);

    FUNC_1(VAR_1);

    VAR_4[0].X = 10;
    VAR_4[0].Y = 20;
    VAR_4[1].X = 20;
    VAR_4[1].Y = 30;
    VAR_4[2].X = 10;
    VAR_4[2].Y = 30;

    VAR_5 = FUNC_0(&VAR_3, VAR_4, &VAR_1);
    FUNC_3(VAR_0, VAR_5);

    VAR_5 = FUNC_2(VAR_1, VAR_2);
    FUNC_3(VAR_0, VAR_5);

    FUNC_4(1.0, VAR_2[0]);
    FUNC_4(1.0, VAR_2[1]);
    FUNC_4(0.0, VAR_2[2]);
    FUNC_4(1.0, VAR_2[3]);
    FUNC_4(0.0, VAR_2[4]);
    FUNC_4(0.0, VAR_2[5]);

    FUNC_1(VAR_1);
}
