
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OSSL_PROPERTY_IDX ;
typedef int OSSL_METHOD_STORE ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (int *,char*,int) ;

__attribute__((used)) static int FUNC_7(void)
{
    OSSL_METHOD_STORE *VAR_0;
    int VAR_1 = 0;
    OSSL_PROPERTY_IDX VAR_2, VAR_3;

    if (FUNC_2(VAR_0 = FUNC_4(((void*)0)))
        && FUNC_0(FUNC_5(((void*)0), "fnord", 0), 0)
        && FUNC_1(FUNC_5(((void*)0), "fnord", 1), 0)
        && FUNC_1(FUNC_5(((void*)0), "name", 1), 0)

        && FUNC_0(FUNC_6(((void*)0), "fnord", 0), 0)
        && FUNC_1(VAR_2 = FUNC_6(((void*)0), "no", 0), 0)
        && FUNC_1(VAR_3 = FUNC_6(((void*)0), "yes", 0), 0)
        && FUNC_1(VAR_2, VAR_3)
        && FUNC_0(FUNC_6(((void*)0), "yes", 1), VAR_3)
        && FUNC_0(FUNC_6(((void*)0), "no", 1), VAR_2)
        && FUNC_1(VAR_2 = FUNC_6(((void*)0), "illuminati", 1), 0)
        && FUNC_0(VAR_3 = FUNC_6(((void*)0), "fnord", 1), VAR_2 + 1)
        && FUNC_0(FUNC_6(((void*)0), "fnord", 1), VAR_3)

        && FUNC_0(FUNC_6(((void*)0), "cold", 0), 0)
        && FUNC_1(FUNC_5(((void*)0), "fnord", 0),
                       FUNC_6(((void*)0), "fnord", 0)))
        VAR_1 = 1;
    FUNC_3(VAR_0);
    return VAR_1;
}
