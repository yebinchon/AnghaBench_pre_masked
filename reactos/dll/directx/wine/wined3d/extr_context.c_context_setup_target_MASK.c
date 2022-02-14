
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ name; } ;
struct TYPE_8__ {int format_flags; struct wined3d_format* format; } ;
struct wined3d_texture {TYPE_1__ texture_srgb; TYPE_4__ resource; } ;
struct wined3d_format {scalar_t__ id; scalar_t__ alpha_size; } ;
struct TYPE_6__ {unsigned int sub_resource_idx; struct wined3d_texture* texture; } ;
struct wined3d_context {scalar_t__ render_offscreen; TYPE_2__ current_rt; } ;
struct TYPE_7__ {scalar_t__ offscreen_rendering_mode; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct wined3d_context*,int ) ;
 int FUNC_2 (struct wined3d_context*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 TYPE_3__ VAR_8 ;
 int FUNC_4 (struct wined3d_texture*,unsigned int,int ) ;
 int FUNC_5 (struct wined3d_texture*,struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_6(struct wined3d_context *VAR_9,
        struct wined3d_texture *VAR_10, unsigned int VAR_11)
{
    BOOL VAR_12 = VAR_9->render_offscreen, VAR_13;

    VAR_13 = FUNC_3(&VAR_10->resource);
    if (VAR_9->current_rt.texture == VAR_10
            && VAR_9->current_rt.sub_resource_idx == VAR_11
            && VAR_13 == VAR_12)
        return;



    if (!VAR_9->current_rt.texture)
    {
        FUNC_1(VAR_9, FUNC_0(VAR_6));
    }
    else
    {
        const struct wined3d_format *VAR_14 = VAR_9->current_rt.texture->resource.format;
        const struct wined3d_format *VAR_15 = VAR_10->resource.format;

        if (VAR_14->id != VAR_15->id)
        {

            if ((VAR_14->alpha_size && !VAR_15->alpha_size) || (!VAR_14->alpha_size && VAR_15->alpha_size)
                    || !(VAR_10->resource.format_flags & VAR_3))
                FUNC_1(VAR_9, FUNC_0(VAR_6));


            if ((VAR_9->current_rt.texture->resource.format_flags & VAR_4)
                    != (VAR_10->resource.format_flags & VAR_4))
                FUNC_1(VAR_9, FUNC_0(VAR_7));
        }
        if (VAR_8.offscreen_rendering_mode != VAR_1
                && VAR_12 && (VAR_9->current_rt.texture != VAR_10
                || VAR_9->current_rt.sub_resource_idx != VAR_11))
        {
            unsigned int VAR_16 = VAR_9->current_rt.sub_resource_idx;
            struct wined3d_texture *VAR_17 = VAR_9->current_rt.texture;


            if (VAR_17->texture_srgb.name)
                FUNC_5(VAR_17, VAR_9, VAR_2);
            FUNC_5(VAR_17, VAR_9, VAR_0);
            FUNC_4(VAR_17, VAR_16, VAR_5);
        }
    }

    VAR_9->current_rt.texture = VAR_10;
    VAR_9->current_rt.sub_resource_idx = VAR_11;
    FUNC_2(VAR_9, VAR_13);
}
