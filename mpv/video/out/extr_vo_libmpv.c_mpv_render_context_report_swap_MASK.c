
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flip_count; int lock; int video_wait; } ;
typedef TYPE_1__ mpv_render_context ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(mpv_render_context *VAR_0)
{
    FUNC_0(VAR_0, "glcb-reportflip");

    FUNC_2(&VAR_0->lock);
    VAR_0->flip_count += 1;
    FUNC_1(&VAR_0->video_wait);
    FUNC_3(&VAR_0->lock);
}
