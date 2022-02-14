
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* sequence; } ;
struct TYPE_7__ {TYPE_2__ value; } ;
struct TYPE_5__ {unsigned char* data; int length; } ;
typedef int PKCS7_SIGNER_INFO ;
typedef int ESS_SIGNING_CERT ;
typedef TYPE_3__ ASN1_TYPE ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,unsigned char const**,int ) ;

ESS_SIGNING_CERT *FUNC_2(PKCS7_SIGNER_INFO *VAR_1)
{
    ASN1_TYPE *VAR_2;
    const unsigned char *VAR_3;
    VAR_2 = FUNC_0(VAR_1, VAR_0);
    if (!VAR_2)
        return ((void*)0);
    VAR_3 = VAR_2->value.sequence->data;
    return FUNC_1(((void*)0), &VAR_3, VAR_2->value.sequence->length);
}
