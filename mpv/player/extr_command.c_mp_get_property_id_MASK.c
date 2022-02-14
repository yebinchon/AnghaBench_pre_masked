
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct command_ctx {TYPE_1__* properties; } ;
struct MPContext {struct command_ctx* command_ctx; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 scalar_t__ FUNC_0 (scalar_t__,char const*) ;

int FUNC_1(struct MPContext *VAR_0, const char *VAR_1)
{
    struct command_ctx *VAR_2 = VAR_0->command_ctx;
    for (int VAR_3 = 0; VAR_2->properties[VAR_3].name; VAR_3++) {
        if (FUNC_0(VAR_2->properties[VAR_3].name, VAR_1))
            return VAR_3;
    }
    return -1;
}
