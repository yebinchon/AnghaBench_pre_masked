
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int const*,int) ;
 int FUNC_3 (int const*,int const*,int *,int *,int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void)
{
    int VAR_0;
    EVP_CIPHER_CTX *VAR_1 = ((void*)0);
    const EVP_CIPHER *VAR_2;

    VAR_0 = FUNC_6(VAR_2 = FUNC_4())
          && FUNC_6(VAR_1 = FUNC_1())
          && FUNC_7(FUNC_3(VAR_1, VAR_2, ((void*)0), ((void*)0), ((void*)0)))
          && FUNC_5(FUNC_2(VAR_1, 2));
    FUNC_0(VAR_1);
    return VAR_0;
}
