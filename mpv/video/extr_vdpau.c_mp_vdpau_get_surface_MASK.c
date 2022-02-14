
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdp_functions {int (* video_surface_create ) (int ,scalar_t__,int,int,scalar_t__*) ;int (* output_surface_create ) (int ,scalar_t__,int,int,scalar_t__*) ;int (* video_surface_destroy ) (scalar_t__) ;int (* output_surface_destroy ) (scalar_t__) ;} ;
struct surface_entry {int allocated; int w; int h; int rgb; scalar_t__ chroma; scalar_t__ rgb_format; scalar_t__ osurface; scalar_t__ surface; scalar_t__ age; int in_use; } ;
struct mp_vdpau_ctx {int pool_lock; int vdp_device; struct surface_entry* video_surfaces; struct vdp_functions vdp; } ;
struct mp_image {int dummy; } ;
typedef int VdpStatus ;
typedef scalar_t__ VdpRGBAFormat ;
typedef scalar_t__ VdpChromaType ;


 int FUNC_0 (struct mp_vdpau_ctx*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct mp_vdpau_ctx*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 struct mp_image* FUNC_3 (struct mp_vdpau_ctx*,int) ;
 scalar_t__ FUNC_4 (struct mp_vdpau_ctx*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,scalar_t__,int,int,scalar_t__*) ;
 int FUNC_10 (int ,scalar_t__,int,int,scalar_t__*) ;

__attribute__((used)) static struct mp_image *FUNC_11(struct mp_vdpau_ctx *VAR_2,
                                             VdpChromaType VAR_3,
                                             VdpRGBAFormat VAR_4,
                                             bool VAR_5, int VAR_6, int VAR_7)
{
    struct vdp_functions *VAR_8 = &VAR_2->vdp;
    int VAR_9 = -1;
    VdpStatus VAR_10;

    if (VAR_5) {
        VAR_3 = (VdpChromaType)-1;
    } else {
        VAR_4 = (VdpChromaType)-1;
    }

    FUNC_5(&VAR_2->pool_lock);


    for (int VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
        struct surface_entry *VAR_12 = &VAR_2->video_surfaces[VAR_11];
        if (!VAR_12->in_use && VAR_12->allocated) {
            if (VAR_12->w != VAR_6 || VAR_12->h != VAR_7 || VAR_12->rgb != VAR_5 ||
                VAR_12->chroma != VAR_3 || VAR_12->rgb_format != VAR_4)
            {
                if (VAR_12->rgb) {
                    VAR_10 = VAR_8->output_surface_destroy(VAR_12->osurface);
                } else {
                    VAR_10 = VAR_8->video_surface_destroy(VAR_12->surface);
                }
                FUNC_0(VAR_2, "Error when destroying surface");
                VAR_12->surface = VAR_12->osurface = VAR_1;
                VAR_12->allocated = 0;
            }
        }
    }


    for (int VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
        struct surface_entry *VAR_14 = &VAR_2->video_surfaces[VAR_13];
        if (!VAR_14->in_use && VAR_14->allocated) {
            FUNC_2(VAR_14->w == VAR_6 && VAR_14->h == VAR_7);
            FUNC_2(VAR_14->chroma == VAR_3);
            FUNC_2(VAR_14->rgb_format == VAR_4);
            FUNC_2(VAR_14->rgb == VAR_5);
            if (VAR_9 >= 0) {
                struct surface_entry *VAR_15 = &VAR_2->video_surfaces[VAR_9];
                if (VAR_15->age < VAR_14->age)
                    continue;
            }
            VAR_9 = VAR_13;
        }
    }

    if (VAR_9 >= 0)
        goto done;


    for (int VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
        struct surface_entry *VAR_17 = &VAR_2->video_surfaces[VAR_16];
        if (!VAR_17->in_use) {
            FUNC_2(VAR_17->surface == VAR_1);
            FUNC_2(VAR_17->osurface == VAR_1);
            FUNC_2(!VAR_17->allocated);
            VAR_17->chroma = VAR_3;
            VAR_17->rgb_format = VAR_4;
            VAR_17->rgb = VAR_5;
            VAR_17->w = VAR_6;
            VAR_17->h = VAR_7;
            if (FUNC_4(VAR_2, ((void*)0)) >= 0) {
                if (VAR_5) {
                    VAR_10 = VAR_8->output_surface_create(VAR_2->vdp_device, VAR_4,
                                                        VAR_6, VAR_7, &VAR_17->osurface);
                    VAR_17->allocated = VAR_17->osurface != VAR_1;
                } else {
                    VAR_10 = VAR_8->video_surface_create(VAR_2->vdp_device, VAR_3,
                                                    VAR_6, VAR_7, &VAR_17->surface);
                    VAR_17->allocated = VAR_17->surface != VAR_1;
                }
                FUNC_0(VAR_2, "Error when allocating surface");
            } else {
                VAR_17->allocated = 0;
                VAR_17->osurface = VAR_1;
                VAR_17->surface = VAR_1;
            }
            VAR_9 = VAR_16;
            goto done;
        }
    }

done: ;
    struct mp_image *VAR_18 = ((void*)0);
    if (VAR_9 >= 0)
        VAR_18 = FUNC_3(VAR_2, VAR_9);

    FUNC_6(&VAR_2->pool_lock);

    if (!VAR_18)
        FUNC_1(VAR_2, "no surfaces available in mp_vdpau_get_video_surface\n");
    return VAR_18;
}
