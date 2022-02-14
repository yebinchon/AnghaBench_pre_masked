
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_ctx {scalar_t__ hotplug; } ;
struct MPContext {int global; struct command_ctx* command_ctx; } ;


 scalar_t__ FUNC_0 (int ,int ,struct MPContext*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct MPContext *VAR_1)
{
    struct command_ctx *VAR_2 = VAR_1->command_ctx;

    if (!VAR_2->hotplug) {
        VAR_2->hotplug = FUNC_0(VAR_1->global, VAR_0,
                                         VAR_1);
    }
}
