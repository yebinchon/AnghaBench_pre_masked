
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,int ) ;
 scalar_t__ FUNC_2 (int *,char const*) ;

__attribute__((used)) static int FUNC_3(void)
{
    const char *VAR_0 = "p_test_configured";
    OSSL_PROVIDER *VAR_1 = ((void*)0);

    const char *VAR_2 =
        "Hello OpenSSL, greetings from Test Provider";

    return
        FUNC_0(VAR_1 = FUNC_1(((void*)0), VAR_0, 0))
        && FUNC_2(VAR_1, VAR_2);
}
