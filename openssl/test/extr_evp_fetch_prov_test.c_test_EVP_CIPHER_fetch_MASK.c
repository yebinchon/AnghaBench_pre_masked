
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int testmsg ;
typedef int OSSL_PROVIDER ;
typedef int OPENSSL_CTX ;
typedef int EVP_CIPHER ;


 int * FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned char const*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (int **,int **) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_11(void)
{
    OPENSSL_CTX *VAR_3 = ((void*)0);
    EVP_CIPHER *VAR_4 = ((void*)0);
    OSSL_PROVIDER *VAR_5[2] = {((void*)0), ((void*)0)};
    int VAR_6 = 0;
    const unsigned char VAR_7[] = "Hello world";

    if (VAR_2 == 0 && !FUNC_10(&VAR_3, VAR_5))
        goto err;


    if (!FUNC_8(FUNC_9(FUNC_3(), VAR_7, sizeof(VAR_7))))
        goto err;


    VAR_4 = FUNC_0(VAR_3, "AES-128-CBC", VAR_1);
    if (VAR_0 != 0) {
        if (!FUNC_6(VAR_4)
            || !FUNC_8(FUNC_9(VAR_4, VAR_7, sizeof(VAR_7)))) {
            if (!FUNC_8(FUNC_2(VAR_4)))
                goto err;

            FUNC_1(VAR_4);
        }
    } else {
        if (!FUNC_7(VAR_4))
            goto err;
    }
    VAR_6 = 1;
err:
    FUNC_1(VAR_4);
    FUNC_5(VAR_5[0]);
    FUNC_5(VAR_5[1]);
    FUNC_4(VAR_3);
    return VAR_6;
}
