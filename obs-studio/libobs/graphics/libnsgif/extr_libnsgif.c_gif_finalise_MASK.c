
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* bitmap_destroy ) (int *) ;} ;
struct TYPE_5__ {int * global_colour_table; int * local_colour_table; int * frames; int * frame_image; TYPE_1__ bitmap_callbacks; } ;
typedef TYPE_2__ gif_animation ;


 int FUNC_0 (int (*) (int *)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(gif_animation *VAR_0) {


    if (VAR_0->frame_image) {
        FUNC_0(VAR_0->bitmap_callbacks.bitmap_destroy);
        VAR_0->bitmap_callbacks.bitmap_destroy(VAR_0->frame_image);
    }
    VAR_0->frame_image = ((void*)0);
    FUNC_1(VAR_0->frames);
    VAR_0->frames = ((void*)0);
    FUNC_1(VAR_0->local_colour_table);
    VAR_0->local_colour_table = ((void*)0);
    FUNC_1(VAR_0->global_colour_table);
    VAR_0->global_colour_table = ((void*)0);
}
