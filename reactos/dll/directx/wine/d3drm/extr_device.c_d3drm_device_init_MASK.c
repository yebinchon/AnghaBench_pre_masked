
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int surface_desc ;
struct d3drm_device {int height; int width; int * device; int * render_target; int d3drm; int * ddraw; } ;
typedef int desc ;
typedef int UINT ;
struct TYPE_12__ {int member_0; } ;
struct TYPE_10__ {int dwZBufferBitDepth; } ;
struct TYPE_9__ {int dwCaps; } ;
struct TYPE_11__ {int dwSize; int dwFlags; int dwHeight; int dwWidth; TYPE_2__ u2; TYPE_1__ ddsCaps; } ;
typedef int IDirectDrawSurface ;
typedef int IDirectDraw ;
typedef int IDirect3DDevice2 ;
typedef int IDirect3DDevice ;
typedef int IDirect3D2 ;
typedef int HRESULT ;
typedef TYPE_3__ DDSURFACEDESC ;
typedef TYPE_4__ DDSCAPS ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int *,int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *,TYPE_4__*,int **) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int *,int *,void**) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_3__*,int **,int *) ;
 int FUNC_15 (int *,int *,void**) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (TYPE_3__*,int ,int) ;

HRESULT FUNC_18(struct d3drm_device *VAR_11, UINT VAR_12, IDirectDraw *VAR_13, IDirectDrawSurface *VAR_14,
            BOOL VAR_15)
{
    DDSCAPS VAR_16 = { VAR_2 };
    IDirectDrawSurface *VAR_17 = ((void*)0);
    IDirect3DDevice *VAR_18 = ((void*)0);
    IDirect3DDevice2 *VAR_19 = ((void*)0);
    IDirect3D2 *VAR_20 = ((void*)0);
    DDSURFACEDESC VAR_21, VAR_22;
    HRESULT VAR_23;

    VAR_11->ddraw = VAR_13;
    FUNC_13(VAR_13);
    FUNC_5(VAR_11->d3drm);
    VAR_11->render_target = VAR_14;
    FUNC_7(VAR_14);

    VAR_21.dwSize = sizeof(VAR_21);
    VAR_23 = FUNC_10(VAR_14, &VAR_21);
    if (FUNC_0(VAR_23))
        return VAR_23;

    if (!(VAR_21.ddsCaps.dwCaps & VAR_1))
        return VAR_0;

    VAR_23 = FUNC_9(VAR_14, &VAR_16, &VAR_17);
    if (FUNC_16(VAR_23))
    {
        VAR_15 = VAR_7;
        FUNC_12(VAR_17);
        VAR_17 = ((void*)0);
    }

    if (VAR_15)
    {
        FUNC_17(&VAR_22, 0, sizeof(VAR_22));
        VAR_22.dwSize = sizeof(VAR_22);
        VAR_22.dwFlags = VAR_3 | VAR_6 | VAR_5 | VAR_4;
        VAR_22.ddsCaps.dwCaps = VAR_2;
        VAR_22.u2.dwZBufferBitDepth = 16;
        VAR_22.dwWidth = VAR_21.dwWidth;
        VAR_22.dwHeight = VAR_21.dwHeight;
        VAR_23 = FUNC_14(VAR_13, &VAR_22, &VAR_17, ((void*)0));
        if (FUNC_0(VAR_23))
            return VAR_23;

        VAR_23 = FUNC_6(VAR_14, VAR_17);
        FUNC_12(VAR_17);
        if (FUNC_0(VAR_23))
            return VAR_23;
    }

    if (VAR_12 == 1)
        VAR_23 = FUNC_11(VAR_14, &VAR_10, (void **)&VAR_18);
    else
    {
        FUNC_15(VAR_13, &VAR_8, (void**)&VAR_20);
        VAR_23 = FUNC_1(VAR_20, &VAR_10, VAR_14, &VAR_19);
        FUNC_2(VAR_20);
    }
    if (FUNC_0(VAR_23))
    {
        FUNC_8(VAR_14, 0, VAR_17);
        return VAR_23;
    }

    if (VAR_12 != 1)
    {
        VAR_23 = FUNC_3(VAR_19, &VAR_9, (void**)&VAR_18);
        FUNC_4(VAR_19);
        if (FUNC_0(VAR_23))
        {
            FUNC_8(VAR_14, 0, VAR_17);
            return VAR_23;
        }
    }
    VAR_11->device = VAR_18;
    VAR_11->width = VAR_21.dwWidth;
    VAR_11->height = VAR_21.dwHeight;

    return VAR_23;
}
