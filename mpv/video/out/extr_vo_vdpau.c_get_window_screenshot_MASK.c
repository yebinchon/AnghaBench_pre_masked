
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {scalar_t__ dwidth; scalar_t__ dheight; struct vdpctx* priv; } ;
struct vdpctx {int * output_surfaces; int num_output_surfaces; int surface_num; } ;
struct mp_image {scalar_t__ w; scalar_t__ h; } ;
typedef int VdpOutputSurface ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct mp_image*,scalar_t__,scalar_t__) ;
 struct mp_image* FUNC_2 (struct vo*,int ) ;

__attribute__((used)) static struct mp_image *FUNC_3(struct vo *VAR_0)
{
    struct vdpctx *VAR_1 = VAR_0->priv;
    int VAR_2 = FUNC_0(VAR_1->surface_num, -1, VAR_1->num_output_surfaces);
    VdpOutputSurface VAR_3 = VAR_1->output_surfaces[VAR_2];
    struct mp_image *VAR_4 = FUNC_2(VAR_0, VAR_3);
    if (VAR_4 && VAR_4->w >= VAR_0->dwidth && VAR_4->h >= VAR_0->dheight)
        FUNC_1(VAR_4, VAR_0->dwidth, VAR_0->dheight);
    return VAR_4;
}
