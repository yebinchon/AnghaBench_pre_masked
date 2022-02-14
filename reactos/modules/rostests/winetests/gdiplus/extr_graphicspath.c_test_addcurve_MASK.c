
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double X; double Y; } ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpPath ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int,double) ;
 int FUNC_2 (int *,TYPE_1__*,int,int,int,double) ;
 int FUNC_3 (int *,double,double,double,double) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
    GpStatus VAR_7;
    GpPath *VAR_8;
    GpPointF VAR_9[4];

    VAR_9[0].X = 0.0;
    VAR_9[0].Y = 0.0;
    VAR_9[1].X = 10.0;
    VAR_9[1].Y = 10.0;
    VAR_9[2].X = 10.0;
    VAR_9[2].Y = 20.0;
    VAR_9[3].X = 30.0;
    VAR_9[3].Y = 10.0;

    FUNC_4(VAR_1, &VAR_8);


    VAR_7 = FUNC_1(((void*)0), ((void*)0), 0, 0.0);
    FUNC_7(VAR_2, VAR_7);
    VAR_7 = FUNC_1(VAR_8, ((void*)0), 0, 0.0);
    FUNC_7(VAR_2, VAR_7);
    VAR_7 = FUNC_1(VAR_8, VAR_9, -1, 0.0);
    FUNC_7(VAR_2, VAR_7);
    VAR_7 = FUNC_1(VAR_8, VAR_9, 1, 1.0);
    FUNC_7(VAR_2, VAR_7);


    VAR_7 = FUNC_1(VAR_8, VAR_9, 4, 1.0);
    FUNC_7(VAR_3, VAR_7);
    FUNC_8(VAR_8, VAR_4, FUNC_0(VAR_4), VAR_0);
    FUNC_5(VAR_8);


    FUNC_4(VAR_1, &VAR_8);
    FUNC_3(VAR_8, 100.0, 120.0, 123.0, 10.0);
    VAR_7 = FUNC_1(VAR_8, VAR_9, 4, 1.0);
    FUNC_7(VAR_3, VAR_7);
    FUNC_8(VAR_8, VAR_5, FUNC_0(VAR_5), VAR_0);


    FUNC_6(VAR_8);
    VAR_7 = FUNC_2(((void*)0), ((void*)0), 0, 0, 0, 0.0);
    FUNC_7(VAR_2, VAR_7);
    VAR_7 = FUNC_2(VAR_8, ((void*)0), 0, 0, 0, 0.0);
    FUNC_7(VAR_2, VAR_7);

    VAR_7 = FUNC_2(VAR_8, VAR_9, 0, 0, 0, 0.0);
    FUNC_7(VAR_2, VAR_7);
    VAR_7 = FUNC_2(VAR_8, VAR_9, 4, 0, 0, 0.0);
    FUNC_7(VAR_2, VAR_7);
    VAR_7 = FUNC_2(VAR_8, VAR_9, 4, 0, 4, 0.0);
    FUNC_7(VAR_2, VAR_7);
    VAR_7 = FUNC_2(VAR_8, VAR_9, 4, 1, 3, 0.0);
    FUNC_7(VAR_2, VAR_7);
    VAR_7 = FUNC_2(VAR_8, VAR_9, 4, 1, 0, 0.0);
    FUNC_7(VAR_2, VAR_7);
    VAR_7 = FUNC_2(VAR_8, VAR_9, 4, 3, 1, 0.0);
    FUNC_7(VAR_2, VAR_7);


    VAR_7 = FUNC_2(VAR_8, VAR_9, 4, 0, 3, 1.0);
    FUNC_7(VAR_3, VAR_7);
    FUNC_8(VAR_8, VAR_4, FUNC_0(VAR_4), VAR_0);
    FUNC_6(VAR_8);

    VAR_7 = FUNC_2(VAR_8, VAR_9, 4, 1, 2, 1.0);
    FUNC_7(VAR_3, VAR_7);
    FUNC_8(VAR_8, VAR_6, FUNC_0(VAR_6), VAR_0);

    FUNC_5(VAR_8);
}
