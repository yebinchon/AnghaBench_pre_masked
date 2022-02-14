
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct vo {scalar_t__ dwidth; scalar_t__ dheight; int want_redraw; TYPE_4__* params; TYPE_3__* opts; struct vdpctx* priv; } ;
struct TYPE_6__ {int y1; int y0; int x1; int x0; } ;
struct TYPE_5__ {int y1; int y0; int x1; int x0; } ;
struct vdpctx {long long flip_offset_us; long long flip_offset_fs; long long flip_offset_window; scalar_t__ output_surface_w; scalar_t__ output_surface_h; int rotation; int num_output_surfaces; scalar_t__* output_surfaces; scalar_t__ rotation_surface; int vdp_device; TYPE_2__ src_rect_vid; TYPE_1__ out_rect_vid; int osd_rect; struct vdp_functions* vdp; } ;
struct vdp_functions {scalar_t__ (* output_surface_query_capabilities ) (int ,int ,int *,int *,int *) ;scalar_t__ (* output_surface_destroy ) (scalar_t__) ;scalar_t__ (* output_surface_create ) (int ,int ,scalar_t__,scalar_t__,scalar_t__*) ;} ;
struct mp_rect {int y1; int y0; int x1; int x0; } ;
typedef scalar_t__ VdpStatus ;
typedef int VdpBool ;
struct TYPE_8__ {int rotate; } ;
struct TYPE_7__ {scalar_t__ fullscreen; } ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_2 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_9 (struct vo*,struct mp_rect*,struct mp_rect*,int *) ;
 int FUNC_10 (struct vo*,long long,int) ;

__attribute__((used)) static void FUNC_11(struct vo *VAR_3)
{
    struct vdpctx *VAR_4 = VAR_3->priv;
    struct vdp_functions *VAR_5 = VAR_4->vdp;
    VdpStatus VAR_6;
    struct mp_rect VAR_7;
    struct mp_rect VAR_8;
    FUNC_9(VAR_3, &VAR_7, &VAR_8, &VAR_4->osd_rect);
    VAR_4->out_rect_vid.x0 = VAR_8.x0;
    VAR_4->out_rect_vid.x1 = VAR_8.x1;
    VAR_4->out_rect_vid.y0 = VAR_8.y0;
    VAR_4->out_rect_vid.y1 = VAR_8.y1;
    if (VAR_3->params->rotate == 90 || VAR_3->params->rotate == 270) {
        VAR_4->src_rect_vid.y0 = VAR_7.x0;
        VAR_4->src_rect_vid.y1 = VAR_7.x1;
        VAR_4->src_rect_vid.x0 = VAR_7.y0;
        VAR_4->src_rect_vid.x1 = VAR_7.y1;
    } else {
        VAR_4->src_rect_vid.x0 = VAR_7.x0;
        VAR_4->src_rect_vid.x1 = VAR_7.x1;
        VAR_4->src_rect_vid.y0 = VAR_7.y0;
        VAR_4->src_rect_vid.y1 = VAR_7.y1;
    }

    VdpBool VAR_9;
    uint32_t VAR_10, VAR_11;
    VAR_6 = VAR_5->output_surface_query_capabilities(VAR_4->vdp_device,
                                                    VAR_0,
                                                    &VAR_9, &VAR_10, &VAR_11);
    if (VAR_6 != VAR_2 || !VAR_9)
        return;

    VAR_4->flip_offset_us = VAR_3->opts->fullscreen ?
                         1000LL * VAR_4->flip_offset_fs :
                         1000LL * VAR_4->flip_offset_window;
    FUNC_10(VAR_3, VAR_4->flip_offset_us, 1);

    if (VAR_4->output_surface_w < VAR_3->dwidth || VAR_4->output_surface_h < VAR_3->dheight ||
        VAR_4->rotation != VAR_3->params->rotate)
    {
        VAR_4->output_surface_w = FUNC_2(VAR_10, VAR_4->output_surface_w, VAR_3->dwidth);
        VAR_4->output_surface_h = FUNC_2(VAR_11, VAR_4->output_surface_h, VAR_3->dheight);

        for (int VAR_12 = 0; VAR_12 < VAR_4->num_output_surfaces; VAR_12++)
            if (VAR_4->output_surfaces[VAR_12] != VAR_1) {
                VAR_6 = VAR_5->output_surface_destroy(VAR_4->output_surfaces[VAR_12]);
                FUNC_0(VAR_3, "Error when calling "
                                  "vdp_output_surface_destroy");
            }
        for (int VAR_13 = 0; VAR_13 < VAR_4->num_output_surfaces; VAR_13++) {
            VAR_6 = VAR_5->output_surface_create(VAR_4->vdp_device,
                                                VAR_0,
                                                VAR_4->output_surface_w,
                                                VAR_4->output_surface_h,
                                                &VAR_4->output_surfaces[VAR_13]);
            FUNC_0(VAR_3, "Error when calling vdp_output_surface_create");
            FUNC_1(VAR_3, "vdpau out create: %u\n",
                   VAR_4->output_surfaces[VAR_13]);
        }
        if (VAR_4->rotation_surface != VAR_1) {
            VAR_6 = VAR_5->output_surface_destroy(VAR_4->rotation_surface);
            FUNC_0(VAR_3, "Error when calling "
                              "vdp_output_surface_destroy");
            VAR_4->rotation_surface = VAR_1;
        }
        if (VAR_3->params->rotate == 90 || VAR_3->params->rotate == 270) {
            VAR_6 = VAR_5->output_surface_create(VAR_4->vdp_device,
                                                VAR_0,
                                                VAR_4->output_surface_h,
                                                VAR_4->output_surface_w,
                                                &VAR_4->rotation_surface);
        } else if (VAR_3->params->rotate == 180) {
            VAR_6 = VAR_5->output_surface_create(VAR_4->vdp_device,
                                                VAR_0,
                                                VAR_4->output_surface_w,
                                                VAR_4->output_surface_h,
                                                &VAR_4->rotation_surface);
        }
        FUNC_0(VAR_3, "Error when calling vdp_output_surface_create");
        FUNC_1(VAR_3, "vdpau rotation surface create: %u\n",
               VAR_4->rotation_surface);
    }
    VAR_4->rotation = VAR_3->params->rotate;
    VAR_3->want_redraw = 1;
}
