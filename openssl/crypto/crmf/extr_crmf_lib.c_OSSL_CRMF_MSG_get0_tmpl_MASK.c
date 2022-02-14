
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* certReq; } ;
struct TYPE_4__ {int * certTemplate; } ;
typedef TYPE_2__ OSSL_CRMF_MSG ;
typedef int OSSL_CRMF_CERTTEMPLATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

OSSL_CRMF_CERTTEMPLATE *FUNC_1(const OSSL_CRMF_MSG *VAR_2)
{
    if (VAR_2 == ((void*)0) || VAR_2->certReq == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }
    return VAR_2->certReq->certTemplate;
}
