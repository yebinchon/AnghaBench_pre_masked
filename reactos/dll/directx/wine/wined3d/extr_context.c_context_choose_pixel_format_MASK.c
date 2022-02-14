
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wined3d_pixel_format {scalar_t__ iPixelType; scalar_t__ redSize; scalar_t__ greenSize; scalar_t__ blueSize; scalar_t__ alphaSize; scalar_t__ depthSize; scalar_t__ stencilSize; int iPixelFormat; scalar_t__ auxBuffers; scalar_t__ numSamples; scalar_t__ doubleBuffer; scalar_t__ windowDrawable; } ;
struct wined3d_format {scalar_t__ red_size; scalar_t__ green_size; scalar_t__ blue_size; scalar_t__ alpha_size; scalar_t__ depth_size; scalar_t__ stencil_size; int id; } ;
struct wined3d_device {TYPE_1__* adapter; } ;
typedef int pfd ;
struct TYPE_6__ {int nSize; int nVersion; int dwFlags; scalar_t__ cAlphaBits; scalar_t__ cColorBits; scalar_t__ cDepthBits; scalar_t__ cStencilBits; int iLayerType; int iPixelType; } ;
struct TYPE_5__ {unsigned int cfg_count; struct wined3d_pixel_format* cfgs; } ;
typedef TYPE_2__ PIXELFORMATDESCRIPTOR ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_5(const struct wined3d_device *VAR_6, HDC VAR_7,
        const struct wined3d_format *VAR_8, const struct wined3d_format *VAR_9,
        BOOL VAR_10)
{
    unsigned int VAR_11 = VAR_6->adapter->cfg_count;
    unsigned int VAR_12;
    PIXELFORMATDESCRIPTOR VAR_13;
    int VAR_14 = 0;
    unsigned int VAR_15;

    FUNC_2("device %p, dc %p, color_format %s, ds_format %s, aux_buffers %#x.\n",
            VAR_6, VAR_7, FUNC_3(VAR_8->id), FUNC_3(VAR_9->id),
            VAR_10);

    VAR_12 = 0;
    for (VAR_15 = 0; VAR_15 < VAR_11; ++VAR_15)
    {
        const struct wined3d_pixel_format *VAR_16 = &VAR_6->adapter->cfgs[VAR_15];
        unsigned int VAR_17;



        if (VAR_16->iPixelType != VAR_5)
            continue;

        if (!(VAR_16->windowDrawable && VAR_16->doubleBuffer))
            continue;
        if (VAR_16->redSize < VAR_8->red_size)
            continue;
        if (VAR_16->greenSize < VAR_8->green_size)
            continue;
        if (VAR_16->blueSize < VAR_8->blue_size)
            continue;
        if (VAR_16->alphaSize < VAR_8->alpha_size)
            continue;
        if (VAR_16->depthSize < VAR_9->depth_size)
            continue;
        if (VAR_9->stencil_size && VAR_16->stencilSize != VAR_9->stencil_size)
            continue;

        if (VAR_16->numSamples)
            continue;

        VAR_17 = 1;


        if (VAR_16->depthSize == VAR_9->depth_size)
            VAR_17 += 1;
        if (VAR_16->stencilSize == VAR_9->stencil_size)
            VAR_17 += 2;
        if (VAR_16->alphaSize == VAR_8->alpha_size)
            VAR_17 += 4;

        if (VAR_10 && VAR_16->auxBuffers)
            VAR_17 += 8;
        if (VAR_16->redSize == VAR_8->red_size
                && VAR_16->greenSize == VAR_8->green_size
                && VAR_16->blueSize == VAR_8->blue_size)
            VAR_17 += 16;

        if (VAR_17 > VAR_12)
        {
            VAR_14 = VAR_16->iPixelFormat;
            VAR_12 = VAR_17;
        }
    }

    if (!VAR_14)
    {
        FUNC_1("Trying to locate a compatible pixel format because an exact match failed.\n");

        FUNC_4(&VAR_13, 0, sizeof(VAR_13));
        VAR_13.nSize = sizeof(VAR_13);
        VAR_13.nVersion = 1;
        VAR_13.dwFlags = VAR_3 | VAR_0 | VAR_1;
        VAR_13.iPixelType = VAR_4;
        VAR_13.cAlphaBits = VAR_8->alpha_size;
        VAR_13.cColorBits = VAR_8->red_size + VAR_8->green_size
                + VAR_8->blue_size + VAR_8->alpha_size;
        VAR_13.cDepthBits = VAR_9->depth_size;
        VAR_13.cStencilBits = VAR_9->stencil_size;
        VAR_13.iLayerType = VAR_2;

        if (!(VAR_14 = FUNC_0(VAR_7, &VAR_13)))
        {

            FUNC_1("Can't find a suitable pixel format.\n");
            return 0;
        }
    }

    FUNC_2("Found iPixelFormat=%d for ColorFormat=%s, DepthStencilFormat=%s.\n",
            VAR_14, FUNC_3(VAR_8->id), FUNC_3(VAR_9->id));
    return VAR_14;
}
