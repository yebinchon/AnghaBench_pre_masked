
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * version; } ;
struct TYPE_5__ {TYPE_1__ crl; } ;
typedef TYPE_2__ X509_CRL ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,long) ;

int FUNC_2(X509_CRL *VAR_0, long VAR_1)
{
    if (VAR_0 == ((void*)0))
        return 0;
    if (VAR_0->crl.version == ((void*)0)) {
        if ((VAR_0->crl.version = FUNC_0()) == ((void*)0))
            return 0;
    }
    return FUNC_1(VAR_0->crl.version, VAR_1);
}
