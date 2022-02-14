
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ trailerField; scalar_t__ saltLength; int maskHash; int hashAlgorithm; } ;
typedef TYPE_1__ RSA_PSS_PARAMS ;
typedef int EVP_MD ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ) ;

int FUNC_3(const RSA_PSS_PARAMS *VAR_3, const EVP_MD **VAR_4,
                      const EVP_MD **VAR_5, int *VAR_6)
{
    if (VAR_3 == ((void*)0))
        return 0;
    *VAR_4 = FUNC_2(VAR_3->hashAlgorithm);
    if (*VAR_4 == ((void*)0))
        return 0;
    *VAR_5 = FUNC_2(VAR_3->maskHash);
    if (*VAR_5 == ((void*)0))
        return 0;
    if (VAR_3->saltLength) {
        *VAR_6 = FUNC_0(VAR_3->saltLength);
        if (*VAR_6 < 0) {
            FUNC_1(VAR_0, VAR_1);
            return 0;
        }
    } else {
        *VAR_6 = 20;
    }





    if (VAR_3->trailerField && FUNC_0(VAR_3->trailerField) != 1) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    return 1;
}
