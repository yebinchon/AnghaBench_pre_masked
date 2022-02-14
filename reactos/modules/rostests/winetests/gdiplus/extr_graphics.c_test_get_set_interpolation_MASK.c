
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int InterpolationMode ;
typedef int * HDC ;
typedef int GpStatus ;
typedef int GpGraphics ;


 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int * FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (scalar_t__,int ) ;
 int VAR_9 ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    GpGraphics *VAR_10;
    HDC VAR_11 = FUNC_4( VAR_9 );
    GpStatus VAR_12;
    InterpolationMode VAR_13;

    FUNC_7(VAR_11 != ((void*)0), "Expected HDC to be initialized\n");
    VAR_12 = FUNC_0(VAR_11, &VAR_10);
    FUNC_6(VAR_8, VAR_12);
    FUNC_7(VAR_10 != ((void*)0), "Expected graphics to be initialized\n");

    VAR_12 = FUNC_2(((void*)0), &VAR_13);
    FUNC_6(VAR_7, VAR_12);

    if (0)
    {

        VAR_12 = FUNC_2(VAR_10, ((void*)0));
        FUNC_6(VAR_7, VAR_12);
    }

    VAR_12 = FUNC_3(((void*)0), VAR_6);
    FUNC_6(VAR_7, VAR_12);


    VAR_12 = FUNC_3(VAR_10, VAR_3+1);
    FUNC_6(VAR_7, VAR_12);

    VAR_12 = FUNC_3(VAR_10, VAR_4);
    FUNC_6(VAR_7, VAR_12);

    VAR_12 = FUNC_2(VAR_10, &VAR_13);
    FUNC_6(VAR_8, VAR_12);
    FUNC_6(VAR_0, VAR_13);

    VAR_12 = FUNC_3(VAR_10, VAR_6);
    FUNC_6(VAR_8, VAR_12);

    VAR_12 = FUNC_2(VAR_10, &VAR_13);
    FUNC_6(VAR_8, VAR_12);
    FUNC_6(VAR_6, VAR_13);

    VAR_12 = FUNC_3(VAR_10, VAR_1);
    FUNC_6(VAR_8, VAR_12);

    VAR_12 = FUNC_2(VAR_10, &VAR_13);
    FUNC_6(VAR_8, VAR_12);
    FUNC_6(VAR_0, VAR_13);

    VAR_12 = FUNC_3(VAR_10, VAR_5);
    FUNC_6(VAR_8, VAR_12);

    VAR_12 = FUNC_2(VAR_10, &VAR_13);
    FUNC_6(VAR_8, VAR_12);
    FUNC_6(VAR_0, VAR_13);

    VAR_12 = FUNC_3(VAR_10, VAR_2);
    FUNC_6(VAR_8, VAR_12);

    VAR_12 = FUNC_2(VAR_10, &VAR_13);
    FUNC_6(VAR_8, VAR_12);
    FUNC_6(VAR_3, VAR_13);

    FUNC_1(VAR_10);

    FUNC_5(VAR_9, VAR_11);
}
