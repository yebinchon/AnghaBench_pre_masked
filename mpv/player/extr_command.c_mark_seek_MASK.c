
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_ctx {double last_seek_time; scalar_t__ last_seek_pts; } ;
struct MPContext {struct command_ctx* command_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct MPContext*) ;
 double FUNC_1 () ;

void FUNC_2(struct MPContext *VAR_1)
{
    struct command_ctx *VAR_2 = VAR_1->command_ctx;
    double VAR_3 = FUNC_1();
    if (VAR_3 > VAR_2->last_seek_time + 2.0 || VAR_2->last_seek_pts == VAR_0)
        VAR_2->last_seek_pts = FUNC_0(VAR_1);
    VAR_2->last_seek_time = VAR_3;
}
