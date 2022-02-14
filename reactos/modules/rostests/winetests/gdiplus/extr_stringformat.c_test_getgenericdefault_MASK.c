
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringTrimming ;
typedef int StringDigitSubstitute ;
typedef int StringAlignment ;
typedef int LANGID ;
typedef int INT ;
typedef int GpStringFormat ;
typedef int GpStatus ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    GpStringFormat *VAR_8, *VAR_9;
    GpStatus VAR_10;

    INT VAR_11;
    INT VAR_12;
    StringAlignment VAR_13, VAR_14;
    StringTrimming VAR_15;
    StringDigitSubstitute VAR_16;
    LANGID VAR_17;
    INT VAR_18;


    VAR_10 = FUNC_9(((void*)0));
    FUNC_10(VAR_1, VAR_10);

    VAR_10 = FUNC_9(&VAR_8);
    FUNC_10(VAR_3, VAR_10);

    VAR_10 = FUNC_9(&VAR_9);
    FUNC_10(VAR_3, VAR_10);
    FUNC_11(VAR_8 == VAR_9, "expected same format object\n");
    VAR_10 = FUNC_0(VAR_9);
    FUNC_10(VAR_3, VAR_10);

    FUNC_3(VAR_8, &VAR_11);
    FUNC_1(VAR_8, &VAR_13);
    FUNC_5(VAR_8, &VAR_14);
    FUNC_4(VAR_8, &VAR_12);
    FUNC_7(VAR_8, &VAR_15);
    FUNC_2(VAR_8, &VAR_17, &VAR_16);
    FUNC_6(VAR_8, &VAR_18);

    FUNC_10(0, VAR_11);
    FUNC_10(VAR_0, VAR_12);
    FUNC_10(VAR_4, VAR_13);
    FUNC_10(VAR_4, VAR_14);
    FUNC_10(VAR_7, VAR_15);
    FUNC_10(VAR_5, VAR_16);
    FUNC_10(VAR_2, VAR_17);
    FUNC_10(0, VAR_18);


    VAR_10 = FUNC_8(VAR_8, VAR_6);
    FUNC_10(VAR_3, VAR_10);

    VAR_10 = FUNC_3(VAR_8, &VAR_11);
    FUNC_10(VAR_3, VAR_10);
    FUNC_10(VAR_6, VAR_11);

    VAR_10 = FUNC_0(VAR_8);
    FUNC_10(VAR_3, VAR_10);

    VAR_10 = FUNC_9(&VAR_8);
    FUNC_10(VAR_3, VAR_10);

    VAR_10 = FUNC_3(VAR_8, &VAR_11);
    FUNC_10(VAR_3, VAR_10);
    FUNC_10(VAR_6, VAR_11);

    VAR_10 = FUNC_0(VAR_8);
    FUNC_10(VAR_3, VAR_10);
}
