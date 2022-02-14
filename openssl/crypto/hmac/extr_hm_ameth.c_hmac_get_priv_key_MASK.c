
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptr; } ;
struct TYPE_5__ {TYPE_1__ pkey; } ;
typedef TYPE_2__ EVP_PKEY ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,int ,size_t) ;

__attribute__((used)) static int FUNC_3(const EVP_PKEY *VAR_0, unsigned char *VAR_1,
                             size_t *VAR_2)
{
    ASN1_OCTET_STRING *VAR_3 = (ASN1_OCTET_STRING *)VAR_0->pkey.ptr;

    if (VAR_1 == ((void*)0)) {
        *VAR_2 = FUNC_1(VAR_3);
        return 1;
    }

    if (VAR_3 == ((void*)0) || *VAR_2 < (size_t)FUNC_1(VAR_3))
        return 0;

    *VAR_2 = FUNC_1(VAR_3);
    FUNC_2(VAR_1, FUNC_0(VAR_3), *VAR_2);

    return 1;
}
