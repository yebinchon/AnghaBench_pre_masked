
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_REVOKED ;
struct TYPE_6__ {TYPE_1__* meth; } ;
typedef TYPE_2__ X509_CRL ;
typedef int X509 ;
struct TYPE_5__ {int (* crl_lookup ) (TYPE_2__*,int **,int ,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int **,int ,int ) ;

int FUNC_3(X509_CRL *VAR_0, X509_REVOKED **VAR_1, X509 *VAR_2)
{
    if (VAR_0->meth->crl_lookup)
        return VAR_0->meth->crl_lookup(VAR_0, VAR_1,
                                     FUNC_1(VAR_2),
                                     FUNC_0(VAR_2));
    return 0;
}
