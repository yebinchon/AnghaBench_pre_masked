
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int dom ;
typedef int c448_error_t ;
typedef int OPENSSL_CTX ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,...) ;
 int * FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *) ;
 size_t VAR_2 ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static c448_error_t FUNC_5(OPENSSL_CTX *VAR_3, EVP_MD_CTX *VAR_4,
                                       uint8_t VAR_5,
                                       uint8_t VAR_6,
                                       const uint8_t *VAR_7,
                                       size_t VAR_8)
{
    const char *VAR_9 = "SigEd448";
    uint8_t VAR_10[2];
    EVP_MD *VAR_11 = ((void*)0);

    if (VAR_8 > VAR_2)
        return VAR_0;

    VAR_10[0] = (uint8_t)(2 - (VAR_5 == 0 ? 1 : 0)
                       - (VAR_6 == 0 ? 1 : 0));
    VAR_10[1] = (uint8_t)VAR_8;

    VAR_11 = FUNC_2(VAR_3, "SHAKE256", ((void*)0));
    if (VAR_11 == ((void*)0))
        return VAR_0;

    if (!FUNC_0(VAR_4, VAR_11, ((void*)0))
            || !FUNC_1(VAR_4, VAR_9, FUNC_4(VAR_9))
            || !FUNC_1(VAR_4, VAR_10, sizeof(VAR_10))
            || !FUNC_1(VAR_4, VAR_7, VAR_8)) {
        FUNC_3(VAR_11);
        return VAR_0;
    }

    FUNC_3(VAR_11);
    return VAR_1;
}
