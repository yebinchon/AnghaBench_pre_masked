
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int access; TYPE_2__* format; struct wined3d_device* device; } ;
struct wined3d_texture {unsigned int level_count; TYPE_3__ resource; struct wined3d_swapchain* swapchain; } ;
struct wined3d_swapchain {int dummy; } ;
typedef struct wined3d_surface {struct wined3d_texture* container; } const wined3d_surface ;
struct TYPE_12__ {int * render_targets; } ;
struct wined3d_device {TYPE_1__ fb; } ;
struct wined3d_blt_fx {int dummy; } ;
typedef enum wined3d_texture_filter_type { ____Placeholder_wined3d_texture_filter_type } wined3d_texture_filter_type ;
struct TYPE_15__ {unsigned int right; unsigned int left; unsigned int bottom; unsigned int top; } ;
struct TYPE_13__ {scalar_t__ id; } ;
typedef TYPE_4__ RECT ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct wined3d_surface const*,struct wined3d_surface const*,TYPE_4__ const*,TYPE_4__ const*,int) ;
 int FUNC_5 (struct wined3d_surface const*,struct wined3d_surface const*,TYPE_4__ const*,TYPE_4__ const*,int) ;
 unsigned int FUNC_6 (struct wined3d_surface const*) ;
 int FUNC_7 (TYPE_4__ const*) ;
 struct wined3d_surface const* FUNC_8 (int ) ;
 unsigned int FUNC_9 (struct wined3d_texture*,unsigned int) ;
 unsigned int FUNC_10 (struct wined3d_texture*,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_11(struct wined3d_surface *VAR_10, const RECT *VAR_11,
        struct wined3d_surface *VAR_12, const RECT *VAR_13, DWORD VAR_14,
        const struct wined3d_blt_fx *VAR_15, enum wined3d_texture_filter_type VAR_16)
{
    struct wined3d_texture *VAR_17 = VAR_10->container;
    struct wined3d_device *VAR_18 = VAR_17->resource.device;
    const struct wined3d_surface *VAR_19 = FUNC_8(VAR_18->fb.render_targets[0]);
    struct wined3d_swapchain *VAR_20, *VAR_21;
    struct wined3d_texture *VAR_22;

    FUNC_1("dst_surface %p, dst_rect %s, src_surface %p, src_rect %s, flags %#x, fx %p, filter %s.\n",
            VAR_10, FUNC_7(VAR_11), VAR_12, FUNC_7(VAR_13),
            VAR_14, VAR_15, FUNC_3(VAR_16));


    if (!(VAR_17->resource.access & VAR_9))
    {
        FUNC_2("Destination resource is not GPU accessible, rejecting GL blit.\n");
        return VAR_2;
    }

    VAR_21 = VAR_17->swapchain;

    if (VAR_12)
    {
        VAR_22 = VAR_12->container;
        if (!(VAR_22->resource.access & VAR_9))
        {
            FUNC_2("Source resource is not GPU accessible, rejecting GL blit.\n");
            return VAR_2;
        }

        VAR_20 = VAR_22->swapchain;
    }
    else
    {
        VAR_22 = ((void*)0);
        VAR_20 = ((void*)0);
    }


    if (!VAR_21 && !VAR_20 && VAR_12 != VAR_19 && VAR_10 != VAR_19)
    {
        FUNC_1("No surface is render target, not using hardware blit.\n");
        return VAR_2;
    }


    if (VAR_14 & (VAR_4 | VAR_5))
    {

        FUNC_1("Destination color key not supported in accelerated Blit, falling back to software\n");
        return VAR_2;
    }

    if (VAR_21 && VAR_21 == VAR_20)
    {
        FUNC_0("Implement hardware blit between two surfaces on the same swapchain\n");
        return VAR_2;
    }

    if (VAR_21 && VAR_20)
    {
        FUNC_0("Implement hardware blit between two different swapchains\n");
        return VAR_2;
    }

    if (VAR_21)
    {

        if (VAR_12 == VAR_19)
            FUNC_1("Blit from active render target to a swapchain\n");
    }
    else if (VAR_20 && VAR_10 == VAR_19)
    {
        FUNC_0("Implement blit from a swapchain to the active render target\n");
        return VAR_2;
    }

    if ((VAR_20 || VAR_12 == VAR_19) && !VAR_21)
    {
        unsigned int VAR_23, VAR_24, VAR_25;

        BOOL VAR_26;


        if (VAR_22->resource.format->id == VAR_3
                || VAR_17->resource.format->id == VAR_3)
        {
            FUNC_1("P8 read back not supported by frame buffer to texture blit\n");
            return VAR_2;
        }

        if (VAR_14 & (VAR_6 | VAR_7))
        {
            FUNC_1("Color keying not supported by frame buffer to texture blit\n");
            return VAR_2;

        }

        if (VAR_11->right - VAR_11->left != VAR_13->right - VAR_13->left)
            VAR_26 = VAR_1;
        else
            VAR_26 = VAR_0;
        VAR_23 = FUNC_6(VAR_12) % VAR_22->level_count;
        VAR_24 = FUNC_10(VAR_22, VAR_23);
        VAR_25 = FUNC_9(VAR_22, VAR_23);
        if (!VAR_26 || VAR_11->right - VAR_11->left > VAR_24
                || VAR_11->bottom - VAR_11->top > VAR_25)
        {
            FUNC_1("No stretching in x direction, using direct framebuffer -> texture copy.\n");
            FUNC_4(VAR_10, VAR_12, VAR_13, VAR_11, VAR_16);
        }
        else
        {
            FUNC_1("Using hardware stretching to flip / stretch the texture.\n");
            FUNC_5(VAR_10, VAR_12, VAR_13, VAR_11, VAR_16);
        }

        return VAR_8;
    }


    FUNC_1("Didn't find any usable render target setup for hw blit, falling back to software\n");
    return VAR_2;
}
