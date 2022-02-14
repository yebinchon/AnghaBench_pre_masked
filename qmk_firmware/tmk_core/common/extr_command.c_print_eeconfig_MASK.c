
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nkro; int swap_backslash_backspace; int swap_grave_esc; int no_gui; int swap_ralt_rgui; int swap_lalt_lgui; int swap_rctl_rgui; int swap_lctl_lgui; int capslock_to_control; int swap_control_capslock; int raw; } ;
typedef TYPE_1__ keymap_config_t ;
struct TYPE_5__ {int mouse; int keyboard; int matrix; int enable; int raw; } ;
typedef TYPE_2__ debug_config_t ;
struct TYPE_6__ {int level; int enable; int raw; } ;
typedef TYPE_3__ backlight_config_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void) {



    FUNC_4("default_layer: ");
    FUNC_5(FUNC_2());
    FUNC_4("\n");

    debug_config_t VAR_0;
    VAR_0.raw = FUNC_1();
    FUNC_4("debug_config.raw: ");
    FUNC_6(VAR_0.raw);
    FUNC_4("\n");
    FUNC_4(".enable: ");
    FUNC_5(VAR_0.enable);
    FUNC_4("\n");
    FUNC_4(".matrix: ");
    FUNC_5(VAR_0.matrix);
    FUNC_4("\n");
    FUNC_4(".keyboard: ");
    FUNC_5(VAR_0.keyboard);
    FUNC_4("\n");
    FUNC_4(".mouse: ");
    FUNC_5(VAR_0.mouse);
    FUNC_4("\n");

    keymap_config_t VAR_1;
    VAR_1.raw = FUNC_3();
    FUNC_4("keymap_config.raw: ");
    FUNC_6(VAR_1.raw);
    FUNC_4("\n");
    FUNC_4(".swap_control_capslock: ");
    FUNC_5(VAR_1.swap_control_capslock);
    FUNC_4("\n");
    FUNC_4(".capslock_to_control: ");
    FUNC_5(VAR_1.capslock_to_control);
    FUNC_4("\n");
    FUNC_4(".swap_lctl_lgui: ");
    FUNC_5(VAR_1.swap_lctl_lgui);
    FUNC_4("\n");
    FUNC_4(".swap_rctl_rgui: ");
    FUNC_5(VAR_1.swap_rctl_rgui);
    FUNC_4("\n");
    FUNC_4(".swap_lalt_lgui: ");
    FUNC_5(VAR_1.swap_lalt_lgui);
    FUNC_4("\n");
    FUNC_4(".swap_ralt_rgui: ");
    FUNC_5(VAR_1.swap_ralt_rgui);
    FUNC_4("\n");
    FUNC_4(".no_gui: ");
    FUNC_5(VAR_1.no_gui);
    FUNC_4("\n");
    FUNC_4(".swap_grave_esc: ");
    FUNC_5(VAR_1.swap_grave_esc);
    FUNC_4("\n");
    FUNC_4(".swap_backslash_backspace: ");
    FUNC_5(VAR_1.swap_backslash_backspace);
    FUNC_4("\n");
    FUNC_4(".nkro: ");
    FUNC_5(VAR_1.nkro);
    FUNC_4("\n");
}
