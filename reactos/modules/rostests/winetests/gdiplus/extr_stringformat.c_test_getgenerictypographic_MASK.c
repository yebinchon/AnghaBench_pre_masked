
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
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    GpStringFormat *VAR_11, *VAR_12;
    GpStatus VAR_13;
    INT VAR_14;
    INT VAR_15;
    StringAlignment VAR_16, VAR_17;
    StringTrimming VAR_18;
    StringDigitSubstitute VAR_19;
    LANGID VAR_20;
    INT VAR_21;


    VAR_13 = FUNC_9(((void*)0));
    FUNC_10(VAR_1, VAR_13);

    VAR_13 = FUNC_9(&VAR_11);
    FUNC_10(VAR_3, VAR_13);

    VAR_13 = FUNC_9(&VAR_12);
    FUNC_10(VAR_3, VAR_13);
    FUNC_11(VAR_11 == VAR_12, "expected same format object\n");
    VAR_13 = FUNC_0(VAR_12);
    FUNC_10(VAR_3, VAR_13);

    FUNC_3(VAR_11, &VAR_14);
    FUNC_1(VAR_11, &VAR_16);
    FUNC_5(VAR_11, &VAR_17);
    FUNC_4(VAR_11, &VAR_15);
    FUNC_7(VAR_11, &VAR_18);
    FUNC_2(VAR_11, &VAR_20, &VAR_19);
    FUNC_6(VAR_11, &VAR_21);

    FUNC_10((VAR_8 |VAR_6 | VAR_7),
            VAR_14);
    FUNC_10(VAR_0, VAR_15);
    FUNC_10(VAR_4, VAR_16);
    FUNC_10(VAR_4, VAR_17);
    FUNC_10(VAR_10, VAR_18);
    FUNC_10(VAR_5, VAR_19);
    FUNC_10(VAR_2, VAR_20);
    FUNC_10(0, VAR_21);


    VAR_13 = FUNC_8(VAR_11, VAR_9);
    FUNC_10(VAR_3, VAR_13);

    VAR_13 = FUNC_3(VAR_11, &VAR_14);
    FUNC_10(VAR_3, VAR_13);
    FUNC_10(VAR_9, VAR_14);

    VAR_13 = FUNC_0(VAR_11);
    FUNC_10(VAR_3, VAR_13);

    VAR_13 = FUNC_9(&VAR_11);
    FUNC_10(VAR_3, VAR_13);

    VAR_13 = FUNC_3(VAR_11, &VAR_14);
    FUNC_10(VAR_3, VAR_13);
    FUNC_10(VAR_9, VAR_14);

    VAR_13 = FUNC_0(VAR_11);
    FUNC_10(VAR_3, VAR_13);
}
