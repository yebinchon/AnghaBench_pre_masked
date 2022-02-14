
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int X509_SIG_INFO ;
struct TYPE_4__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int RSA_PSS_PARAMS ;
typedef int EVP_MD ;
typedef int ASN1_STRING ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int,scalar_t__,int,scalar_t__) ;
 int * FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (int *,int const**,int const**,int*) ;

__attribute__((used)) static int FUNC_7(X509_SIG_INFO *VAR_5, const X509_ALGOR *VAR_6,
                            const ASN1_STRING *VAR_7)
{
    int VAR_8 = 0;
    int VAR_9, VAR_10;
    uint32_t VAR_11;
    const EVP_MD *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    RSA_PSS_PARAMS *VAR_14;


    if (FUNC_2(VAR_6->algorithm) != VAR_0)
        return 0;

    VAR_14 = FUNC_5(VAR_6);
    if (!FUNC_6(VAR_14, &VAR_13, &VAR_12, &VAR_10))
        goto err;
    VAR_9 = FUNC_1(VAR_13);




    if ((VAR_9 == VAR_1 || VAR_9 == VAR_2 || VAR_9 == VAR_3)
            && VAR_9 == FUNC_1(VAR_12) && VAR_10 == FUNC_0(VAR_13))
        VAR_11 = VAR_4;
    else
        VAR_11 = 0;

    FUNC_4(VAR_5, VAR_9, VAR_0, FUNC_0(VAR_13) * 4,
                      VAR_11);
    VAR_8 = 1;
    err:
    FUNC_3(VAR_14);
    return VAR_8;
}
