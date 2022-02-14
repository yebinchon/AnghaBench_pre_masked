
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_ctx {int properties; } ;
struct MPContext {int log; struct command_ctx* command_ctx; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct MPContext *VAR_0)
{
    struct command_ctx *VAR_1 = VAR_0->command_ctx;
    FUNC_0(VAR_0->log, VAR_1->properties);
}
