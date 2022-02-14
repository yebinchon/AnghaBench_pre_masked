
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double X; double Y; } ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpPath ;


 int VAR_0 ;
 int FUNC_0 (int *,double,double,double,double) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    GpStatus VAR_4;
    GpPath *VAR_5;
    GpPointF VAR_6;

    FUNC_1(VAR_0, &VAR_5);
    VAR_4 = FUNC_0(VAR_5, 5.0, 5.0, 100.0, 50.0);
    FUNC_4(VAR_2, VAR_4);


    VAR_4 = FUNC_3(((void*)0), &VAR_6);
    FUNC_4(VAR_1, VAR_4);
    VAR_4 = FUNC_3(VAR_5, ((void*)0));
    FUNC_4(VAR_1, VAR_4);
    VAR_4 = FUNC_3(((void*)0), ((void*)0));
    FUNC_4(VAR_1, VAR_4);

    VAR_4 = FUNC_3(VAR_5, &VAR_6);
    FUNC_4(VAR_2, VAR_4);
    FUNC_4(VAR_3, (VAR_6.X == 5.0) && (VAR_6.Y == 55.0));

    FUNC_2(VAR_5);
}
