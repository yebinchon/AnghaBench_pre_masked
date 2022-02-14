
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_4__ {int * issuer; } ;
struct TYPE_5__ {TYPE_1__ cert_info; } ;
typedef TYPE_2__ X509 ;



X509_NAME *FUNC_0(const X509 *VAR_0)
{
    return VAR_0->cert_info.issuer;
}
