
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
struct TYPE_7__ {int (* sig_print ) (int *,TYPE_1__ const*,int const*,int,int ) ;} ;
typedef TYPE_2__ EVP_PKEY_ASN1_METHOD ;
typedef int BIO ;
typedef int ASN1_STRING ;


 scalar_t__ FUNC_0 (int *,char*,int,char*) ;
 int FUNC_1 (int *,char*,int) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int,int*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int const*,int) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,TYPE_1__ const*,int const*,int,int ) ;

int FUNC_8(BIO *VAR_1, const X509_ALGOR *VAR_2,
                         const ASN1_STRING *VAR_3)
{
    int VAR_4;
    int VAR_5 = 4;
    if (FUNC_0(VAR_1, "%*sSignature Algorithm: ", VAR_5, "") <= 0)
        return 0;
    if (FUNC_6(VAR_1, VAR_2->algorithm) <= 0)
        return 0;

    if (VAR_3 && FUNC_0(VAR_1, "\n%*sSignature Value:", VAR_5, "") <= 0)
        return 0;
    VAR_4 = FUNC_4(VAR_2->algorithm);
    if (VAR_4 != VAR_0) {
        int VAR_6, VAR_7;
        const EVP_PKEY_ASN1_METHOD *VAR_8;
        if (FUNC_3(VAR_4, &VAR_7, &VAR_6)) {
            VAR_8 = FUNC_2(((void*)0), VAR_6);
            if (VAR_8 && VAR_8->sig_print)
                return VAR_8->sig_print(VAR_1, VAR_2, VAR_3, VAR_5 + 4, 0);
        }
    }
    if (FUNC_1(VAR_1, "\n", 1) != 1)
        return 0;
    if (VAR_3)
        return FUNC_5(VAR_1, VAR_3, VAR_5 + 4);
    return 1;
}
