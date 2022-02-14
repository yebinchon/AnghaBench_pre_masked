
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_ctx {int silence_option_deprecations; int properties; } ;
struct MPContext {int log; struct command_ctx* command_ctx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,void*) ;
 int FUNC_1 (int ,int ,char const*,int,void*,struct MPContext*) ;
 int FUNC_2 (struct MPContext*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, int VAR_2, void *VAR_3,
                                 struct MPContext *VAR_4)
{
    struct command_ctx *VAR_5 = VAR_4->command_ctx;
    VAR_5->silence_option_deprecations += 1;
    int VAR_6 = FUNC_1(VAR_4->log, VAR_5->properties, VAR_1, VAR_2, VAR_3, VAR_4);
    VAR_5->silence_option_deprecations -= 1;
    if (VAR_6 == VAR_0 && FUNC_0(VAR_2, VAR_3))
        FUNC_2(VAR_4, (char *)VAR_1);
    return VAR_6;
}
