
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ layer; scalar_t__ default_layer; scalar_t__ mods; scalar_t__ leds; scalar_t__ suspended; scalar_t__ backlight_level; int user_data; } ;
typedef TYPE_1__ visualizer_keyboard_status_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(visualizer_keyboard_status_t* VAR_1, visualizer_keyboard_status_t* VAR_2) {
    return VAR_1->layer == VAR_2->layer && VAR_1->default_layer == VAR_2->default_layer && VAR_1->mods == VAR_2->mods && VAR_1->leds == VAR_2->leds && VAR_1->suspended == VAR_2->suspended






        ;
}
