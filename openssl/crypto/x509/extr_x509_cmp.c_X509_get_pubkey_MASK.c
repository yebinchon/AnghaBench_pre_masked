
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int key; } ;
struct TYPE_5__ {TYPE_1__ cert_info; } ;
typedef TYPE_2__ X509 ;
typedef int EVP_PKEY ;


 int * FUNC_0 (int ) ;

EVP_PKEY *FUNC_1(X509 *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    return FUNC_0(VAR_0->cert_info.key);
}
