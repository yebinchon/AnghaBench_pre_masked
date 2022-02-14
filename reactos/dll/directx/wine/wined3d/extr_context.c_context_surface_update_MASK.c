
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_surface {TYPE_4__* container; } ;
struct TYPE_7__ {int buffers; } ;
struct wined3d_gl_info {TYPE_1__ limits; } ;
struct wined3d_context {scalar_t__ rebind_fbo; struct fbo_entry* current_fbo; struct wined3d_gl_info* gl_info; } ;
struct TYPE_12__ {TYPE_5__* objects; } ;
struct fbo_entry {TYPE_6__ key; } ;
struct TYPE_11__ {scalar_t__ object; } ;
struct TYPE_9__ {scalar_t__ name; } ;
struct TYPE_8__ {scalar_t__ name; } ;
struct TYPE_10__ {TYPE_3__ texture_srgb; TYPE_2__ texture_rgb; } ;


 int FUNC_0 (char*,struct wined3d_surface const*,unsigned int) ;
 scalar_t__ VAR_0 ;

void FUNC_1(struct wined3d_context *VAR_1, const struct wined3d_surface *VAR_2)
{
    const struct wined3d_gl_info *VAR_3 = VAR_1->gl_info;
    struct fbo_entry *VAR_4 = VAR_1->current_fbo;
    unsigned int VAR_5;

    if (!VAR_4 || VAR_1->rebind_fbo) return;

    for (VAR_5 = 0; VAR_5 < VAR_3->limits.buffers + 1; ++VAR_5)
    {
        if (VAR_2->container->texture_rgb.name == VAR_4->key.objects[VAR_5].object
                || VAR_2->container->texture_srgb.name == VAR_4->key.objects[VAR_5].object)
        {
            FUNC_0("Updated surface %p is bound as attachment %u to the current FBO.\n", VAR_2, VAR_5);
            VAR_1->rebind_fbo = VAR_0;
            return;
        }
    }
}
