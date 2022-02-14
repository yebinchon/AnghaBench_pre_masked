
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int data; } ;
typedef TYPE_1__ ASN1_OCTET_STRING ;


 int FUNC_0 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, unsigned char **VAR_1)
{
    const ASN1_OCTET_STRING *VAR_2 = VAR_0;
    if (VAR_1) {
        FUNC_0(*VAR_1, VAR_2->data, VAR_2->length);
        *VAR_1 += VAR_2->length;
    }
    return VAR_2->length;
}
