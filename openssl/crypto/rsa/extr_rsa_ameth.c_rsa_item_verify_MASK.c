
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;
typedef int ASN1_ITEM ;
typedef int ASN1_BIT_STRING ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_3(EVP_MD_CTX *VAR_3, const ASN1_ITEM *VAR_4, void *VAR_5,
                           X509_ALGOR *VAR_6, ASN1_BIT_STRING *VAR_7,
                           EVP_PKEY *VAR_8)
{

    if (FUNC_0(VAR_6->algorithm) != VAR_0) {
        FUNC_1(VAR_1, VAR_2);
        return -1;
    }
    if (FUNC_2(VAR_3, ((void*)0), VAR_6, VAR_8) > 0) {

        return 2;
    }
    return -1;
}
