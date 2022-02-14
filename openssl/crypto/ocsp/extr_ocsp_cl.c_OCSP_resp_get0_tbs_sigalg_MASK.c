
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_3__ {int const signatureAlgorithm; } ;
typedef TYPE_1__ OCSP_BASICRESP ;



const X509_ALGOR *FUNC_0(const OCSP_BASICRESP *VAR_0)
{
    return &VAR_0->signatureAlgorithm;
}
