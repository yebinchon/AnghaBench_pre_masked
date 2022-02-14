
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ level_idx; } ;
struct TYPE_13__ {TYPE_4__ texture; } ;
struct TYPE_14__ {TYPE_5__ u; } ;
struct TYPE_11__ {scalar_t__ name; } ;
struct wined3d_unordered_access_view {scalar_t__ counter_bo; TYPE_7__* format; TYPE_6__ desc; TYPE_8__* resource; TYPE_3__ gl_view; } ;
struct wined3d_texture {int dummy; } ;
struct TYPE_10__ {TYPE_1__* uav_resource_info; } ;
struct wined3d_shader {TYPE_2__ reg_maps; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_16__ {scalar_t__ type; } ;
struct TYPE_15__ {int glInternal; } ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (char*,unsigned int) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,unsigned int,scalar_t__) ;
 int FUNC_5 (unsigned int,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 struct wined3d_texture* FUNC_6 (TYPE_8__*) ;
 scalar_t__ FUNC_7 (struct wined3d_texture*,struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_8(struct wined3d_context *VAR_8,
        const struct wined3d_shader *VAR_9, struct wined3d_unordered_access_view * const *VAR_10)
{
    const struct wined3d_gl_info *VAR_11 = VAR_8->gl_info;
    struct wined3d_unordered_access_view *VAR_12;
    GLuint VAR_13;
    unsigned int VAR_14;
    GLint VAR_15;

    if (!VAR_9)
        return;

    for (VAR_14 = 0; VAR_14 < VAR_6; ++VAR_14)
    {
        if (!(VAR_12 = VAR_10[VAR_14]))
        {
            if (VAR_9->reg_maps.uav_resource_info[VAR_14].type)
                FUNC_2("No unordered access view bound at index %u.\n", VAR_14);
            FUNC_1(FUNC_5(VAR_14, 0, 0, VAR_2, 0, VAR_4, VAR_3));
            continue;
        }

        if (VAR_12->gl_view.name)
        {
            VAR_13 = VAR_12->gl_view.name;
            VAR_15 = 0;
        }
        else if (VAR_12->resource->type != VAR_7)
        {
            struct wined3d_texture *VAR_16 = FUNC_6(VAR_12->resource);
            VAR_13 = FUNC_7(VAR_16, VAR_8, VAR_0);
            VAR_15 = VAR_12->desc.u.texture.level_idx;
        }
        else
        {
            FUNC_0("Unsupported buffer unordered access view.\n");
            FUNC_1(FUNC_5(VAR_14, 0, 0, VAR_2, 0, VAR_4, VAR_3));
            continue;
        }

        FUNC_1(FUNC_5(VAR_14, VAR_13, VAR_15, VAR_5, 0, VAR_4,
                VAR_12->format->glInternal));

        if (VAR_12->counter_bo)
            FUNC_1(FUNC_4(VAR_1, VAR_14, VAR_12->counter_bo));
    }
    FUNC_3("Bind unordered access views");
}
