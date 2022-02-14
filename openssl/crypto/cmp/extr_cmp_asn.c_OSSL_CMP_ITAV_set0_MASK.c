
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * other; } ;
struct TYPE_5__ {TYPE_1__ infoValue; int * infoType; } ;
typedef TYPE_2__ OSSL_CMP_ITAV ;
typedef int ASN1_TYPE ;
typedef int ASN1_OBJECT ;



void FUNC_0(OSSL_CMP_ITAV *VAR_0, ASN1_OBJECT *VAR_1,
                        ASN1_TYPE *VAR_2)
{
    VAR_0->infoType = VAR_1;
    VAR_0->infoValue.other = VAR_2;
}
