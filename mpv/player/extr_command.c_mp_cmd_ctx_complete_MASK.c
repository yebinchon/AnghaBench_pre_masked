
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd_ctx {int completed; int result; scalar_t__ abort; int mpctx; int (* on_completion ) (struct mp_cmd_ctx*) ;int success; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mp_cmd_ctx*) ;
 int FUNC_3 (struct mp_cmd_ctx*) ;

void FUNC_4(struct mp_cmd_ctx *VAR_0)
{
    VAR_0->completed = 1;
    if (!VAR_0->success)
        FUNC_1(&VAR_0->result);
    if (VAR_0->on_completion)
        VAR_0->on_completion(VAR_0);
    if (VAR_0->abort)
        FUNC_0(VAR_0->mpctx, VAR_0->abort);
    FUNC_1(&VAR_0->result);
    FUNC_3(VAR_0);
}
