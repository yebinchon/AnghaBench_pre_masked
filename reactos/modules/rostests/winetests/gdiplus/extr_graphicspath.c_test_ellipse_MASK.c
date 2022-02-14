
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double X; double Y; } ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpPath ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,double,double,double,double) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    GpStatus VAR_4;
    GpPath *VAR_5;
    GpPointF VAR_6[2];

    VAR_6[0].X = 7.0;
    VAR_6[0].Y = 11.0;
    VAR_6[1].X = 13.0;
    VAR_6[1].Y = 17.0;

    FUNC_4(VAR_1, &VAR_5);
    VAR_4 = FUNC_1(VAR_5, 10.0, 100.0, 20.0, 50.5);
    FUNC_6(VAR_2, VAR_4);
    FUNC_2(VAR_5, VAR_6, 2);
    VAR_4 = FUNC_1(VAR_5, 10.0, 200.0, -5.0, -10.0);
    FUNC_6(VAR_2, VAR_4);
    FUNC_3(VAR_5);
    VAR_4 = FUNC_1(VAR_5, 10.0, 300.0, 0.0, 1.0);
    FUNC_6(VAR_2, VAR_4);

    FUNC_7(VAR_5, VAR_3, FUNC_0(VAR_3), VAR_0);

    FUNC_5(VAR_5);
}
