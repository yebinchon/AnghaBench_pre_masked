
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_3__ {int sig_alg; int signature; } ;
typedef TYPE_1__ X509 ;
typedef int ASN1_BIT_STRING ;



void FUNC_0(const ASN1_BIT_STRING **VAR_0,
                         const X509_ALGOR **VAR_1, const X509 *VAR_2)
{
    if (VAR_0)
        *VAR_0 = &VAR_2->signature;
    if (VAR_1)
        *VAR_1 = &VAR_2->sig_alg;
}
