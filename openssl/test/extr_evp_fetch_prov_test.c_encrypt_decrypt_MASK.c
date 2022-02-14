
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,unsigned char*,int*) ;
 int FUNC_3 (int *,int const*,int *,unsigned char*,int *,int) ;
 int FUNC_4 (int *,unsigned char*,int*,unsigned char const*,int) ;
 int FUNC_5 (unsigned char*,int,unsigned char const*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_9(const EVP_CIPHER *VAR_0, const unsigned char *VAR_1,
                           size_t VAR_2)
{
    int VAR_3 = 0, VAR_4, VAR_5;
    EVP_CIPHER_CTX *VAR_6 = ((void*)0);
    unsigned char VAR_7[128 / 8];
    unsigned char VAR_8[64], VAR_9[64];

    FUNC_8(VAR_7, 0, sizeof(VAR_7));
    if (!FUNC_6(VAR_6 = FUNC_1())
            || !FUNC_7(FUNC_3(VAR_6, VAR_0, ((void*)0), VAR_7, ((void*)0), 1))
            || !FUNC_7(FUNC_4(VAR_6, VAR_8, &VAR_4, VAR_1, VAR_2))
            || !FUNC_7(FUNC_2(VAR_6, VAR_8, &VAR_4))
            || !FUNC_7(FUNC_3(VAR_6, VAR_0, ((void*)0), VAR_7, ((void*)0), 0))
            || !FUNC_7(FUNC_4(VAR_6, VAR_9, &VAR_5, VAR_8, VAR_4))
            || !FUNC_7(FUNC_2(VAR_6, VAR_9, &VAR_5))
            || !FUNC_5(VAR_9, VAR_5, VAR_1, VAR_2))
        goto err;

    VAR_3 = 1;
err:
    FUNC_0(VAR_6);
    return VAR_3;
}
