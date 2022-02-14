
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * notBefore; } ;
struct TYPE_6__ {TYPE_1__ validity; } ;
struct TYPE_7__ {TYPE_2__ cert_info; } ;
typedef TYPE_3__ X509 ;
typedef int ASN1_TIME ;



ASN1_TIME *FUNC_0(const X509 *VAR_0)
{
    return VAR_0->cert_info.validity.notBefore;
}
