
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROPERTY_LIST ;
typedef int OSSL_METHOD_STORE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*,int *) ;

__attribute__((used)) static int FUNC_10(void)
{
    OSSL_METHOD_STORE *VAR_0;
    OSSL_PROPERTY_LIST *VAR_1, *VAR_2;
    int VAR_3 = 0;

    if (FUNC_0(VAR_0 = FUNC_6(((void*)0)))
        && FUNC_4("red", "blue", ((void*)0))
        && FUNC_0(VAR_1 = FUNC_7(((void*)0), "red"))
        && FUNC_0(VAR_2 = FUNC_7(((void*)0), "blue"))
        && FUNC_2(VAR_1, VAR_2)
        && FUNC_3(FUNC_9(((void*)0), "red", VAR_1))
        && FUNC_3(FUNC_9(((void*)0), "blue", VAR_2))
        && FUNC_1(FUNC_8(((void*)0), "red"), VAR_1)
        && FUNC_1(FUNC_8(((void*)0), "blue"), VAR_2))
        VAR_3 = 1;
    FUNC_5(VAR_0);
    return VAR_3;
}
