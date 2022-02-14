
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_ctx {int is_idle; void* marked_pts; void* last_seek_pts; } ;
struct MPContext {struct command_ctx* command_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct MPContext*,int ) ;

__attribute__((used)) static void FUNC_1(struct MPContext *VAR_6, int VAR_7, void *VAR_8)
{
    struct command_ctx *VAR_9 = VAR_6->command_ctx;

    if (VAR_7 == VAR_3) {
        VAR_9->last_seek_pts = VAR_4;
        VAR_9->marked_pts = VAR_4;
    }

    if (VAR_7 == VAR_2)
        VAR_9->is_idle = 1;
    if (VAR_7 == VAR_3)
        VAR_9->is_idle = 0;
    if (VAR_7 == VAR_0 || VAR_7 == VAR_1) {

        FUNC_0(VAR_6, VAR_5);
    }
}
