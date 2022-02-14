
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sig_alg; int * signature; } ;
typedef TYPE_1__ X509_REQ ;
typedef int X509_ALGOR ;
typedef int ASN1_BIT_STRING ;



void FUNC_0(const X509_REQ *VAR_0, const ASN1_BIT_STRING **VAR_1,
                             const X509_ALGOR **VAR_2)
{
    if (VAR_1 != ((void*)0))
        *VAR_1 = VAR_0->signature;
    if (VAR_2 != ((void*)0))
        *VAR_2 = &VAR_0->sig_alg;
}
