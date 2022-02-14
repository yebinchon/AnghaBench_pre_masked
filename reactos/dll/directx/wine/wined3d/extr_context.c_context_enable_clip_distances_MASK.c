
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* p_glDisable ) (scalar_t__) ;int (* p_glEnable ) (scalar_t__) ;} ;
struct TYPE_6__ {TYPE_2__ gl; } ;
struct TYPE_4__ {unsigned int user_clip_distances; } ;
struct wined3d_gl_info {TYPE_3__ gl_ops; TYPE_1__ limits; } ;
struct wined3d_context {unsigned int clip_distance_mask; struct wined3d_gl_info* gl_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (unsigned int*) ;

void FUNC_4(struct wined3d_context *VAR_1, unsigned int VAR_2)
{
    const struct wined3d_gl_info *VAR_3 = VAR_1->gl_info;
    unsigned int VAR_4 = VAR_3->limits.user_clip_distances;
    unsigned int VAR_5, VAR_6, VAR_7;

    VAR_6 = ~VAR_2;
    VAR_2 &= (1u << VAR_4) - 1;
    VAR_6 &= (1u << VAR_4) - 1;
    VAR_7 = VAR_1->clip_distance_mask;
    VAR_1->clip_distance_mask = VAR_2;

    VAR_2 &= ~VAR_7;
    while (VAR_2)
    {
        VAR_5 = FUNC_3(&VAR_2);
        VAR_3->gl_ops.gl.p_glEnable(VAR_0 + VAR_5);
    }
    VAR_6 &= VAR_7;
    while (VAR_6)
    {
        VAR_5 = FUNC_3(&VAR_6);
        VAR_3->gl_ops.gl.p_glDisable(VAR_0 + VAR_5);
    }
    FUNC_0("toggle clip distances");
}
