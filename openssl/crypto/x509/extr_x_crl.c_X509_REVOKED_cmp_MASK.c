
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int serialNumber; } ;
typedef TYPE_1__ X509_REVOKED ;
typedef int ASN1_STRING ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const X509_REVOKED *const *VAR_0,
                            const X509_REVOKED *const *VAR_1)
{
    return (FUNC_0((ASN1_STRING *)&(*VAR_0)->serialNumber,
                            (ASN1_STRING *)&(*VAR_1)->serialNumber));
}
