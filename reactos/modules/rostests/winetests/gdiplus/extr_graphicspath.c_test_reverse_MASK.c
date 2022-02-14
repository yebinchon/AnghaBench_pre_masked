
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int X; double Y; } ;
typedef int REAL ;
typedef int INT ;
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
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(void)
{
    GpStatus VAR_5;
    GpPath *VAR_6;
    GpPointF VAR_7[7];
    INT VAR_8;

    for(VAR_8 = 0; VAR_8 < 7; VAR_8++){
        VAR_7[VAR_8].X = VAR_8 * 5.0 * (REAL)(VAR_8 % 2);
        VAR_7[VAR_8].Y = 50.0 - VAR_8 * 5.0;
    }

    FUNC_3(VAR_1, &VAR_6);


    VAR_5 = FUNC_5(((void*)0));
    FUNC_6(VAR_2, VAR_5);


    VAR_5 = FUNC_5(VAR_6);
    FUNC_6(VAR_3, VAR_5);

    FUNC_1(VAR_6, VAR_7, 4);
    FUNC_2(VAR_6);
    FUNC_1(VAR_6, &(VAR_7[4]), 3);

    VAR_5 = FUNC_5(VAR_6);
    FUNC_6(VAR_3, VAR_5);
    FUNC_7(VAR_6, VAR_4, FUNC_0(VAR_4), VAR_0);

    FUNC_4(VAR_6);
}
