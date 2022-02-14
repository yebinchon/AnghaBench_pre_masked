
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct vdp_functions {int (* video_surface_get_parameters ) (intptr_t,int *,int*,int*) ;} ;
struct ra_tex_params {int dimensions; int w; int h; int d; int render_src; int src_linear; int format; } ;
struct TYPE_7__ {int w; int h; } ;
struct ra_hwdec_mapper {void** tex; int ra; TYPE_2__ src_params; TYPE_4__* src; struct priv* priv; } ;
struct TYPE_6__ {int chroma_w; int chroma_h; } ;
struct priv {int mapped; int * gl_textures; int vdpgl_surface; int vdp_surface; int mixer; TYPE_1__ direct_desc; scalar_t__ direct_mode; int preemption_counter; TYPE_5__* ctx; TYPE_3__* gl; } ;
typedef intptr_t VdpVideoSurface ;
typedef int VdpStatus ;
typedef int VdpChromaType ;
struct TYPE_10__ {struct vdp_functions vdp; } ;
struct TYPE_9__ {int * planes; } ;
struct TYPE_8__ {int (* VDPAUMapSurfacesNV ) (int,int *) ;int (* VDPAUSurfaceAccessNV ) (int ,int ) ;int (* VDPAURegisterVideoSurfaceNV ) (int ,int ,int,int *) ;} ;
typedef TYPE_3__ GL ;


 int FUNC_0 (intptr_t) ;
 int FUNC_1 (struct ra_hwdec_mapper*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ra_hwdec_mapper*) ;
 int FUNC_3 (struct ra_hwdec_mapper*) ;
 int FUNC_4 (struct ra_hwdec_mapper*) ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (int ,int *,int ,int *,TYPE_4__*,int *) ;
 void* FUNC_7 (int ,struct ra_tex_params*,int ) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (intptr_t,int *,int*,int*) ;
 int FUNC_10 (int ,int ,int,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int,int *) ;
 int FUNC_13 (int,int *) ;

__attribute__((used)) static int FUNC_14(struct ra_hwdec_mapper *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    GL *VAR_4 = VAR_3->gl;
    struct vdp_functions *VAR_5 = &VAR_3->ctx->vdp;
    VdpStatus VAR_6;

    int VAR_7 = FUNC_5(VAR_3->ctx, &VAR_3->preemption_counter);
    if (VAR_7 < 1) {
        FUNC_4(VAR_2);
        if (VAR_7 < 0)
            return -1;
        FUNC_3(VAR_2);
        if (FUNC_2(VAR_2) < 0)
            return -1;
    }

    if (VAR_3->direct_mode) {
        VdpVideoSurface VAR_8 = (intptr_t)VAR_2->src->planes[3];


        VdpChromaType VAR_9;
        uint32_t VAR_10, VAR_11;
        VAR_6 = VAR_5->video_surface_get_parameters(VAR_8, &VAR_9, &VAR_10, &VAR_11);
        FUNC_1(VAR_2, "Error when calling vdp_video_surface_get_parameters");

        VAR_3->vdpgl_surface = VAR_4->VDPAURegisterVideoSurfaceNV(FUNC_0(VAR_8),
                                                           VAR_1,
                                                           4, VAR_3->gl_textures);
        if (!VAR_3->vdpgl_surface)
            return -1;

        VAR_4->VDPAUSurfaceAccessNV(VAR_3->vdpgl_surface, VAR_0);
        VAR_4->VDPAUMapSurfacesNV(1, &VAR_3->vdpgl_surface);

        VAR_3->mapped = 1;

        for (int VAR_12 = 0; VAR_12 < 4; VAR_12++) {
            bool VAR_13 = VAR_12 >= 2;
            int VAR_14 = VAR_13 ? VAR_3->direct_desc.chroma_w : 1;
            int VAR_15 = VAR_13 ? VAR_3->direct_desc.chroma_h * 2 : 2;

            struct ra_tex_params VAR_16 = {
                .dimensions = 2,
                .w = VAR_10 / VAR_14,
                .h = VAR_11 / VAR_15,
                .d = 1,
                .format = FUNC_8(VAR_2->ra, 1, VAR_13 ? 2 : 1),
                .render_src = 1,
            };

            if (!VAR_16.format)
                return -1;

            VAR_2->tex[VAR_12] =
                FUNC_7(VAR_2->ra, &VAR_16, VAR_3->gl_textures[VAR_12]);
            if (!VAR_2->tex[VAR_12])
                return -1;
        }
    } else {
        if (!VAR_3->vdpgl_surface)
            return -1;

        FUNC_6(VAR_3->mixer, ((void*)0), VAR_3->vdp_surface, ((void*)0), VAR_2->src,
                              ((void*)0));

        VAR_4->VDPAUMapSurfacesNV(1, &VAR_3->vdpgl_surface);

        VAR_3->mapped = 1;

        struct ra_tex_params VAR_17 = {
            .dimensions = 2,
            .w = VAR_2->src_params.w,
            .h = VAR_2->src_params.h,
            .d = 1,
            .format = FUNC_8(VAR_2->ra, 1, 4),
            .render_src = 1,
            .src_linear = 1,
        };

        if (!VAR_17.format)
            return -1;

        VAR_2->tex[0] =
            FUNC_7(VAR_2->ra, &VAR_17, VAR_3->gl_textures[0]);
        if (!VAR_2->tex[0])
            return -1;
    }

    return 0;
}
