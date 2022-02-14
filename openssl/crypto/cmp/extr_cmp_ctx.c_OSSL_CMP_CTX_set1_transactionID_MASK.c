
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int transactionID; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;
typedef int ASN1_OCTET_STRING ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int const*) ;

int FUNC_2(OSSL_CMP_CTX *VAR_1,
                                    const ASN1_OCTET_STRING *VAR_2)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0(0, VAR_0);
        return 0;
    }
    return FUNC_1(&VAR_1->transactionID, VAR_2);
}
