
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int gif_bitmap_callback_vt ;
struct TYPE_4__ {int decoded_frame; int bitmap_callbacks; } ;
typedef TYPE_1__ gif_animation ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(gif_animation *VAR_1, gif_bitmap_callback_vt *VAR_2) {
    FUNC_0(VAR_1, 0, sizeof(gif_animation));
    VAR_1->bitmap_callbacks = *VAR_2;
    VAR_1->decoded_frame = VAR_0;
}
