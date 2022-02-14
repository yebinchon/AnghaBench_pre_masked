
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_3__ {int length; int data; } ;
typedef TYPE_1__ ASN1_OCTET_STRING ;


 char* FUNC_0 (int ,int ) ;

char *FUNC_1(X509V3_EXT_METHOD *VAR_0,
                            const ASN1_OCTET_STRING *VAR_1)
{
    return FUNC_0(VAR_1->data, VAR_1->length);
}
