
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xkb_layout_index_t ;
struct TYPE_2__ {int locked; int latched; int depressed; } ;
struct wlr_keyboard {TYPE_1__ modifiers; int keymap; } ;


 int FUNC_0 (struct wlr_keyboard*,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct wlr_keyboard *VAR_0, xkb_layout_index_t VAR_1) {
 xkb_layout_index_t VAR_2 = FUNC_1(VAR_0->keymap);
 if (VAR_1 >= VAR_2) {
  return;
 }
 FUNC_0(VAR_0, VAR_0->modifiers.depressed,
  VAR_0->modifiers.latched, VAR_0->modifiers.locked, VAR_1);
}
