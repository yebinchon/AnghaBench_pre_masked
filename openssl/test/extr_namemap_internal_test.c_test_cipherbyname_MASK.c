
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_NAMEMAP ;
typedef int EVP_CIPHER ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int const*) ;
 int FUNC_5 (int *,int,char*) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void)
{
    int VAR_0;
    OSSL_NAMEMAP *VAR_1 = FUNC_6(((void*)0));
    const EVP_CIPHER *VAR_2, *VAR_3;

    VAR_0 = FUNC_5(VAR_1, 0, "AES-128-CBC");
    if (!FUNC_2(VAR_0, 0))
        return 0;
    if (!FUNC_1(FUNC_5(VAR_1, VAR_0, "bar"), VAR_0))
        return 0;

    VAR_2 = FUNC_0("AES-128-CBC");
    if (!FUNC_3(VAR_2))
        return 0;
    VAR_3 = FUNC_0("bar");
    if (!FUNC_4(VAR_2, VAR_3))
        return 0;

    return 1;
}
