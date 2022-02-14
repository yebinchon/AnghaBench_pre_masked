
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voctrl_playback_state {scalar_t__ paused; int percent_pos; int taskbar_progress; int playing; } ;
struct vo_w32_state {int window; int taskbar_list3; int tbtnCreated; struct voctrl_playback_state current_pstate; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct vo_w32_state *VAR_3)
{
    struct voctrl_playback_state *VAR_4 = &VAR_3->current_pstate;

    if (!VAR_3->taskbar_list3 || !VAR_3->tbtnCreated)
        return;

    if (!VAR_4->playing || !VAR_4->taskbar_progress) {
        FUNC_0(VAR_3->taskbar_list3, VAR_3->window,
                                       VAR_0);
        return;
    }

    FUNC_1(VAR_3->taskbar_list3, VAR_3->window,
                                   VAR_4->percent_pos, 100);
    FUNC_0(VAR_3->taskbar_list3, VAR_3->window,
                                   VAR_4->paused ? VAR_2 :
                                                    VAR_1);
}
