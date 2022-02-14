
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bitmap {int dummy; } ;
typedef int gif_result ;
struct TYPE_4__ {struct bitmap* (* bitmap_destroy ) (struct bitmap*) ;struct bitmap* (* bitmap_create ) (unsigned int,unsigned int) ;} ;
struct TYPE_5__ {unsigned int width; unsigned int height; int decoded_frame; struct bitmap* frame_image; TYPE_1__ bitmap_callbacks; } ;
typedef TYPE_2__ gif_animation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bitmap* (*) (unsigned int,unsigned int)) ;
 struct bitmap* FUNC_1 (unsigned int,unsigned int) ;
 struct bitmap* FUNC_2 (struct bitmap*) ;

__attribute__((used)) static gif_result FUNC_3(gif_animation *VAR_3, unsigned int VAR_4, unsigned int VAR_5) {
    unsigned int VAR_6;
    unsigned int VAR_7;
    struct bitmap *VAR_8;



    if ((VAR_4 <= VAR_3->width) && (VAR_5 <= VAR_3->height))
        return VAR_2;



    VAR_6 = (VAR_4 > VAR_3->width) ? VAR_4 : VAR_3->width;
    VAR_7 = (VAR_5 > VAR_3->height) ? VAR_5 : VAR_3->height;



    FUNC_0(VAR_3->bitmap_callbacks.bitmap_create);
    if ((VAR_8 = VAR_3->bitmap_callbacks.bitmap_create(VAR_6, VAR_7)) == ((void*)0))
        return VAR_0;
    FUNC_0(VAR_3->bitmap_callbacks.bitmap_destroy);
    VAR_3->bitmap_callbacks.bitmap_destroy(VAR_3->frame_image);
    VAR_3->frame_image = VAR_8;
    VAR_3->width = VAR_6;
    VAR_3->height = VAR_7;



    VAR_3->decoded_frame = VAR_1;
    return VAR_2;
}
