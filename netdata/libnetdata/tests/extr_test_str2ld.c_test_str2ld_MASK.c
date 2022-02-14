
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG_DOUBLE ;


 double FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,char**) ;
 scalar_t__ FUNC_7 (char*,char**) ;

__attribute__((used)) static void FUNC_8(void **VAR_0)
{
    (void)VAR_0;
    char *VAR_1[] = {
        "1.2345678",
        "-35.6",
        "0.00123",
        "23842384234234.2",
        ".1",
        "1.2e-10",
        "hello",
        "1wrong",
        "nan",
        "inf",
        ((void*)0)
    };

    for (int VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
        char *VAR_3 = "hello", *VAR_4 = "world";
        LONG_DOUBLE VAR_5 = FUNC_6(VAR_1[VAR_2], &VAR_3);
        LONG_DOUBLE VAR_6 = FUNC_7(VAR_1[VAR_2], &VAR_4);

        if (FUNC_5(VAR_5))
            FUNC_3(FUNC_5(VAR_6));
        else if (FUNC_4(VAR_5))
            FUNC_3(FUNC_4(VAR_6));
        else if (VAR_5 != VAR_6)
            FUNC_1(FUNC_0(VAR_5 - VAR_6) > 0.000001);

        FUNC_2(VAR_3, VAR_4);
    }
}
