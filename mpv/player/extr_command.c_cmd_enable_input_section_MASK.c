
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_cmd_ctx {TYPE_2__* args; struct MPContext* mpctx; } ;
struct MPContext {int input; } ;
struct TYPE_3__ {int i; int s; } ;
struct TYPE_4__ {TYPE_1__ v; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    struct mp_cmd_ctx *VAR_1 = VAR_0;
    struct MPContext *VAR_2 = VAR_1->mpctx;
    FUNC_0(VAR_2->input, VAR_1->args[0].v.s, VAR_1->args[1].v.i);
}
