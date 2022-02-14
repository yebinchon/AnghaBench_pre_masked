
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_ctx {int properties; } ;
struct MPContext {struct command_ctx* command_ctx; } ;


 char* FUNC_0 (int ,char const*,struct MPContext*) ;

char *FUNC_1(struct MPContext *VAR_0, const char *VAR_1)
{
    struct command_ctx *VAR_2 = VAR_0->command_ctx;
    return FUNC_0(VAR_2->properties, VAR_1, VAR_0);
}
