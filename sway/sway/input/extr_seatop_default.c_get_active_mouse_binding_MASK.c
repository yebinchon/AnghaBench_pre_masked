
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sway_binding {scalar_t__ modifiers; int flags; int input; TYPE_1__* keys; } ;
struct seatop_default_event {size_t pressed_button_count; scalar_t__* pressed_buttons; } ;
struct TYPE_5__ {int length; struct sway_binding** items; } ;
typedef TYPE_2__ list_t ;
struct TYPE_4__ {scalar_t__* items; scalar_t__ length; } ;


 scalar_t__ BINDING_BORDER ;
 scalar_t__ BINDING_CONTENTS ;
 int BINDING_RELEASE ;
 scalar_t__ BINDING_TITLEBAR ;
 scalar_t__ strcmp (int ,char const*) ;

__attribute__((used)) static struct sway_binding* get_active_mouse_binding(
  struct seatop_default_event *e, list_t *bindings, uint32_t modifiers,
  bool release, bool on_titlebar, bool on_border, bool on_content,
  bool on_workspace, const char *identifier) {
 uint32_t click_region =
   ((on_titlebar || on_workspace) ? BINDING_TITLEBAR : 0) |
   ((on_border || on_workspace) ? BINDING_BORDER : 0) |
   ((on_content || on_workspace) ? BINDING_CONTENTS : 0);

 struct sway_binding *current = ((void*)0);
 for (int i = 0; i < bindings->length; ++i) {
  struct sway_binding *binding = bindings->items[i];
  if (modifiers ^ binding->modifiers ||
    e->pressed_button_count != (size_t)binding->keys->length ||
    release != (binding->flags & BINDING_RELEASE) ||
    !(click_region & binding->flags) ||
    (on_workspace &&
     (click_region & binding->flags) != click_region) ||
    (strcmp(binding->input, identifier) != 0 &&
     strcmp(binding->input, "*") != 0)) {
   continue;
  }

  bool match = 1;
  for (size_t j = 0; j < e->pressed_button_count; j++) {
   uint32_t key = *(uint32_t *)binding->keys->items[j];
   if (key != e->pressed_buttons[j]) {
    match = 0;
    break;
   }
  }
  if (!match) {
   continue;
  }

  if (!current || strcmp(current->input, "*") == 0) {
   current = binding;
   if (strcmp(current->input, identifier) == 0) {

    break;
   }
  }
 }
 return current;
}
