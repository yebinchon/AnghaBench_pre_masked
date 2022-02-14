
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float width; float height; } ;
struct wined3d_state {TYPE_1__ viewport; } ;
struct wined3d_context {scalar_t__ render_offscreen; TYPE_2__* d3d_info; } ;
struct TYPE_4__ {int wined3d_creation_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(const struct wined3d_context *VAR_1,
        const struct wined3d_state *VAR_2, float *VAR_3)
{
    float VAR_4;

    if (VAR_1->d3d_info->wined3d_creation_flags & VAR_0)
        VAR_4 = 63.0f / 64.0f;
    else
        VAR_4 = -1.0f / 64.0f;

    VAR_3[0] = 1.0f;
    VAR_3[1] = 1.0f;
    VAR_3[2] = VAR_4 / VAR_2->viewport.width;
    VAR_3[3] = -VAR_4 / VAR_2->viewport.height;

    if (VAR_1->render_offscreen)
    {
        VAR_3[1] *= -1.0f;
        VAR_3[3] *= -1.0f;
    }
}
