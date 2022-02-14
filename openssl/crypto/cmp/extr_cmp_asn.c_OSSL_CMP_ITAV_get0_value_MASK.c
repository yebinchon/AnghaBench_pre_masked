
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * other; } ;
struct TYPE_5__ {TYPE_1__ infoValue; } ;
typedef TYPE_2__ OSSL_CMP_ITAV ;
typedef int ASN1_TYPE ;



ASN1_TYPE *FUNC_0(const OSSL_CMP_ITAV *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    return VAR_0->infoValue.other;
}
