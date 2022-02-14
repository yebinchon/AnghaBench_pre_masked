
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* certReq; } ;
struct TYPE_4__ {int * certReqId; } ;
typedef TYPE_2__ OSSL_CRMF_MSG ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(OSSL_CRMF_MSG *VAR_2, int VAR_3)
{
    if (VAR_2 == ((void*)0) || VAR_2->certReq == ((void*)0) || VAR_2->certReq->certReqId == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    return FUNC_0(VAR_2->certReq->certReqId, VAR_3);
}
