
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int algorithm; } ;
struct TYPE_5__ {int req_info; int signature; TYPE_4__ sig_alg; } ;
typedef TYPE_1__ X509_REQ ;
typedef int EVP_PKEY ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_4__*,int ,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int,int) ;

int FUNC_6(X509_REQ *VAR_4, EVP_PKEY *VAR_5)
{

    int VAR_6, VAR_7;


    if (!FUNC_2(FUNC_3(VAR_4->sig_alg.algorithm),
                             &VAR_6, &VAR_7)) {
        FUNC_4(VAR_2, VAR_0);
        return 0;
    }

    if (VAR_7 == VAR_1)
        return FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);


    return (FUNC_1(FUNC_0(VAR_3),
                             &VAR_4->sig_alg, VAR_4->signature, &VAR_4->req_info, VAR_5));
}
