
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double X; double Y; } ;
typedef float REAL ;
typedef int INT ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpLineGradient ;
typedef int GpBrush ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ,int ,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,float*,float*,int) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,double,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (double,float) ;

__attribute__((used)) static void FUNC_7(void)
{
    GpLineGradient *VAR_3;
    GpStatus VAR_4;
    GpPointF VAR_5, VAR_6;
    INT VAR_7=10;
    REAL VAR_8[3] = {0.3f};
    REAL VAR_9[3] = {0.3f};

    VAR_4 = FUNC_4(((void*)0), 0.6, 0.8);
    FUNC_5(VAR_0, VAR_4);

    VAR_5 = VAR_5 = 1.0;
    VAR_6 = VAR_6 = 100.0;
    VAR_4 = FUNC_0(&VAR_5, &VAR_6, 0, 0, VAR_2, &VAR_3);
    FUNC_5(VAR_1, VAR_4);


    VAR_4 = FUNC_4(VAR_3, 0.6, 0.8);
    FUNC_5(VAR_1, VAR_4);

    VAR_4 = FUNC_3(VAR_3, &VAR_7);
    FUNC_5(VAR_1, VAR_4);
    FUNC_5(3, VAR_7);

    VAR_4 = FUNC_2(VAR_3, VAR_8, VAR_9, 3);
    FUNC_5(VAR_1, VAR_4);
    FUNC_6(0.0, VAR_8[0]);
    FUNC_6(0.0, VAR_9[0]);
    FUNC_6(0.8, VAR_8[1]);
    FUNC_6(0.6, VAR_9[1]);
    FUNC_6(0.0, VAR_8[2]);
    FUNC_6(1.0, VAR_9[2]);


    VAR_4 = FUNC_4(VAR_3, 0.0, 0.8);
    FUNC_5(VAR_1, VAR_4);

    VAR_4 = FUNC_3(VAR_3, &VAR_7);
    FUNC_5(VAR_1, VAR_4);
    FUNC_5(2, VAR_7);

    VAR_4 = FUNC_2(VAR_3, VAR_8, VAR_9, 3);
    FUNC_5(VAR_1, VAR_4);
    FUNC_6(0.8, VAR_8[0]);
    FUNC_6(0.0, VAR_9[0]);
    FUNC_6(0.0, VAR_8[1]);
    FUNC_6(1.0, VAR_9[1]);


    VAR_4 = FUNC_4(VAR_3, 1.0, 0.8);
    FUNC_5(VAR_1, VAR_4);

    VAR_4 = FUNC_3(VAR_3, &VAR_7);
    FUNC_5(VAR_1, VAR_4);
    FUNC_5(2, VAR_7);

    VAR_4 = FUNC_2(VAR_3, VAR_8, VAR_9, 3);
    FUNC_5(VAR_1, VAR_4);
    FUNC_6(0.0, VAR_8[0]);
    FUNC_6(0.0, VAR_9[0]);
    FUNC_6(0.8, VAR_8[1]);
    FUNC_6(1.0, VAR_9[1]);

    VAR_4 = FUNC_1((GpBrush*)VAR_3);
    FUNC_5(VAR_1, VAR_4);
}
