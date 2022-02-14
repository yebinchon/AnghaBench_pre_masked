
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
typedef int ARGB ;


 int FUNC_0 (TYPE_1__ const*,int,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,float*,int) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int const*,float const*,int) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int const,int) ;
 int FUNC_6 (float const,float) ;

__attribute__((used)) static void FUNC_7(void)
{
    static const GpPointF VAR_5[] = {{0,0}, {3,0}, {0,4}};
    GpStatus VAR_6;
    GpPathGradient *VAR_7;
    INT VAR_8;
    int VAR_9;
    const REAL VAR_10[5] = {0.0f, 0.2f, 0.5f, 0.8f, 1.0f};
    const REAL VAR_11[2] = {0.0f, 1.0f};
    const ARGB VAR_12[5] = {0xff0000ff, 0xff00ff00, 0xff00ffff, 0xffff0000, 0xffffffff};
    REAL VAR_13[6] = {0.3f, 0.0f, 0.0f, 0.0f, 0.0f};
    ARGB VAR_14[6] = {0xdeadbeef, 0, 0, 0, 0};

    VAR_6 = FUNC_0(VAR_5+1, 2, VAR_4, &VAR_7);
    FUNC_5(VAR_2, VAR_6);

    VAR_6 = FUNC_3(((void*)0), &VAR_8);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_3(VAR_7, ((void*)0));
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_3(VAR_7, &VAR_8);
    FUNC_5(VAR_2, VAR_6);
    FUNC_5(0, VAR_8);

    VAR_6 = FUNC_2(((void*)0), VAR_14, VAR_13, 1);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_7, ((void*)0), VAR_13, 1);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_14, ((void*)0), 1);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_14, VAR_13, 0);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_14, VAR_13, -1);
    FUNC_5(VAR_3, VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_14, VAR_13, 1);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_14, VAR_13, 2);
    FUNC_5(VAR_0, VAR_6);

    VAR_6 = FUNC_4(((void*)0), VAR_12, VAR_10, 5);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_7, ((void*)0), VAR_10, 5);
    FUNC_5(VAR_1, VAR_6);

    if (0)
    {

        VAR_6 = FUNC_4(VAR_7, VAR_12, ((void*)0), 5);
        FUNC_5(VAR_1, VAR_6);
    }

    VAR_6 = FUNC_4(VAR_7, VAR_12, VAR_10, 0);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_7, VAR_12, VAR_10, -1);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_7, VAR_12, VAR_10, 1);
    FUNC_5(VAR_1, VAR_6);


    VAR_6 = FUNC_4(VAR_7, &VAR_12[1], &VAR_10[1], 4);
    FUNC_5(VAR_1, VAR_6);


    VAR_6 = FUNC_4(VAR_7, VAR_12, VAR_10, 4);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_7, VAR_12, VAR_10, 5);
    FUNC_5(VAR_2, VAR_6);

    VAR_6 = FUNC_3(VAR_7, &VAR_8);
    FUNC_5(VAR_2, VAR_6);
    FUNC_5(5, VAR_8);

    if (0)
    {




        VAR_14[0] = 0xdeadbeef;
        VAR_13[0] = 0.3;

        VAR_6 = FUNC_2(VAR_7, &VAR_14[1], &VAR_13[1], 4);
        FUNC_5(VAR_2, VAR_6);

        FUNC_5(0xdeadbeef, VAR_14[0]);
        FUNC_6(0.3, VAR_13[0]);

        for (VAR_9=1; VAR_9<5; VAR_9++)
        {
            FUNC_5(VAR_12[VAR_9], VAR_14[VAR_9]);
            FUNC_6(VAR_10[VAR_9], VAR_13[VAR_9]);
        }

        VAR_6 = FUNC_2(VAR_7, VAR_14, VAR_13, 6);
        FUNC_5(VAR_2, VAR_6);

        for (VAR_9=0; VAR_9<5; VAR_9++)
        {
            FUNC_5(VAR_12[VAR_9], VAR_14[VAR_9+1]);
            FUNC_6(VAR_10[VAR_9], VAR_13[VAR_9+1]);
        }
    }

    VAR_6 = FUNC_2(VAR_7, VAR_14, VAR_13, 5);
    FUNC_5(VAR_2, VAR_6);

    for (VAR_9=0; VAR_9<5; VAR_9++)
    {
        FUNC_5(VAR_12[VAR_9], VAR_14[VAR_9]);
        FUNC_6(VAR_10[VAR_9], VAR_13[VAR_9]);
    }

    VAR_6 = FUNC_2(VAR_7, VAR_14, VAR_13, 0);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_14, VAR_13, -1);
    FUNC_5(VAR_3, VAR_6);

    VAR_6 = FUNC_2(VAR_7, VAR_14, VAR_13, 1);
    FUNC_5(VAR_1, VAR_6);

    VAR_6 = FUNC_4(VAR_7, VAR_12, VAR_11, 2);
    FUNC_5(VAR_2, VAR_6);

    VAR_6 = FUNC_1((GpBrush*)VAR_7);
    FUNC_5(VAR_2, VAR_6);
}
