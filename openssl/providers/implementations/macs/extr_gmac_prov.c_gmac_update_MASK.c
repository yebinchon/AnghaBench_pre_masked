
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmac_data_st {int * ctx; } ;
typedef int EVP_CIPHER_CTX ;


 int FUNC_0 (int *,int *,int*,unsigned char const*,size_t) ;
 size_t VAR_0 ;

__attribute__((used)) static int FUNC_1(void *VAR_1, const unsigned char *VAR_2,
                       size_t VAR_3)
{
    struct gmac_data_st *VAR_4 = VAR_1;
    EVP_CIPHER_CTX *VAR_5 = VAR_4->ctx;
    int VAR_6;

    while (VAR_3 > VAR_0) {
        if (!FUNC_0(VAR_5, ((void*)0), &VAR_6, VAR_2, VAR_0))
            return 0;
        VAR_2 += VAR_0;
        VAR_3 -= VAR_0;
    }
    return FUNC_0(VAR_5, ((void*)0), &VAR_6, VAR_2, VAR_3);
}
