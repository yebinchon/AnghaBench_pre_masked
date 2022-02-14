
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo {struct vdpctx* priv; } ;
struct vdpctx {size_t surface_num; int * output_surfaces; struct osd_bitmap_surface* osd_surfaces; struct vdp_functions* vdp; } ;
struct vdp_functions {int (* output_surface_render_bitmap_surface ) (int ,int *,int ,int *,int *,TYPE_2__*,int ) ;} ;
struct osd_bitmap_surface {int render_count; scalar_t__ format; TYPE_1__* targets; int surface; } ;
typedef int VdpStatus ;
struct TYPE_5__ {int blend_factor_source_color; int blend_equation_alpha; int blend_equation_color; int blend_factor_destination_alpha; int blend_factor_destination_color; int blend_factor_source_alpha; int struct_version; } ;
typedef TYPE_2__ VdpOutputSurfaceRenderBlendState ;
typedef int VdpOutputSurface ;
struct TYPE_4__ {int color; int source; int dest; } ;


 int FUNC_0 (struct vo*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,int *,int ,int *,int *,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_8, int VAR_9)
{
    struct vdpctx *VAR_10 = VAR_8->priv;
    struct vdp_functions *VAR_11 = VAR_10->vdp;
    VdpStatus VAR_12;
    struct osd_bitmap_surface *VAR_13 = &VAR_10->osd_surfaces[VAR_9];
    VdpOutputSurface VAR_14 = VAR_10->output_surfaces[VAR_10->surface_num];
    int VAR_15;

    VdpOutputSurfaceRenderBlendState VAR_16 = {
        .struct_version = VAR_5,
        .blend_factor_source_color =
            VAR_3,
        .blend_factor_source_alpha =
            VAR_4,
        .blend_factor_destination_color =
            VAR_2,
        .blend_factor_destination_alpha =
            VAR_4,
        .blend_equation_color = VAR_0,
        .blend_equation_alpha = VAR_0,
    };

    VdpOutputSurfaceRenderBlendState VAR_17 = VAR_16;
    VAR_17.blend_factor_source_color =
            VAR_1;

    for (VAR_15 = 0; VAR_15 < VAR_13->render_count; VAR_15++) {
        VdpOutputSurfaceRenderBlendState *VAR_18 = &VAR_16;
        if (VAR_13->format == VAR_7)
            VAR_18 = &VAR_17;
        VAR_12 = VAR_11->
            output_surface_render_bitmap_surface(VAR_14,
                                                 &VAR_13->targets[VAR_15].dest,
                                                 VAR_13->surface,
                                                 &VAR_13->targets[VAR_15].source,
                                                 &VAR_13->targets[VAR_15].color,
                                                 VAR_18,
                                                 VAR_6);
        FUNC_0(VAR_8, "OSD: Error when rendering");
    }
}
