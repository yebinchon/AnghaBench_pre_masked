
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; } ;
typedef float REAL ;
typedef int INT ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpPathGradient ;
typedef int GpBrush ;


 int FUNC_0 (TYPE_1__ const*,int,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,float*,float*,int) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,float const*,float const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (float const,float) ;

__attribute__((used)) static void FUNC_7(void)
{
    static const GpPointF VAR_4[] = {{0,0}, {3,0}, {0,4}};
    GpPathGradient *VAR_5;
    GpStatus VAR_6;
    INT VAR_7, VAR_8;
    const REAL VAR_9[5] = {0.0f, 0.1f, 0.5f, 0.9f, 1.0f};
    const REAL VAR_10[5] = {0.0f, 0.2f, 0.5f, 0.8f, 1.0f};
    REAL VAR_11[6] = {0.3f, 0.0f, 0.0f, 0.0f, 0.0f};
    REAL VAR_12[6] = {0.3f, 0.0f, 0.0f, 0.0f, 0.0f};

    VAR_6 = FUNC_0(VAR_4, 3, VAR_3, &VAR_5);
    FUNC_5(VAR_2, VAR_6);

    VAR_6 = FUNC_3(((void*)0), &VAR_7);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_3(VAR_5, ((void*)0));
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_3(VAR_5, &VAR_7);
    FUNC_5(VAR_2, VAR_6);
    FUNC_5(1, VAR_7);

    VAR_6 = FUNC_2(((void*)0), VAR_11, VAR_12, 1);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_5, ((void*)0), VAR_12, 1);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_5, VAR_11, ((void*)0), 1);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_5, VAR_11, VAR_12, 0);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_5, VAR_11, VAR_12, -1);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_5, VAR_11, VAR_12, 1);
    FUNC_5(VAR_2, VAR_6);

    VAR_6 = FUNC_2(VAR_5, VAR_11, VAR_12, 2);
    FUNC_5(VAR_2, VAR_6);

    VAR_6 = FUNC_4(((void*)0), VAR_9, VAR_10, 5);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_5, ((void*)0), VAR_10, 5);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_5, VAR_9, ((void*)0), 5);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_5, VAR_9, VAR_10, 0);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_5, VAR_9, VAR_10, -1);
    FUNC_5(VAR_1, VAR_6);


    VAR_6 = FUNC_4(VAR_5, &VAR_9[1], &VAR_10[1], 4);
    FUNC_5(VAR_1, VAR_6);


    VAR_6 = FUNC_4(VAR_5, VAR_9, VAR_10, 4);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_5, VAR_9, VAR_10, 5);
    FUNC_5(VAR_2, VAR_6);

    VAR_6 = FUNC_3(VAR_5, &VAR_7);
    FUNC_5(VAR_2, VAR_6);
    FUNC_5(5, VAR_7);

    VAR_6 = FUNC_2(VAR_5, VAR_11, VAR_12, 4);
    FUNC_5(VAR_0, VAR_6);

    VAR_6 = FUNC_2(VAR_5, VAR_11, VAR_12, 5);
    FUNC_5(VAR_2, VAR_6);

    for (VAR_8=0; VAR_8<5; VAR_8++)
    {
        FUNC_6(VAR_9[VAR_8], VAR_11[VAR_8]);
        FUNC_6(VAR_10[VAR_8], VAR_12[VAR_8]);
    }

    VAR_6 = FUNC_2(VAR_5, VAR_11, VAR_12, 6);
    FUNC_5(VAR_2, VAR_6);

    VAR_6 = FUNC_4(VAR_5, VAR_9, VAR_10, 1);
    FUNC_5(VAR_2, VAR_6);

    VAR_6 = FUNC_3(VAR_5, &VAR_7);
    FUNC_5(VAR_2, VAR_6);
    FUNC_5(1, VAR_7);

    VAR_6 = FUNC_2(VAR_5, VAR_11, VAR_12, 1);
    FUNC_5(VAR_2, VAR_6);

    VAR_6 = FUNC_1((GpBrush*)VAR_5);
    FUNC_5(VAR_2, VAR_6);
}
