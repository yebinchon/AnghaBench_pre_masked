
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 int * FUNC_2 (int *,char const*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
    const char *VAR_1 = "p_test_builtin";
    OSSL_PROVIDER *VAR_2 = ((void*)0);

    return
        FUNC_0(VAR_2 =
                 FUNC_2(((void*)0), VAR_1, VAR_0, 0))
        && FUNC_3(VAR_2, FUNC_1(VAR_1));
}
