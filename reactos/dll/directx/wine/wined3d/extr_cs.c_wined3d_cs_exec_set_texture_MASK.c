
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


struct TYPE_11__ {int color_key_flags; } ;
struct TYPE_8__ {unsigned int format_flags; int bind_count; struct wined3d_format* format; } ;
struct wined3d_texture {size_t sampler; scalar_t__ target; TYPE_5__ async; TYPE_2__ resource; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_format {int color_fixup; } ;
struct TYPE_10__ {size_t ffp_blend_stages; } ;
struct wined3d_d3d_info {TYPE_4__ limits; } ;
struct wined3d_cs_set_texture {size_t stage; struct wined3d_texture* texture; } ;
struct TYPE_9__ {struct wined3d_texture** textures; } ;
struct wined3d_cs {TYPE_6__* device; TYPE_3__ state; } ;
struct TYPE_12__ {TYPE_1__* adapter; } ;
struct TYPE_7__ {struct wined3d_d3d_info d3d_info; struct wined3d_gl_info gl_info; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (size_t,int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (struct wined3d_gl_info const*,struct wined3d_format const*) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct wined3d_cs *VAR_10, const void *VAR_11)
{
    const struct wined3d_gl_info *VAR_12 = &VAR_10->device->adapter->gl_info;
    const struct wined3d_d3d_info *VAR_13 = &VAR_10->device->adapter->d3d_info;
    const struct wined3d_cs_set_texture *VAR_14 = VAR_11;
    struct wined3d_texture *VAR_15;
    BOOL VAR_16 = VAR_0, VAR_17 = VAR_0;

    VAR_15 = VAR_10->state.textures[VAR_14->stage];
    VAR_10->state.textures[VAR_14->stage] = VAR_14->texture;

    if (VAR_14->texture)
    {
        const struct wined3d_format *VAR_18 = VAR_14->texture->resource.format;
        const struct wined3d_format *VAR_19 = VAR_15 ? VAR_15->resource.format : ((void*)0);
        unsigned int VAR_20 = VAR_15 ? VAR_15->resource.format_flags : 0;
        unsigned int VAR_21 = VAR_14->texture->resource.format_flags;

        if (FUNC_1(&VAR_14->texture->resource.bind_count) == 1)
            VAR_14->texture->sampler = VAR_14->stage;

        if (!VAR_15 || VAR_14->texture->target != VAR_15->target
                || (!FUNC_9(VAR_18->color_fixup, VAR_19->color_fixup)
                && !(FUNC_7(VAR_12, VAR_18) && FUNC_7(VAR_12, VAR_19)))
                || (VAR_21 & VAR_4) != (VAR_20 & VAR_4))
            FUNC_8(VAR_10->device, FUNC_4(VAR_7));

        if (!VAR_15 && VAR_14->stage < VAR_13->limits.ffp_blend_stages)
        {



            FUNC_8(VAR_10->device, FUNC_5(VAR_14->stage, VAR_9));
            FUNC_8(VAR_10->device, FUNC_5(VAR_14->stage, VAR_8));
        }

        if (!VAR_14->stage && VAR_14->texture->async.color_key_flags & VAR_5)
            VAR_17 = VAR_3;
    }

    if (VAR_15)
    {
        if (FUNC_0(&VAR_15->resource.bind_count) && VAR_15->sampler == VAR_14->stage)
        {
            unsigned int VAR_22;



            FUNC_6("Searching for other stages the texture is bound to.\n");
            for (VAR_22 = 0; VAR_22 < VAR_1; ++VAR_22)
            {
                if (VAR_10->state.textures[VAR_22] == VAR_15)
                {
                    FUNC_6("Texture is also bound to stage %u.\n", VAR_22);
                    VAR_15->sampler = VAR_22;
                    break;
                }
            }
        }

        if (!VAR_14->texture && VAR_14->stage < VAR_13->limits.ffp_blend_stages)
        {
            FUNC_8(VAR_10->device, FUNC_5(VAR_14->stage, VAR_9));
            FUNC_8(VAR_10->device, FUNC_5(VAR_14->stage, VAR_8));
        }

        if (!VAR_14->stage && VAR_15->async.color_key_flags & VAR_5)
            VAR_16 = VAR_3;
    }

    FUNC_8(VAR_10->device, FUNC_3(VAR_14->stage));

    if (VAR_17 != VAR_16)
        FUNC_8(VAR_10->device, FUNC_2(VAR_6));

    if (VAR_17)
        FUNC_8(VAR_10->device, VAR_2);
}
