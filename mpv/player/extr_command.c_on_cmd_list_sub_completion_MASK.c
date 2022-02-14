
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd_ctx {struct cmd_list_ctx* on_completion_priv; } ;
struct cmd_list_ctx {int completed_recursive; int current; scalar_t__ current_valid; } ;


 int FUNC_0 (struct cmd_list_ctx*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mp_cmd_ctx *VAR_0)
{
    struct cmd_list_ctx *VAR_1 = VAR_0->on_completion_priv;

    if (VAR_1->current_valid && FUNC_1(VAR_1->current, FUNC_2())) {
        VAR_1->completed_recursive = 1;
    } else {
        FUNC_0(VAR_1);
    }
}
