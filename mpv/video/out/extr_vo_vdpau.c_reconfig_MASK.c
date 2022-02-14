
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vo {struct vdpctx* priv; } ;
struct vdpctx {scalar_t__ vid_width; scalar_t__ vid_height; int rgb_mode; int image_format; int vdp_device; struct vdp_functions* vdp; } ;
struct vdp_functions {int (* video_surface_query_capabilities ) (int ,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;} ;
struct mp_image_params {scalar_t__ w; scalar_t__ h; int imgfmt; } ;
typedef int VdpStatus ;
typedef int VdpChromaType ;
typedef scalar_t__ VdpBool ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct vo*) ;
 int FUNC_3 (struct vo*) ;
 scalar_t__ FUNC_4 (struct vo*) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (struct vo*) ;

__attribute__((used)) static int FUNC_9(struct vo *VAR_1, struct mp_image_params *VAR_2)
{
    struct vdpctx *VAR_3 = VAR_1->priv;
    struct vdp_functions *VAR_4 = VAR_3->vdp;
    VdpStatus VAR_5;

    if (!FUNC_2(VAR_1))
        return -1;

    VdpChromaType VAR_6 = VAR_0;
    FUNC_5(VAR_2->imgfmt, &VAR_6, ((void*)0));

    VdpBool VAR_7;
    uint32_t VAR_8, VAR_9;
    VAR_5 = VAR_4->video_surface_query_capabilities(VAR_3->vdp_device, VAR_6,
                                                   &VAR_7, &VAR_8, &VAR_9);
    FUNC_0(VAR_1, "Error when calling vdp_video_surface_query_capabilities");

    if (!VAR_7)
        return -1;
    if (VAR_2->w > VAR_8 || VAR_2->h > VAR_9) {
        if (VAR_7)
            FUNC_1(VAR_1, "Video too large for vdpau.\n");
        return -1;
    }

    VAR_3->image_format = VAR_2->imgfmt;
    VAR_3->vid_width = VAR_2->w;
    VAR_3->vid_height = VAR_2->h;

    VAR_3->rgb_mode = FUNC_6(VAR_2->imgfmt, ((void*)0));

    FUNC_3(VAR_1);

    FUNC_8(VAR_1);

    if (FUNC_4(VAR_1) < 0)
        return -1;

    return 0;
}
