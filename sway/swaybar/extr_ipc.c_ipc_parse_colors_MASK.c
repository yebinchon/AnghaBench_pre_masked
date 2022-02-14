
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {void* text; void* background; void* border; } ;
struct TYPE_10__ {void* text; void* background; void* border; } ;
struct TYPE_9__ {void* text; void* background; void* border; } ;
struct TYPE_8__ {void* text; void* background; void* border; } ;
struct TYPE_7__ {void* text; void* background; void* border; } ;
struct TYPE_12__ {TYPE_5__ binding_mode; TYPE_4__ urgent_workspace; TYPE_3__ inactive_workspace; TYPE_2__ active_workspace; TYPE_1__ focused_workspace; void* focused_separator; void* focused_statusline; void* focused_background; void* separator; void* statusline; void* background; } ;
struct swaybar_config {TYPE_6__ colors; } ;
typedef int json_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int **) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
  struct swaybar_config *VAR_0, json_object *VAR_1) {
 json_object *VAR_2, *VAR_3, *VAR_4;
 json_object *VAR_5, *VAR_6, *VAR_7;
 json_object *VAR_8, *VAR_9, *VAR_10;
 json_object *VAR_11, *VAR_12, *VAR_13;
 json_object *VAR_14, *VAR_15, *VAR_16;
 json_object *VAR_17, *VAR_18, *VAR_19;
 json_object *VAR_20, *VAR_21, *VAR_22;
 FUNC_1(VAR_1, "background", &VAR_2);
 FUNC_1(VAR_1, "statusline", &VAR_3);
 FUNC_1(VAR_1, "separator", &VAR_4);
 FUNC_1(VAR_1, "focused_background", &VAR_5);
 FUNC_1(VAR_1, "focused_statusline", &VAR_6);
 FUNC_1(VAR_1, "focused_separator", &VAR_7);
 FUNC_1(VAR_1, "focused_workspace_border", &VAR_8);
 FUNC_1(VAR_1, "focused_workspace_bg", &VAR_9);
 FUNC_1(VAR_1, "focused_workspace_text", &VAR_10);
 FUNC_1(VAR_1, "active_workspace_border", &VAR_14);
 FUNC_1(VAR_1, "active_workspace_bg", &VAR_15);
 FUNC_1(VAR_1, "active_workspace_text", &VAR_16);
 FUNC_1(VAR_1, "inactive_workspace_border", &VAR_11);
 FUNC_1(VAR_1, "inactive_workspace_bg", &VAR_12);
 FUNC_1(VAR_1, "inactive_workspace_text", &VAR_13);
 FUNC_1(VAR_1, "urgent_workspace_border", &VAR_17);
 FUNC_1(VAR_1, "urgent_workspace_bg", &VAR_18);
 FUNC_1(VAR_1, "urgent_workspace_text", &VAR_19);
 FUNC_1(VAR_1, "binding_mode_border", &VAR_20);
 FUNC_1(VAR_1, "binding_mode_bg", &VAR_21);
 FUNC_1(VAR_1, "binding_mode_text", &VAR_22);
 if (VAR_2) {
  VAR_0->colors.background = FUNC_2(
    FUNC_0(VAR_2));
 }
 if (VAR_3) {
  VAR_0->colors.statusline = FUNC_2(
    FUNC_0(VAR_3));
 }
 if (VAR_4) {
  VAR_0->colors.separator = FUNC_2(
    FUNC_0(VAR_4));
 }
 if (VAR_5) {
  VAR_0->colors.focused_background = FUNC_2(
    FUNC_0(VAR_5));
 }
 if (VAR_6) {
  VAR_0->colors.focused_statusline = FUNC_2(
    FUNC_0(VAR_6));
 }
 if (VAR_7) {
  VAR_0->colors.focused_separator = FUNC_2(
    FUNC_0(VAR_7));
 }
 if (VAR_8) {
  VAR_0->colors.focused_workspace.border = FUNC_2(
    FUNC_0(VAR_8));
 }
 if (VAR_9) {
  VAR_0->colors.focused_workspace.background = FUNC_2(
    FUNC_0(VAR_9));
 }
 if (VAR_10) {
  VAR_0->colors.focused_workspace.text = FUNC_2(
    FUNC_0(VAR_10));
 }
 if (VAR_14) {
  VAR_0->colors.active_workspace.border = FUNC_2(
    FUNC_0(VAR_14));
 }
 if (VAR_15) {
  VAR_0->colors.active_workspace.background = FUNC_2(
    FUNC_0(VAR_15));
 }
 if (VAR_16) {
  VAR_0->colors.active_workspace.text = FUNC_2(
    FUNC_0(VAR_16));
 }
 if (VAR_11) {
  VAR_0->colors.inactive_workspace.border = FUNC_2(
    FUNC_0(VAR_11));
 }
 if (VAR_12) {
  VAR_0->colors.inactive_workspace.background = FUNC_2(
    FUNC_0(VAR_12));
 }
 if (VAR_13) {
  VAR_0->colors.inactive_workspace.text = FUNC_2(
    FUNC_0(VAR_13));
 }
 if (VAR_17) {
  VAR_0->colors.urgent_workspace.border = FUNC_2(
    FUNC_0(VAR_17));
 }
 if (VAR_18) {
  VAR_0->colors.urgent_workspace.background = FUNC_2(
    FUNC_0(VAR_18));
 }
 if (VAR_19) {
  VAR_0->colors.urgent_workspace.text = FUNC_2(
    FUNC_0(VAR_19));
 }
 if (VAR_20) {
  VAR_0->colors.binding_mode.border = FUNC_2(
    FUNC_0(VAR_20));
 }
 if (VAR_21) {
  VAR_0->colors.binding_mode.background = FUNC_2(
    FUNC_0(VAR_21));
 }
 if (VAR_22) {
  VAR_0->colors.binding_mode.text = FUNC_2(
    FUNC_0(VAR_22));
 }
}
