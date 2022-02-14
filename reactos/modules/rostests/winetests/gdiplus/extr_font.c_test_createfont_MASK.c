
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ Unit ;
typedef scalar_t__ UINT ;
typedef int REAL ;
typedef scalar_t__ GpStatus ;
typedef int GpFontFamily ;
typedef int GpFont ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int ,scalar_t__,int **) ;
 scalar_t__ FUNC_1 (int ,int *,int **) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int*) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int VAR_10 ;
 int FUNC_10 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(void)
{
    GpFontFamily* VAR_11 = ((void*)0), *VAR_12;
    GpFont* VAR_13 = ((void*)0);
    GpStatus VAR_14;
    Unit VAR_15;
    UINT VAR_16;
    REAL VAR_17;
    WCHAR VAR_18[VAR_3];

    VAR_14 = FUNC_1(VAR_10, ((void*)0), &VAR_11);
    FUNC_8 (VAR_0, VAR_14);
    VAR_14 = FUNC_2(VAR_13);
    FUNC_8 (VAR_2, VAR_14);
    VAR_14 = FUNC_1(VAR_5, ((void*)0), &VAR_11);
    FUNC_8 (VAR_4, VAR_14);
    VAR_14 = FUNC_0(VAR_11, 12, VAR_1, VAR_8, &VAR_13);
    FUNC_8 (VAR_4, VAR_14);
    VAR_14 = FUNC_7 (VAR_13, &VAR_15);
    FUNC_8 (VAR_4, VAR_14);
    FUNC_8 (VAR_8, VAR_15);

    VAR_14 = FUNC_4(VAR_13, &VAR_12);
    FUNC_8(VAR_4, VAR_14);
    VAR_14 = FUNC_5(VAR_12, VAR_18, 0);
    FUNC_8(VAR_4, VAR_14);
    FUNC_10 (FUNC_9(VAR_5, VAR_18) == 0, "Expected Tahoma, got %s\n",
            FUNC_11(VAR_18));
    VAR_14 = FUNC_3(VAR_12);
    FUNC_8(VAR_4, VAR_14);


    FUNC_6(VAR_13, &VAR_17);
    FUNC_10 (VAR_17 == 12, "Expected 12, got %f\n", VAR_17);
    FUNC_2(VAR_13);


    for (VAR_16 = VAR_9; VAR_16 <=VAR_7; VAR_16++)
    {
        if (VAR_16 == VAR_6) continue;
        VAR_14 = FUNC_0(VAR_11, 24, VAR_1, VAR_16, &VAR_13);
        FUNC_8(VAR_4, VAR_14);
        FUNC_6 (VAR_13, &VAR_17);
        FUNC_10 (VAR_17 == 24, "Expected 24, got %f (with unit: %d)\n", VAR_17, VAR_16);
        VAR_14 = FUNC_7 (VAR_13, &VAR_15);
        FUNC_10 (VAR_14 == VAR_4, "Failed to get font unit, %d.\n", VAR_14);
        FUNC_8 (VAR_16, VAR_15);
        FUNC_2(VAR_13);
    }

    FUNC_3(VAR_11);
}
