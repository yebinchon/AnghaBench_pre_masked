
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int const*,int *,unsigned char const*,int *) ;

__attribute__((used)) static int FUNC_4(EVP_CIPHER_CTX *VAR_0,
                       const EVP_CIPHER *VAR_1, ENGINE *VAR_2,
                       const unsigned char *VAR_3, size_t VAR_4)
{
    int VAR_5, VAR_6;

    VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0));
    if (!VAR_6)
        goto out;

    VAR_5 = FUNC_0(VAR_0);
    if (VAR_4 != (size_t)VAR_5) {
        VAR_6 = FUNC_1(VAR_0, VAR_4);
        if (!VAR_6)
            goto out;
    }



    VAR_6 = FUNC_2(VAR_0, 0);
    if (!VAR_6)
        goto out;

out:
    return VAR_6;
}
