
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct input_ctx {int ar_state; scalar_t__ last_key_down_time; scalar_t__ last_key_down; TYPE_2__* current_down_cmd; int key_history; } ;
struct TYPE_5__ {int is_up; TYPE_1__* def; scalar_t__ emit_on_up; } ;
struct TYPE_4__ {scalar_t__ on_updown; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct input_ctx*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct input_ctx*) ;

__attribute__((used)) static void FUNC_4(struct input_ctx *VAR_0, bool VAR_1)
{
    if (VAR_0->current_down_cmd && VAR_0->current_down_cmd->emit_on_up &&
        (!VAR_1 || VAR_0->current_down_cmd->def->on_updown))
    {
        FUNC_0(VAR_0->key_history, 0, sizeof(VAR_0->key_history));
        VAR_0->current_down_cmd->is_up = 1;
        FUNC_1(VAR_0, VAR_0->current_down_cmd);
    } else {
        FUNC_2(VAR_0->current_down_cmd);
    }
    VAR_0->current_down_cmd = ((void*)0);
    VAR_0->last_key_down = 0;
    VAR_0->last_key_down_time = 0;
    VAR_0->ar_state = -1;
    FUNC_3(VAR_0);
}
