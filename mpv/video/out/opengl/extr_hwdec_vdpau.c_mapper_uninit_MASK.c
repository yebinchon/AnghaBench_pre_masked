
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vdp_functions {int (* output_surface_destroy ) (scalar_t__) ;} ;
struct ra_hwdec_mapper {int log; struct priv* priv; } ;
struct priv {scalar_t__ vdp_surface; int vdpgl_initialized; int mixer; int gl_textures; scalar_t__ vdpgl_surface; int mapped; TYPE_1__* ctx; TYPE_2__* gl; } ;
typedef int VdpStatus ;
struct TYPE_5__ {int (* VDPAUFiniNV ) () ;int (* DeleteTextures ) (int,int ) ;int (* VDPAUUnregisterSurfaceNV ) (scalar_t__) ;} ;
struct TYPE_4__ {struct vdp_functions vdp; } ;
typedef TYPE_2__ GL ;


 int FUNC_0 (struct ra_hwdec_mapper*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct ra_hwdec_mapper *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    GL *VAR_3 = VAR_2->gl;
    struct vdp_functions *VAR_4 = &VAR_2->ctx->vdp;
    VdpStatus VAR_5;

    FUNC_1(!VAR_2->mapped);

    if (VAR_2->vdpgl_surface)
        VAR_3->VDPAUUnregisterSurfaceNV(VAR_2->vdpgl_surface);
    VAR_2->vdpgl_surface = 0;

    VAR_3->DeleteTextures(4, VAR_2->gl_textures);

    if (VAR_2->vdp_surface != VAR_0) {
        VAR_5 = VAR_4->output_surface_destroy(VAR_2->vdp_surface);
        FUNC_0(VAR_1, "Error when calling vdp_output_surface_destroy");
    }
    VAR_2->vdp_surface = VAR_0;

    FUNC_2(VAR_3, VAR_1->log, "Before uninitializing OpenGL interop");

    if (VAR_2->vdpgl_initialized)
        VAR_3->VDPAUFiniNV();

    VAR_2->vdpgl_initialized = 0;

    FUNC_2(VAR_3, VAR_1->log, "After uninitializing OpenGL interop");

    FUNC_3(VAR_2->mixer);
}
