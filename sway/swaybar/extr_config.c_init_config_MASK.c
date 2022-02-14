
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int border; int background; int text; } ;
struct TYPE_12__ {int border; int background; int text; } ;
struct TYPE_11__ {int border; int background; int text; } ;
struct TYPE_10__ {int border; int background; int text; } ;
struct TYPE_9__ {int border; int background; int text; } ;
struct TYPE_14__ {int background; int focused_background; int statusline; int focused_statusline; int separator; TYPE_6__ binding_mode; TYPE_5__ urgent_workspace; TYPE_4__ inactive_workspace; TYPE_3__ active_workspace; TYPE_2__ focused_workspace; } ;
struct TYPE_8__ {scalar_t__ left; scalar_t__ bottom; scalar_t__ right; scalar_t__ top; } ;
struct swaybar_config {int pango_markup; int strip_workspace_numbers; int strip_workspace_name; int binding_mode_indicator; int wrap_scroll; int workspace_buttons; int status_padding; int status_edge_padding; int tray_padding; int tray_bindings; TYPE_7__ colors; TYPE_1__ gaps; scalar_t__ height; int outputs; int bindings; int * sep_symbol; void* hidden_state; void* mode; void* font; int position; int * status_command; } ;


 struct swaybar_config* FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

struct swaybar_config *FUNC_5(void) {
 struct swaybar_config *VAR_0 = FUNC_0(1, sizeof(struct swaybar_config));
 VAR_0->status_command = ((void*)0);
 VAR_0->pango_markup = 0;
 VAR_0->position = FUNC_2("bottom");
 VAR_0->font = FUNC_3("monospace 10");
 VAR_0->mode = FUNC_3("dock");
 VAR_0->hidden_state = FUNC_3("hide");
 VAR_0->sep_symbol = ((void*)0);
 VAR_0->strip_workspace_numbers = 0;
 VAR_0->strip_workspace_name = 0;
 VAR_0->binding_mode_indicator = 1;
 VAR_0->wrap_scroll = 0;
 VAR_0->workspace_buttons = 1;
 VAR_0->bindings = FUNC_1();
 FUNC_4(&VAR_0->outputs);
 VAR_0->status_padding = 1;
 VAR_0->status_edge_padding = 3;


 VAR_0->height = 0;


 VAR_0->gaps.top = 0;
 VAR_0->gaps.right = 0;
 VAR_0->gaps.bottom = 0;
 VAR_0->gaps.left = 0;


 VAR_0->colors.background = 0x000000FF;
 VAR_0->colors.focused_background = 0x000000FF;
 VAR_0->colors.statusline = 0xFFFFFFFF;
 VAR_0->colors.focused_statusline = 0xFFFFFFFF;
 VAR_0->colors.separator = 0x666666FF;

 VAR_0->colors.focused_workspace.border = 0x4C7899FF;
 VAR_0->colors.focused_workspace.background = 0x285577FF;
 VAR_0->colors.focused_workspace.text = 0xFFFFFFFF;

 VAR_0->colors.active_workspace.border = 0x333333FF;
 VAR_0->colors.active_workspace.background = 0x5F676AFF;
 VAR_0->colors.active_workspace.text = 0xFFFFFFFF;

 VAR_0->colors.inactive_workspace.border = 0x333333FF;
 VAR_0->colors.inactive_workspace.background = 0x222222FF;
 VAR_0->colors.inactive_workspace.text = 0x888888FF;

 VAR_0->colors.urgent_workspace.border = 0x2F343AFF;
 VAR_0->colors.urgent_workspace.background = 0x900000FF;
 VAR_0->colors.urgent_workspace.text = 0xFFFFFFFF;

 VAR_0->colors.binding_mode.border = 0x2F343AFF;
 VAR_0->colors.binding_mode.background = 0x900000FF;
 VAR_0->colors.binding_mode.text = 0xFFFFFFFF;






 return VAR_0;
}
