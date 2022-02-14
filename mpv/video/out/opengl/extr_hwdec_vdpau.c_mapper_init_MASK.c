
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct vdp_functions {int (* output_surface_create ) (int ,int ,int ,int ,int *) ;} ;
struct TYPE_10__ {int hw_subfmt; int imgfmt; int h; int w; } ;
struct ra_hwdec_mapper {int vdpau_fields; int log; TYPE_2__ dst_params; TYPE_2__ src_params; int ra; struct priv* priv; TYPE_1__* owner; } ;
struct priv_owner {TYPE_6__* ctx; } ;
struct TYPE_12__ {int chroma_w; } ;
struct priv {int vdpgl_initialized; int direct_mode; int vdpgl_surface; int * gl_textures; int vdp_surface; TYPE_6__* ctx; TYPE_5__ direct_desc; int preemption_counter; int mixer; TYPE_3__* gl; } ;
typedef int VdpStatus ;
struct TYPE_13__ {int vdp_device; int get_proc_address; struct vdp_functions vdp; } ;
struct TYPE_11__ {int (* VDPAUSurfaceAccessNV ) (int ,int ) ;int (* VDPAURegisterOutputSurfaceNV ) (int ,int ,int,int *) ;int (* BindTexture ) (int ,int ) ;int (* TexParameteri ) (int ,int ,int ) ;int (* GenTextures ) (int,int *) ;int (* VDPAUInitNV ) (int ,int ) ;} ;
struct TYPE_9__ {struct priv_owner* priv; } ;
typedef TYPE_3__ GL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ra_hwdec_mapper*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct ra_hwdec_mapper*,char*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_6__*,int *) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (int ,int,TYPE_5__*) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int ,int ,int *) ;
 int FUNC_16 (int ,int ,int,int *) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int,int *) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int FUNC_21 (int ,int ,int ) ;
 int FUNC_22 (int ,int ,int ) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ) ;

__attribute__((used)) static int FUNC_26(struct ra_hwdec_mapper *VAR_16)
{
    struct priv_owner *VAR_17 = VAR_16->owner->priv;
    struct priv *VAR_18 = VAR_16->priv;

    VAR_18->gl = FUNC_8(VAR_16->ra);
    VAR_18->ctx = VAR_17->ctx;

    GL *VAR_19 = VAR_18->gl;
    struct vdp_functions *VAR_20 = &VAR_18->ctx->vdp;
    VdpStatus VAR_21;

    VAR_18->vdp_surface = VAR_14;
    VAR_18->mixer = FUNC_6(VAR_18->ctx, VAR_16->log);
    if (!VAR_18->mixer)
        return -1;

    VAR_16->dst_params = VAR_16->src_params;

    if (FUNC_5(VAR_18->ctx, &VAR_18->preemption_counter) < 0)
        return -1;

    VAR_19->VDPAUInitNV(FUNC_0(VAR_18->ctx->vdp_device), VAR_18->ctx->get_proc_address);

    VAR_18->vdpgl_initialized = 1;

    VAR_18->direct_mode = VAR_16->dst_params.hw_subfmt == VAR_11 ||
                     VAR_16->dst_params.hw_subfmt == VAR_12 ||
                     VAR_16->dst_params.hw_subfmt == VAR_9 ||
                     VAR_16->dst_params.hw_subfmt == VAR_10;
    VAR_16->vdpau_fields = VAR_18->direct_mode;

    VAR_19->GenTextures(4, VAR_18->gl_textures);

    if (VAR_18->direct_mode) {
        int VAR_22 = VAR_16->dst_params.hw_subfmt;
        if (!FUNC_7(VAR_16->ra, VAR_22, &VAR_18->direct_desc)) {
            FUNC_2(VAR_16, "Unsupported format: %s\n", FUNC_4(VAR_22));
            return -1;
        }
        VAR_16->dst_params.imgfmt = VAR_18->direct_desc.chroma_w == 1 ?
                                    VAR_12 : VAR_11;
        VAR_16->dst_params.hw_subfmt = 0;

        for (int VAR_23 = 0; VAR_23 < 4; VAR_23++) {
            VAR_19->BindTexture(VAR_4, VAR_18->gl_textures[VAR_23]);
            VAR_19->TexParameteri(VAR_4, VAR_6, VAR_2);
            VAR_19->TexParameteri(VAR_4, VAR_5, VAR_2);
            VAR_19->TexParameteri(VAR_4, VAR_7, VAR_0);
            VAR_19->TexParameteri(VAR_4, VAR_8, VAR_0);
            VAR_19->BindTexture(VAR_4, 0);
        }
    } else {
        VAR_19->BindTexture(VAR_4, VAR_18->gl_textures[0]);
        VAR_19->TexParameteri(VAR_4, VAR_6, VAR_1);
        VAR_19->TexParameteri(VAR_4, VAR_5, VAR_1);
        VAR_19->TexParameteri(VAR_4, VAR_7, VAR_0);
        VAR_19->TexParameteri(VAR_4, VAR_8, VAR_0);
        VAR_19->BindTexture(VAR_4, 0);

        VAR_21 = VAR_20->output_surface_create(VAR_18->ctx->vdp_device,
                                            VAR_15,
                                            VAR_16->src_params.w,
                                            VAR_16->src_params.h,
                                            &VAR_18->vdp_surface);
        FUNC_1(VAR_16, "Error when calling vdp_output_surface_create");

        VAR_18->vdpgl_surface = VAR_19->VDPAURegisterOutputSurfaceNV(FUNC_0(VAR_18->vdp_surface),
                                                            VAR_4,
                                                            1, VAR_18->gl_textures);
        if (!VAR_18->vdpgl_surface)
            return -1;

        VAR_19->VDPAUSurfaceAccessNV(VAR_18->vdpgl_surface, VAR_3);

        VAR_16->dst_params.imgfmt = VAR_13;
        VAR_16->dst_params.hw_subfmt = 0;
    }

    FUNC_3(VAR_19, VAR_16->log, "After initializing vdpau OpenGL interop");

    return 0;
}
