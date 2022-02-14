
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* utf8_string_atom; void* name_atom; void* state_modal_atom; void* state_skip_pager_atom; void* state_skip_taskbar_atom; void* state_hidden_atom; void* state_maximized_horz_atom; void* state_maximized_vert_atom; } ;
struct TYPE_5__ {int display; TYPE_1__ ewmhints; void* net_wm_desktop_atom; void* net_wm_state_atom; } ;
typedef TYPE_2__ RDPCLIENT ;


 int VAR_0 ;
 void* FUNC_0 (int ,char*,int ) ;

void
FUNC_1(RDPCLIENT * VAR_1)
{

 VAR_1->ewmhints.state_maximized_vert_atom =
  FUNC_0(VAR_1->display, "_NET_WM_STATE_MAXIMIZED_VERT", VAR_0);
 VAR_1->ewmhints.state_maximized_horz_atom =
  FUNC_0(VAR_1->display, "_NET_WM_STATE_MAXIMIZED_HORZ", VAR_0);
 VAR_1->ewmhints.state_hidden_atom = FUNC_0(VAR_1->display, "_NET_WM_STATE_HIDDEN", VAR_0);
 VAR_1->ewmhints.state_skip_taskbar_atom =
  FUNC_0(VAR_1->display, "_NET_WM_STATE_SKIP_TASKBAR", VAR_0);
 VAR_1->ewmhints.state_skip_pager_atom = FUNC_0(VAR_1->display, "_NET_WM_STATE_SKIP_PAGER", VAR_0);
 VAR_1->ewmhints.state_modal_atom = FUNC_0(VAR_1->display, "_NET_WM_STATE_MODAL", VAR_0);
 VAR_1->net_wm_state_atom = FUNC_0(VAR_1->display, "_NET_WM_STATE", VAR_0);
 VAR_1->net_wm_desktop_atom = FUNC_0(VAR_1->display, "_NET_WM_DESKTOP", VAR_0);
 VAR_1->ewmhints.name_atom = FUNC_0(VAR_1->display, "_NET_WM_NAME", VAR_0);
 VAR_1->ewmhints.utf8_string_atom = FUNC_0(VAR_1->display, "UTF8_STRING", VAR_0);
}
