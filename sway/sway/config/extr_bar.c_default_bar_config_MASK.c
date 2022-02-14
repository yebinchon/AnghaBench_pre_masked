
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * binding_mode_text; int * binding_mode_bg; int * binding_mode_border; int * focused_separator; int * focused_statusline; int * focused_background; void* urgent_workspace_text; void* urgent_workspace_bg; void* urgent_workspace_border; void* inactive_workspace_text; void* inactive_workspace_bg; void* inactive_workspace_border; void* active_workspace_text; void* active_workspace_bg; void* active_workspace_border; void* focused_workspace_text; void* focused_workspace_bg; void* focused_workspace_border; void* separator; void* statusline; void* background; } ;
struct bar_config {int pango_markup; int workspace_buttons; int wrap_scroll; int strip_workspace_numbers; int strip_workspace_name; int binding_mode_indicator; int verbose; int status_padding; int status_edge_padding; int tray_padding; int tray_bindings; TYPE_1__ colors; int bindings; void* hidden_state; void* mode; int modifier; int * separator_symbol; scalar_t__ height; int * font; int * swaybar_command; void* position; int * outputs; } ;


 struct bar_config* FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct bar_config*) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (char*) ;
 void* FUNC_5 (char*,int) ;
 int FUNC_6 (int *) ;

struct bar_config *FUNC_7(void) {
 struct bar_config *VAR_0 = ((void*)0);
 VAR_0 = FUNC_0(1, sizeof(struct bar_config));
 if (!VAR_0) {
  return ((void*)0);
 }
 VAR_0->outputs = ((void*)0);
 VAR_0->position = FUNC_4("bottom");
 VAR_0->pango_markup = 0;
 VAR_0->swaybar_command = ((void*)0);
 VAR_0->font = ((void*)0);
 VAR_0->height = 0;
 VAR_0->workspace_buttons = 1;
 VAR_0->wrap_scroll = 0;
 VAR_0->separator_symbol = ((void*)0);
 VAR_0->strip_workspace_numbers = 0;
 VAR_0->strip_workspace_name = 0;
 VAR_0->binding_mode_indicator = 1;
 VAR_0->verbose = 0;
 VAR_0->modifier = FUNC_3("Mod4");
 VAR_0->status_padding = 1;
 VAR_0->status_edge_padding = 3;
 if (!(VAR_0->mode = FUNC_4("dock"))) {
        goto cleanup;
 }
 if (!(VAR_0->hidden_state = FUNC_4("hide"))) {
  goto cleanup;
 }
 if (!(VAR_0->bindings = FUNC_1())) {
  goto cleanup;
 }

 if (!(VAR_0->colors.background = FUNC_5("#000000ff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.statusline = FUNC_5("#ffffffff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.separator = FUNC_5("#666666ff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.focused_workspace_border = FUNC_5("#4c7899ff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.focused_workspace_bg = FUNC_5("#285577ff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.focused_workspace_text = FUNC_5("#ffffffff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.active_workspace_border = FUNC_5("#333333ff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.active_workspace_bg = FUNC_5("#5f676aff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.active_workspace_text = FUNC_5("#ffffffff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.inactive_workspace_border = FUNC_5("#333333ff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.inactive_workspace_bg = FUNC_5("#222222ff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.inactive_workspace_text = FUNC_5("#888888ff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.urgent_workspace_border = FUNC_5("#2f343aff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.urgent_workspace_bg = FUNC_5("#900000ff", 9))) {
  goto cleanup;
 }
 if (!(VAR_0->colors.urgent_workspace_text = FUNC_5("#ffffffff", 9))) {
  goto cleanup;
 }


 VAR_0->colors.focused_background = ((void*)0);
 VAR_0->colors.focused_statusline = ((void*)0);
 VAR_0->colors.focused_separator = ((void*)0);
 VAR_0->colors.binding_mode_border = ((void*)0);
 VAR_0->colors.binding_mode_bg = ((void*)0);
 VAR_0->colors.binding_mode_text = ((void*)0);






 return VAR_0;
cleanup:
 FUNC_2(VAR_0);
 return ((void*)0);
}
