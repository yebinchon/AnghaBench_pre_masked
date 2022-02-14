
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_cmd_ctx {int success; TYPE_1__* cmd; struct MPContext* mpctx; } ;
struct MPContext {int step_frames; int playback_initialized; } ;
struct TYPE_2__ {scalar_t__ repeated; scalar_t__ is_up; scalar_t__ is_up_down; } ;


 int FUNC_0 (struct MPContext*,int) ;
 int FUNC_1 (struct MPContext*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
    struct mp_cmd_ctx *VAR_1 = VAR_0;
    struct MPContext *VAR_2 = VAR_1->mpctx;

    if (!VAR_2->playback_initialized) {
        VAR_1->success = 0;
        return;
    }

    if (VAR_1->cmd->is_up_down) {
        if (VAR_1->cmd->is_up) {
            if (VAR_2->step_frames < 1)
                FUNC_1(VAR_2, 1);
        } else {
            if (VAR_1->cmd->repeated) {
                FUNC_1(VAR_2, 0);
            } else {
                FUNC_0(VAR_2, 1);
            }
        }
    } else {
        FUNC_0(VAR_2, 1);
    }
}
