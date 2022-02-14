
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ X; scalar_t__ Y; } ;
typedef scalar_t__ REAL ;
typedef size_t INT ;
typedef TYPE_1__ GpPointF ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(GpPointF * VAR_1, REAL VAR_2, BOOL VAR_3)
{
    GpPointF VAR_4[4];
    REAL VAR_5 = 0.00, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10 = -1.0;
    INT VAR_11, VAR_12 = 0, VAR_13 = 1, VAR_14 = 2, VAR_15 = 3;

    if(VAR_3){
        VAR_12 = 3;
        VAR_13 = 2;
        VAR_14 = 1;
        VAR_15 = 0;
    }

    VAR_8 = VAR_1[VAR_15].X;
    VAR_9 = VAR_1[VAR_15].Y;
    FUNC_0(VAR_4, VAR_1, sizeof(GpPointF) * 4);

    for(VAR_11 = 0; (VAR_11 < VAR_0) && (VAR_10 < VAR_2); VAR_11++){

        FUNC_0(VAR_1, VAR_4, sizeof(GpPointF) * 4);

        FUNC_1(VAR_1[VAR_14].X, VAR_1[VAR_14].Y, &VAR_1[VAR_15].X, &VAR_1[VAR_15].Y, VAR_5);
        FUNC_1(VAR_1[VAR_13].X, VAR_1[VAR_13].Y, &VAR_1[VAR_14].X, &VAR_1[VAR_14].Y, VAR_5);
        FUNC_1(VAR_1[VAR_14].X, VAR_1[VAR_14].Y, &VAR_1[VAR_15].X, &VAR_1[VAR_15].Y, VAR_5);
        FUNC_1(VAR_1[VAR_12].X, VAR_1[VAR_12].Y, &VAR_1[VAR_13].X, &VAR_1[VAR_13].Y, VAR_5);
        FUNC_1(VAR_1[VAR_13].X, VAR_1[VAR_13].Y, &VAR_1[VAR_14].X, &VAR_1[VAR_14].Y, VAR_5);
        FUNC_1(VAR_1[VAR_14].X, VAR_1[VAR_14].Y, &VAR_1[VAR_15].X, &VAR_1[VAR_15].Y, VAR_5);

        VAR_6 = VAR_1[VAR_15].X - VAR_8;
        VAR_7 = VAR_1[VAR_15].Y - VAR_9;

        VAR_10 = FUNC_2(VAR_6 * VAR_6 + VAR_7 * VAR_7);
        VAR_5 += 0.0005 * VAR_2;
    }
}
