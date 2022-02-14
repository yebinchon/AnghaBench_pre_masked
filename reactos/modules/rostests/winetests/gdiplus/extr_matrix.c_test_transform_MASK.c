
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_4__ {int X; double Y; } ;
typedef int REAL ;
typedef int INT ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpMatrix ;
typedef int BOOL ;


 int FUNC_0 (double,double,double,double,double,double,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 double FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,char*,int,scalar_t__,scalar_t__,int,double) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_6(void)
{
    GpStatus VAR_3;
    GpMatrix *VAR_4 = ((void*)0);
    GpPointF VAR_5[10];
    INT VAR_6;
    BOOL VAR_7;

    for(VAR_6 = 0; VAR_6 < 10; VAR_6 ++){
        VAR_5[VAR_6].X = VAR_6 * 5.0 * (REAL)(VAR_6 % 2);
        VAR_5[VAR_6].Y = 50.0 - VAR_6 * 5.0;
    }

    FUNC_0(1.0, -2.0, 30.0, 40.0, -500.0, 600.0, &VAR_4);

    VAR_3 = FUNC_2(VAR_4, VAR_5, 0);
    FUNC_3(VAR_0, VAR_3);

    VAR_3 = FUNC_2(VAR_4, VAR_5, 10);
    FUNC_3(VAR_1, VAR_3);

    for(VAR_6 = 0; VAR_6 < 10; VAR_6 ++){
        VAR_7 = FUNC_4(VAR_2[VAR_6].X - VAR_5[VAR_6].X) < 2.0
            && FUNC_4(VAR_2[VAR_6].Y - VAR_5[VAR_6].Y) < 2.0;

        FUNC_5(VAR_7, "Expected #%d to be (%.2f, %.2f) but got (%.2f, %.2f)\n", VAR_6,
           VAR_2[VAR_6].X, VAR_2[VAR_6].Y, VAR_5[VAR_6].X, VAR_5[VAR_6].Y);
    }

    FUNC_1(VAR_4);
}
