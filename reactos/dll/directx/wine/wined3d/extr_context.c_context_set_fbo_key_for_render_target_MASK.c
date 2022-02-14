
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


struct wined3d_texture {unsigned int level_count; void* rb_resolved; void* rb_multisample; TYPE_4__* sub_resources; } ;
struct wined3d_surface {TYPE_5__* current_renderbuffer; } ;
struct wined3d_resource {scalar_t__ type; TYPE_1__* format; } ;
struct TYPE_8__ {int target; void* name; } ;
struct wined3d_rendertarget_info {unsigned int sub_resource_idx; int layer_count; TYPE_2__ gl_view; struct wined3d_resource* resource; } ;
struct wined3d_fbo_entry_key {int rb_namespace; TYPE_6__* objects; } ;
struct wined3d_context {int dummy; } ;
struct TYPE_12__ {unsigned int level; unsigned int layer; int target; void* object; } ;
struct TYPE_11__ {void* id; } ;
struct TYPE_9__ {struct wined3d_surface* surface; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
struct TYPE_7__ {scalar_t__ id; } ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;




 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 struct wined3d_texture* FUNC_2 (struct wined3d_resource*) ;
 int FUNC_3 (struct wined3d_texture*,unsigned int) ;
 void* FUNC_4 (struct wined3d_texture*,struct wined3d_context const*,int ) ;

__attribute__((used)) static inline void FUNC_5(const struct wined3d_context *VAR_6,
        struct wined3d_fbo_entry_key *VAR_7, unsigned int VAR_8, const struct wined3d_rendertarget_info *VAR_9,
        DWORD VAR_10)
{
    unsigned int VAR_11 = VAR_9->sub_resource_idx;
    struct wined3d_resource *VAR_12 = VAR_9->resource;
    struct wined3d_texture *VAR_13;

    if (!VAR_12 || VAR_12->format->id == VAR_2 || VAR_12->type == VAR_4)
    {
        if (VAR_12 && VAR_12->type == VAR_4)
            FUNC_0("Not implemented for %s resources.\n", FUNC_1(VAR_12->type));
        VAR_7->objects[VAR_8].object = 0;
        VAR_7->objects[VAR_8].target = 0;
        VAR_7->objects[VAR_8].level = VAR_7->objects[VAR_8].layer = 0;
        return;
    }

    if (VAR_9->gl_view.name)
    {
        VAR_7->objects[VAR_8].object = VAR_9->gl_view.name;
        VAR_7->objects[VAR_8].target = VAR_9->gl_view.target;
        VAR_7->objects[VAR_8].level = 0;
        VAR_7->objects[VAR_8].layer = VAR_3;
        return;
    }

    VAR_13 = FUNC_2(VAR_12);
    if (VAR_12->type == VAR_5)
    {
        struct wined3d_surface *VAR_14 = VAR_13->sub_resources[VAR_11].u.surface;

        if (VAR_14->current_renderbuffer)
        {
            VAR_7->objects[VAR_8].object = VAR_14->current_renderbuffer->id;
            VAR_7->objects[VAR_8].target = 0;
            VAR_7->objects[VAR_8].level = VAR_7->objects[VAR_8].layer = 0;
            VAR_7->rb_namespace |= 1 << VAR_8;
            return;
        }
    }
    VAR_7->objects[VAR_8].target = FUNC_3(VAR_13, VAR_11);
    VAR_7->objects[VAR_8].level = VAR_11 % VAR_13->level_count;
    VAR_7->objects[VAR_8].layer = VAR_11 / VAR_13->level_count;

    if (VAR_9->layer_count != 1)
        VAR_7->objects[VAR_8].layer = VAR_3;

    switch (VAR_10)
    {
        case 129:
            VAR_7->objects[VAR_8].object = FUNC_4(VAR_13, VAR_6, VAR_0);
            break;

        case 128:
            VAR_7->objects[VAR_8].object = FUNC_4(VAR_13, VAR_6, VAR_1);
            break;

        case 131:
            VAR_7->objects[VAR_8].object = VAR_13->rb_multisample;
            VAR_7->objects[VAR_8].target = 0;
            VAR_7->objects[VAR_8].level = VAR_7->objects[VAR_8].layer = 0;
            VAR_7->rb_namespace |= 1 << VAR_8;
            break;

        case 130:
            VAR_7->objects[VAR_8].object = VAR_13->rb_resolved;
            VAR_7->objects[VAR_8].target = 0;
            VAR_7->objects[VAR_8].level = VAR_7->objects[VAR_8].layer = 0;
            VAR_7->rb_namespace |= 1 << VAR_8;
            break;
    }
}
