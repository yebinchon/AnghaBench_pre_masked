
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int GpStatus ;
typedef int GpImage ;
typedef int GpBitmap ;


 int FUNC_0 (int,int,int ,int ,int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int,int,int **,int *,int *) ;
 int FUNC_4 (int *,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    GpStatus VAR_3;
    GpImage *VAR_4, *VAR_5;
    UINT VAR_6, VAR_7;

    VAR_3 = FUNC_3(((void*)0), 0, 0, &VAR_5, ((void*)0), ((void*)0));
    FUNC_5(VAR_0, VAR_3);

    VAR_3 = FUNC_0(128, 128, 0, VAR_2, ((void*)0), (GpBitmap**)&VAR_4);
    FUNC_5(VAR_1, VAR_3);

    VAR_3 = FUNC_3(VAR_4, 0, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_5(VAR_0, VAR_3);

    VAR_3 = FUNC_3(VAR_4, 0, 0, &VAR_5, ((void*)0), ((void*)0));
    FUNC_5(VAR_1, VAR_3);

    if (VAR_3 == VAR_1)
    {
        VAR_3 = FUNC_4(VAR_5, &VAR_6);
        FUNC_5(VAR_1, VAR_3);
        FUNC_5(120, VAR_6);

        VAR_3 = FUNC_2(VAR_5, &VAR_7);
        FUNC_5(VAR_1, VAR_3);
        FUNC_5(120, VAR_7);

        FUNC_1(VAR_5);
    }

    FUNC_1(VAR_4);


    VAR_3 = FUNC_0(64, 128, 0, VAR_2, ((void*)0), (GpBitmap**)&VAR_4);
    FUNC_5(VAR_1, VAR_3);

    VAR_3 = FUNC_3(VAR_4, 32, 32, &VAR_5, ((void*)0), ((void*)0));
    FUNC_5(VAR_1, VAR_3);

    if (VAR_3 == VAR_1)
    {
        VAR_3 = FUNC_4(VAR_5, &VAR_6);
        FUNC_5(VAR_1, VAR_3);
        FUNC_5(32, VAR_6);

        VAR_3 = FUNC_2(VAR_5, &VAR_7);
        FUNC_5(VAR_1, VAR_3);
        FUNC_5(32, VAR_7);

        FUNC_1(VAR_5);
    }

    VAR_3 = FUNC_3(VAR_4, 0, 0, &VAR_5, ((void*)0), ((void*)0));
    FUNC_5(VAR_1, VAR_3);

    if (VAR_3 == VAR_1)
    {
        VAR_3 = FUNC_4(VAR_5, &VAR_6);
        FUNC_5(VAR_1, VAR_3);
        FUNC_5(120, VAR_6);

        VAR_3 = FUNC_2(VAR_5, &VAR_7);
        FUNC_5(VAR_1, VAR_3);
        FUNC_5(120, VAR_7);

        FUNC_1(VAR_5);
    }

    FUNC_1(VAR_4);
}
