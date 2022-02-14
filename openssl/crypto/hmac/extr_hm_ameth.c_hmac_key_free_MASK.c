
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ data; } ;
typedef int EVP_PKEY ;
typedef TYPE_1__ ASN1_OCTET_STRING ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(EVP_PKEY *VAR_0)
{
    ASN1_OCTET_STRING *VAR_1 = FUNC_1(VAR_0);
    if (VAR_1) {
        if (VAR_1->data)
            FUNC_2(VAR_1->data, VAR_1->length);
        FUNC_0(VAR_1);
    }
}
