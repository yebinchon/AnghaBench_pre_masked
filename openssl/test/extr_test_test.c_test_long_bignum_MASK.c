
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
    int VAR_0;
    BIGNUM *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    const char VAR_5[] = "1234567890123456789012345678901234567890123456789012"
                      "1234567890123456789012345678901234567890123456789012"
                      "1234567890123456789012345678901234567890123456789012"
                      "1234567890123456789012345678901234567890123456789012"
                      "1234567890123456789012345678901234567890123456789012"
                      "1234567890123456789012345678901234567890123456789012"
                      "FFFFFF";
    const char VAR_6[] = "1234567890123456789012345678901234567890123456789012"
                      "1234567890123456789012345678901234567890123456789013"
                      "987657";
    const char VAR_7[] = "-"
                      "123456789012345678901234567890"
                      "123456789012345678901234567890"
                      "ABCD";
    const char VAR_8[] = "-"
                      "23456789A123456789B123456789C"
                      "123456789D123456789E123456789F"
                      "ABCD";

    VAR_0 = FUNC_5(FUNC_1(&VAR_1, VAR_5))
        && FUNC_5(FUNC_1(&VAR_2, VAR_6))
        && FUNC_5(FUNC_1(&VAR_3, VAR_7))
        && FUNC_5(FUNC_1(&VAR_4, VAR_8))
        && (FUNC_2(0, FUNC_3(VAR_1, VAR_2))
            & FUNC_2(0, FUNC_3(VAR_2, VAR_1))
            & FUNC_2(0, FUNC_3(VAR_2, ((void*)0)))
            & FUNC_2(0, FUNC_3(((void*)0), VAR_1))
            & FUNC_2(1, FUNC_4(VAR_1, ((void*)0)))
            & FUNC_2(0, FUNC_3(VAR_3, VAR_4)));
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    return VAR_0;
}
