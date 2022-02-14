
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_ipc_ctx {int death_event; int thread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mp_ipc_ctx*) ;

void FUNC_4(struct mp_ipc_ctx *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_1(VAR_0->death_event);
    FUNC_2(VAR_0->thread, ((void*)0));

    FUNC_0(VAR_0->death_event);
    FUNC_3(VAR_0);
}
