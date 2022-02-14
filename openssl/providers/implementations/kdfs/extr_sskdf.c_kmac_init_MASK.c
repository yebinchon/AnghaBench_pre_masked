
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PARAM ;
typedef int EVP_MAC_CTX ;


 scalar_t__ FUNC_0 (int *,int *) ;
 size_t VAR_0 ;
 unsigned char* FUNC_1 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,void*,size_t) ;
 int FUNC_4 (int ,size_t*) ;

__attribute__((used)) static int FUNC_5(EVP_MAC_CTX *VAR_3, const unsigned char *VAR_4,
                     size_t VAR_5, size_t VAR_6,
                     size_t VAR_7, unsigned char **VAR_8)
{
    OSSL_PARAM VAR_9[2];


    if (VAR_4 == ((void*)0))
        return 1;

    VAR_9[0] = FUNC_3(VAR_1,
                                                  (void *)VAR_4, VAR_5);
    VAR_9[1] = FUNC_2();

    if (!FUNC_0(VAR_3, VAR_9))
        return 0;


    if (VAR_6 == 0)
        VAR_6 = VAR_7;

    else if (!(VAR_6 == VAR_7
            || VAR_6 == 20
            || VAR_6 == 28
            || VAR_6 == 32
            || VAR_6 == 48
            || VAR_6 == 64))
        return 0;

    VAR_9[0] = FUNC_4(VAR_2,
                                            &VAR_6);

    if (FUNC_0(VAR_3, VAR_9) <= 0)
        return 0;





    if (VAR_6 > VAR_0) {
        *VAR_8 = FUNC_1(VAR_6);
        if (*VAR_8 == ((void*)0))
            return 0;
    }
    return 1;
}
