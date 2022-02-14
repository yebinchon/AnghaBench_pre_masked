
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int X; double Y; } ;
typedef int REAL ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpPath ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int **) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(void)
{
    GpStatus VAR_4;
    GpPath* VAR_5;
    int VAR_6;
    GpPointF VAR_7[9];

    for(VAR_6 = 0; VAR_6 < 9; VAR_6 ++){
        VAR_7[VAR_6].X = VAR_6 * 5.0 * (REAL)(VAR_6 % 2);
        VAR_7[VAR_6].Y = 50.0 - VAR_6 * 5.0;
    }

    FUNC_3(VAR_1, &VAR_5);
    VAR_4 = FUNC_1(VAR_5, VAR_7, 3);
    FUNC_5(VAR_2, VAR_4);
    VAR_4 = FUNC_1(VAR_5, &(VAR_7[3]), 3);
    FUNC_5(VAR_2, VAR_4);
    VAR_4 = FUNC_2(VAR_5);
    FUNC_5(VAR_2, VAR_4);
    VAR_4 = FUNC_1(VAR_5, &(VAR_7[6]), 3);
    FUNC_5(VAR_2, VAR_4);

    FUNC_6(VAR_5, VAR_3, FUNC_0(VAR_3), VAR_0);

    FUNC_4(VAR_5);
}
