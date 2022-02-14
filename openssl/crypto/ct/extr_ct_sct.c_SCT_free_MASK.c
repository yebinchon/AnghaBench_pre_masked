
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* sct; struct TYPE_4__* sig; struct TYPE_4__* ext; struct TYPE_4__* log_id; } ;
typedef TYPE_1__ SCT ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(SCT *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;

    FUNC_0(VAR_0->log_id);
    FUNC_0(VAR_0->ext);
    FUNC_0(VAR_0->sig);
    FUNC_0(VAR_0->sct);
    FUNC_0(VAR_0);
}
