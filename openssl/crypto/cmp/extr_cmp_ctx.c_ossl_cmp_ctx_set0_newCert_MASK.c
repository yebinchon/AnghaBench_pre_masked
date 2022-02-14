
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_3__ {int * newCert; } ;
typedef TYPE_1__ OSSL_CMP_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(OSSL_CMP_CTX *VAR_0, X509 *VAR_1)
{
    if (!FUNC_1(VAR_0 != ((void*)0)))
        return 0;

    FUNC_0(VAR_0->newCert);
    VAR_0->newCert = VAR_1;
    return 1;
}
