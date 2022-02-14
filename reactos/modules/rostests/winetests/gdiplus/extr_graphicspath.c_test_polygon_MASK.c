
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
 int FUNC_3 (int ,int **) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(void)
{
    GpStatus VAR_5;
    GpPath *VAR_6;
    GpPointF VAR_7[5];

    VAR_7[0].X = 0.0;
    VAR_7[0].Y = 0.0;
    VAR_7[1].X = 10.0;
    VAR_7[1].Y = 10.0;
    VAR_7[2].X = 10.0;
    VAR_7[2].Y = 20.0;
    VAR_7[3].X = 30.0;
    VAR_7[3].Y = 10.0;
    VAR_7[4].X = 20.0;
    VAR_7[4].Y = 0.0;

    FUNC_3(VAR_1, &VAR_6);


    VAR_5 = FUNC_2(((void*)0), VAR_7, 5);
    FUNC_5(VAR_2, VAR_5);
    VAR_5 = FUNC_2(VAR_6, ((void*)0), 5);
    FUNC_5(VAR_2, VAR_5);

    VAR_5 = FUNC_2(VAR_6, VAR_7, 2);
    FUNC_5(VAR_2, VAR_5);


    VAR_5 = FUNC_1(VAR_6, 5.0, 5.0, 6.0, 8.0);
    FUNC_5(VAR_3, VAR_5);
    VAR_5 = FUNC_2(VAR_6, VAR_7, 5);
    FUNC_5(VAR_3, VAR_5);

    FUNC_6(VAR_6, VAR_4, FUNC_0(VAR_4), VAR_0);

    FUNC_4(VAR_6);
}
