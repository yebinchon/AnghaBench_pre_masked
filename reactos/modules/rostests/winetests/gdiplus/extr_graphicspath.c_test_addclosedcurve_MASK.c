
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
 int FUNC_1 (int *,TYPE_1__*,int,double) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    GpStatus VAR_5;
    GpPath *VAR_6;
    GpPointF VAR_7[4];

    VAR_7[0].X = 0.0;
    VAR_7[0].Y = 0.0;
    VAR_7[1].X = 10.0;
    VAR_7[1].Y = 10.0;
    VAR_7[2].X = 10.0;
    VAR_7[2].Y = 20.0;
    VAR_7[3].X = 30.0;
    VAR_7[3].Y = 10.0;

    FUNC_2(VAR_1, &VAR_6);


    VAR_5 = FUNC_1(((void*)0), ((void*)0), 0, 0.0);
    FUNC_4(VAR_2, VAR_5);
    VAR_5 = FUNC_1(VAR_6, ((void*)0), 0, 0.0);
    FUNC_4(VAR_2, VAR_5);
    VAR_5 = FUNC_1(VAR_6, VAR_7, -1, 0.0);
    FUNC_4(VAR_2, VAR_5);
    VAR_5 = FUNC_1(VAR_6, VAR_7, 1, 1.0);
    FUNC_4(VAR_2, VAR_5);


    VAR_5 = FUNC_1(VAR_6, VAR_7, 4, 1.0);
    FUNC_4(VAR_3, VAR_5);
    FUNC_5(VAR_6, VAR_4, FUNC_0(VAR_4), VAR_0);
    FUNC_3(VAR_6);
}
