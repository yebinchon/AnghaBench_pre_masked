
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vo {int params; struct vdpctx* priv; } ;
struct vdpctx {struct vdp_functions* vdp; } ;
struct vdp_functions {scalar_t__ (* output_surface_get_parameters ) (int ,scalar_t__*,int *,int *) ;scalar_t__ (* output_surface_get_bits_native ) (int ,int *,void**,int *) ;} ;
struct mp_image {void** planes; int * stride; } ;
typedef scalar_t__ VdpStatus ;
typedef scalar_t__ VdpRGBAFormat ;
typedef int VdpOutputSurface ;


 int FUNC_0 (struct vo*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 struct mp_image* FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int *,void**,int *) ;

__attribute__((used)) static struct mp_image *FUNC_5(struct vo *VAR_3,
                                            VdpOutputSurface VAR_4)
{
    struct vdpctx *VAR_5 = VAR_3->priv;
    VdpStatus VAR_6;
    struct vdp_functions *VAR_7 = VAR_5->vdp;
    if (!VAR_3->params)
        return ((void*)0);

    VdpRGBAFormat VAR_8;
    uint32_t VAR_9, VAR_10;
    VAR_6 = VAR_7->output_surface_get_parameters(VAR_4, &VAR_8, &VAR_9, &VAR_10);
    if (VAR_6 != VAR_2)
        return ((void*)0);

    FUNC_1(VAR_8 == VAR_1);

    struct mp_image *VAR_11 = FUNC_2(VAR_0, VAR_9, VAR_10);
    if (!VAR_11)
        return ((void*)0);

    void *VAR_12[] = { VAR_11->planes[0] };
    uint32_t VAR_13[] = { VAR_11->stride[0] };
    VAR_6 = VAR_7->output_surface_get_bits_native(VAR_4, ((void*)0), VAR_12,
                                                 VAR_13);
    FUNC_0(VAR_3, "Error when calling vdp_output_surface_get_bits_native");

    return VAR_11;
}
