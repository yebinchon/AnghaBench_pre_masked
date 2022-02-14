
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {double Width; } ;
typedef TYPE_1__ RectF ;
typedef double REAL ;
typedef int HDC ;
typedef int GpUnit ;
typedef int GpStringFormat ;
typedef int GpStatus ;
typedef int GpGraphics ;
typedef int GpFontFamily ;
typedef int GpFont ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,double,int ,int,int **) ;
 int FUNC_3 (char const*,int *,int **) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int ,int ,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,double*) ;
 int FUNC_11 (int *,double*) ;
 int FUNC_12 (int *,char const*,int,int *,TYPE_1__*,int *,TYPE_1__*,int *,int *) ;
 int FUNC_13 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (double,double,double) ;
 int FUNC_16 (TYPE_1__*) ;
 double FUNC_17 (double,int,double) ;

__attribute__((used)) static void FUNC_18(void)
{
    static const WCHAR VAR_3[] = { 'T','a','h','o','m','a',0 };
    static const WCHAR VAR_4[2] = { 'W','W' };
    GpStringFormat *VAR_5;
    HDC VAR_6;
    GpGraphics *VAR_7;
    GpFontFamily *VAR_8;
    GpFont *VAR_9;
    GpStatus VAR_10;
    GpUnit VAR_11, VAR_12;
    RectF VAR_13, VAR_14, VAR_15;
    REAL VAR_16, VAR_17, VAR_18;

    VAR_10 = FUNC_5(0, VAR_1, &VAR_5);
    FUNC_14(VAR_2, VAR_10);

    VAR_10 = FUNC_3(VAR_3, ((void*)0), &VAR_8);
    FUNC_14(VAR_2, VAR_10);
    VAR_6 = FUNC_0(0);
    VAR_10 = FUNC_4(VAR_6, &VAR_7);
    FUNC_14(VAR_2, VAR_10);

    VAR_10 = FUNC_10(VAR_7, &VAR_18);
    FUNC_14(VAR_2, VAR_10);



    for (VAR_12 = 3; VAR_12 <= 6; VAR_12++)
    {
        VAR_10 = FUNC_2(VAR_8, 1234.0, VAR_0, VAR_12, &VAR_9);
        FUNC_14(VAR_2, VAR_10);

        VAR_10 = FUNC_11(VAR_9, &VAR_17);
        FUNC_14(VAR_2, VAR_10);
        VAR_17 = FUNC_17(VAR_17, VAR_12, VAR_18);



        for (VAR_11 = 2; VAR_11 <= 6; VAR_11++)
        {
            VAR_10 = FUNC_13(VAR_7, VAR_11);
            FUNC_14(VAR_2, VAR_10);


            FUNC_16(&VAR_15);
            FUNC_16(&VAR_13);
            VAR_10 = FUNC_12(VAR_7, VAR_4, 1, VAR_9, &VAR_15, VAR_5, &VAR_13, ((void*)0), ((void*)0));
            FUNC_14(VAR_2, VAR_10);

            FUNC_16(&VAR_15);
            FUNC_16(&VAR_14);
            VAR_10 = FUNC_12(VAR_7, VAR_4, 2, VAR_9, &VAR_15, VAR_5, &VAR_14, ((void*)0), ((void*)0));
            FUNC_14(VAR_2, VAR_10);


            VAR_16 = FUNC_17(VAR_13 - VAR_14 / 2.0, VAR_11, VAR_18);

            FUNC_15(VAR_17 / 6.0, VAR_16, VAR_17 / 100.0);
        }

        FUNC_6(VAR_9);
    }

    FUNC_8(VAR_7);
    FUNC_1(VAR_6);
    FUNC_7(VAR_8);
    FUNC_9(VAR_5);
}
