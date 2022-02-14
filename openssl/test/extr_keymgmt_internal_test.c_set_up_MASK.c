
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* ctx2; struct TYPE_9__* prov2; struct TYPE_9__* ctx1; struct TYPE_9__* prov1; } ;
typedef TYPE_1__ FIXTURE ;


 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static FIXTURE *FUNC_5(const char *VAR_0)
{
    FIXTURE *VAR_1;

    if (!FUNC_3(VAR_1 = FUNC_1(sizeof(*VAR_1)))
        || !FUNC_3(VAR_1->ctx1 = FUNC_0())
        || !FUNC_3(VAR_1->prov1 = FUNC_2(VAR_1->ctx1,
                                                         "default"))
        || !FUNC_3(VAR_1->ctx2 = FUNC_0())
        || !FUNC_3(VAR_1->prov2 = FUNC_2(VAR_1->ctx2,
                                                         "default"))) {
        FUNC_4(VAR_1);
        return ((void*)0);
    }
    return VAR_1;
}
