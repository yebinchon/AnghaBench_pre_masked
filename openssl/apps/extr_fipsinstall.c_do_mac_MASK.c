
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MAC_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char*,size_t*,size_t) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_5(EVP_MAC_CTX *VAR_1, unsigned char *VAR_2, BIO *VAR_3,
                  unsigned char *VAR_4, size_t *VAR_5)
{
    int VAR_6 = 0;
    int VAR_7;
    size_t VAR_8 = *VAR_5;

    if (!FUNC_2(VAR_1))
        goto err;
    if (FUNC_3(VAR_1) > VAR_8)
        goto end;
    while ((VAR_7 = FUNC_0(VAR_3, (char *)VAR_2, VAR_0)) != 0) {
        if (VAR_7 < 0 || !FUNC_4(VAR_1, VAR_2, VAR_7))
            goto err;
    }
end:
    if (!FUNC_1(VAR_1, VAR_4, VAR_5, VAR_8))
        goto err;
    VAR_6 = 1;
err:
    return VAR_6;
}
