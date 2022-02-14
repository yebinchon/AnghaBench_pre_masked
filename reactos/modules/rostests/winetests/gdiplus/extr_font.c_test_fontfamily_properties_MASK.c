
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT16 ;
typedef scalar_t__ GpStatus ;
typedef int GpFontFamily ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int*) ;
 scalar_t__ FUNC_3 (int *,int ,int*) ;
 scalar_t__ FUNC_4 (int *,int ,int*) ;
 scalar_t__ FUNC_5 (int *,int ,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9 (void)
{
    GpFontFamily* VAR_5 = ((void*)0);
    GpStatus VAR_6;
    UINT16 VAR_7 = 0;

    VAR_6 = FUNC_0(VAR_3, ((void*)0), &VAR_5);
    FUNC_6(VAR_2, VAR_6);

    VAR_6 = FUNC_5(VAR_5, VAR_1, &VAR_7);
    FUNC_6(VAR_2, VAR_6);
    FUNC_7 (VAR_7 == 2472, "Expected 2472, got %d\n", VAR_7);
    VAR_7 = 0;
    VAR_6 = FUNC_4(VAR_5, VAR_1, &VAR_7);
    FUNC_6(VAR_2, VAR_6);
    FUNC_7(VAR_7 == 2048, "Expected 2048, got %d\n", VAR_7);
    VAR_7 = 0;
    VAR_6 = FUNC_2(VAR_5, VAR_1, &VAR_7);
    FUNC_6(VAR_2, VAR_6);
    FUNC_7(VAR_7 == 2049, "Expected 2049, got %d\n", VAR_7);
    VAR_7 = 0;
    VAR_6 = FUNC_3(VAR_5, VAR_1, &VAR_7);
    FUNC_6(VAR_2, VAR_6);
    FUNC_7(VAR_7 == 423, "Expected 423, got %d\n", VAR_7);
    FUNC_1(VAR_5);

    VAR_6 = FUNC_0(VAR_4, ((void*)0), &VAR_5);
    if(VAR_6 == VAR_0)
        FUNC_8("Times New Roman not installed\n");
    else
    {
        VAR_7 = 0;
        VAR_6 = FUNC_5(VAR_5, VAR_1, &VAR_7);
        FUNC_6(VAR_2, VAR_6);
        FUNC_7(VAR_7 == 2355, "Expected 2355, got %d\n", VAR_7);
        VAR_7 = 0;
        VAR_6 = FUNC_4(VAR_5, VAR_1, &VAR_7);
        FUNC_6(VAR_2, VAR_6);
        FUNC_7(VAR_7 == 2048, "Expected 2048, got %d\n", VAR_7);
        VAR_7 = 0;
        VAR_6 = FUNC_2(VAR_5, VAR_1, &VAR_7);
        FUNC_6(VAR_2, VAR_6);
        FUNC_7(VAR_7 == 1825, "Expected 1825, got %d\n", VAR_7);
        VAR_7 = 0;
        VAR_6 = FUNC_3(VAR_5, VAR_1, &VAR_7);
        FUNC_6(VAR_2, VAR_6);
        FUNC_7(VAR_7 == 443, "Expected 443 got %d\n", VAR_7);
        FUNC_1(VAR_5);
    }
}
