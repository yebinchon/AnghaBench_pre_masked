
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* certReq; } ;
struct TYPE_4__ {int * controls; } ;
typedef TYPE_2__ OSSL_CRMF_MSG ;
typedef int OSSL_CRMF_ATTRIBUTETYPEANDVALUE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(OSSL_CRMF_MSG *VAR_2,
                                       OSSL_CRMF_ATTRIBUTETYPEANDVALUE *VAR_3)
{
    int VAR_4 = 0;

    if (VAR_2 == ((void*)0) || VAR_2->certReq == ((void*)0) || VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_2->certReq->controls == ((void*)0)) {
        VAR_2->certReq->controls = FUNC_2();
        if (VAR_2->certReq->controls == ((void*)0))
            goto err;
        VAR_4 = 1;
    }
    if (!FUNC_3(VAR_2->certReq->controls, VAR_3))
        goto err;

    return 1;
 err:
    if (VAR_4 != 0) {
        FUNC_1(VAR_2->certReq->controls);
        VAR_2->certReq->controls = ((void*)0);
    }
    return 0;
}
