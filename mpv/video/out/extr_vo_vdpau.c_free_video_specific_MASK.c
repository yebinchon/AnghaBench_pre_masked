
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct vdpctx* priv; } ;
struct vdpctx {scalar_t__ black_pixel; struct vdp_functions* vdp; } ;
struct vdp_functions {int (* output_surface_destroy ) (scalar_t__) ;} ;
typedef int VdpStatus ;


 int FUNC_0 (struct vo*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct vo*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_1)
{
    struct vdpctx *VAR_2 = VAR_1->priv;
    struct vdp_functions *VAR_3 = VAR_2->vdp;
    VdpStatus VAR_4;

    FUNC_1(VAR_1, 0);

    if (VAR_2->black_pixel != VAR_0) {
        VAR_4 = VAR_3->output_surface_destroy(VAR_2->black_pixel);
        FUNC_0(VAR_1, "Error when calling vdp_output_surface_destroy");
    }
    VAR_2->black_pixel = VAR_0;
}
