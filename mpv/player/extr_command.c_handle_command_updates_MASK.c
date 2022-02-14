
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_ctx {scalar_t__ hotplug; } ;
struct MPContext {struct command_ctx* command_ctx; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*,char*) ;

void FUNC_3(struct MPContext *VAR_0)
{
    struct command_ctx *VAR_1 = VAR_0->command_ctx;



    if (VAR_1->hotplug && FUNC_0(VAR_1->hotplug))
        FUNC_2(VAR_0, "audio-device-list");


    FUNC_1(VAR_0);
}
