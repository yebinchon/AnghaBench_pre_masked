
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hook_handler {int dummy; } ;
struct command_ctx {int num_hooks; struct hook_handler** hooks; } ;
struct MPContext {struct command_ctx* command_ctx; } ;


 int FUNC_0 (struct hook_handler**,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hook_handler*) ;

__attribute__((used)) static void FUNC_3(struct MPContext *VAR_0, struct hook_handler *VAR_1)
{
    struct command_ctx *VAR_2 = VAR_0->command_ctx;
    for (int VAR_3 = 0; VAR_3 < VAR_2->num_hooks; VAR_3++) {
        if (VAR_2->hooks[VAR_3] == VAR_1) {
            FUNC_2(VAR_2->hooks[VAR_3]);
            FUNC_0(VAR_2->hooks, VAR_2->num_hooks, VAR_3);
            return;
        }
    }
    FUNC_1(0);
}
