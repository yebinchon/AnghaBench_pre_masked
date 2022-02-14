
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * subjectUID; int * issuerUID; } ;
struct TYPE_5__ {TYPE_1__ cert_info; } ;
typedef TYPE_2__ X509 ;
typedef int ASN1_BIT_STRING ;



void FUNC_0(const X509 *VAR_0, const ASN1_BIT_STRING **VAR_1,
                    const ASN1_BIT_STRING **VAR_2)
{
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_0->cert_info.issuerUID;
    if (VAR_2 != ((void*)0))
        *VAR_2 = VAR_0->cert_info.subjectUID;
}
