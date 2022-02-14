
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct vdpctx* priv; } ;
struct vdpctx {scalar_t__ flip_queue; scalar_t__ flip_target; int num_output_surfaces; scalar_t__* output_surfaces; scalar_t__ rotation_surface; int * mpvdp; struct osd_bitmap_surface* osd_surfaces; struct vdp_functions* vdp; } ;
struct vdp_functions {int (* bitmap_surface_destroy ) (scalar_t__) ;int (* output_surface_destroy ) (scalar_t__) ;int (* presentation_queue_target_destroy ) (scalar_t__) ;int (* presentation_queue_destroy ) (scalar_t__) ;} ;
struct osd_bitmap_surface {scalar_t__ surface; } ;
typedef int VdpStatus ;


 int FUNC_0 (struct vo*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct vo*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct vo *VAR_2)
{
    struct vdpctx *VAR_3 = VAR_2->priv;
    struct vdp_functions *VAR_4 = VAR_3->vdp;

    VdpStatus VAR_5;

    FUNC_1(VAR_2);

    if (VAR_3->flip_queue != VAR_1) {
        VAR_5 = VAR_4->presentation_queue_destroy(VAR_3->flip_queue);
        FUNC_0(VAR_2, "Error when calling vdp_presentation_queue_destroy");
    }

    if (VAR_3->flip_target != VAR_1) {
        VAR_5 = VAR_4->presentation_queue_target_destroy(VAR_3->flip_target);
        FUNC_0(VAR_2, "Error when calling "
                         "vdp_presentation_queue_target_destroy");
    }

    for (int VAR_6 = 0; VAR_6 < VAR_3->num_output_surfaces; VAR_6++) {
        if (VAR_3->output_surfaces[VAR_6] == VAR_1)
            continue;
        VAR_5 = VAR_4->output_surface_destroy(VAR_3->output_surfaces[VAR_6]);
        FUNC_0(VAR_2, "Error when calling vdp_output_surface_destroy");
    }
    if (VAR_3->rotation_surface != VAR_1) {
        VAR_5 = VAR_4->output_surface_destroy(VAR_3->rotation_surface);
        FUNC_0(VAR_2, "Error when calling vdp_output_surface_destroy");
    }

    for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        struct osd_bitmap_surface *VAR_8 = &VAR_3->osd_surfaces[VAR_7];
        if (VAR_8->surface != VAR_1) {
            VAR_5 = VAR_4->bitmap_surface_destroy(VAR_8->surface);
            FUNC_0(VAR_2, "Error when calling vdp_bitmap_surface_destroy");
        }
    }

    FUNC_2(VAR_3->mpvdp);
    VAR_3->mpvdp = ((void*)0);
}
