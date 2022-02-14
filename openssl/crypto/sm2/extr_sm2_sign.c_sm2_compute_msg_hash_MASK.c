
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int EC_KEY ;
typedef int BIGNUM ;


 int * FUNC_0 (int const*,int const,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,int const*,int const) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int const* FUNC_8 (int const) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int const*,int const*,int const*,size_t const,int const*) ;

__attribute__((used)) static BIGNUM *FUNC_11(const EVP_MD *VAR_5,
                                    const EC_KEY *VAR_6,
                                    const uint8_t *VAR_7,
                                    const size_t VAR_8,
                                    const uint8_t *VAR_9, size_t VAR_10)
{
    EVP_MD_CTX *VAR_11 = FUNC_5();
    const int VAR_12 = FUNC_6(VAR_5);
    uint8_t *VAR_13 = ((void*)0);
    BIGNUM *VAR_14 = ((void*)0);

    if (VAR_12 < 0) {
        FUNC_9(VAR_3, VAR_4);
        goto done;
    }

    VAR_13 = FUNC_8(VAR_12);
    if (VAR_11 == ((void*)0) || VAR_13 == ((void*)0)) {
        FUNC_9(VAR_3, VAR_2);
        goto done;
    }

    if (!FUNC_10(VAR_13, VAR_5, VAR_7, VAR_8, VAR_6)) {

        goto done;
    }

    if (!FUNC_2(VAR_11, VAR_5)
            || !FUNC_3(VAR_11, VAR_13, VAR_12)
            || !FUNC_3(VAR_11, VAR_9, VAR_10)

            || !FUNC_1(VAR_11, VAR_13, ((void*)0))) {
        FUNC_9(VAR_3, VAR_0);
        goto done;
    }

    VAR_14 = FUNC_0(VAR_13, VAR_12, ((void*)0));
    if (VAR_14 == ((void*)0))
        FUNC_9(VAR_3, VAR_1);

 done:
    FUNC_7(VAR_13);
    FUNC_4(VAR_11);
    return VAR_14;
}
