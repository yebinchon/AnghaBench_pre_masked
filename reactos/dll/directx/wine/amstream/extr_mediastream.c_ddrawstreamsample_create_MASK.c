
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int desc ;
struct TYPE_13__ {int dwCaps; } ;
struct TYPE_12__ {int dwSize; int dwRGBBitCount; int dwRBitMask; int dwGBitMask; int dwBBitMask; scalar_t__ dwRGBAlphaBitMask; int dwFlags; } ;
struct TYPE_16__ {int dwSize; int dwFlags; int dwHeight; int dwWidth; int member_0; int * lpSurface; TYPE_2__ ddsCaps; TYPE_1__ ddpfPixelFormat; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_14__ {int ref; TYPE_4__ IDirectDrawStreamSample_iface; int rect; int * surface; int * parent; } ;
typedef int RECT ;
typedef int IMediaStream ;
typedef int IDirectDrawSurface ;
typedef TYPE_3__ IDirectDrawStreamSampleImpl ;
typedef TYPE_4__ IDirectDrawStreamSample ;
typedef int IDirectDrawMediaStream ;
typedef int IDirectDraw ;
typedef int HRESULT ;
typedef TYPE_5__ DDSURFACEDESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_9 ;
 TYPE_3__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,int **) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_5__*) ;
 int FUNC_8 (int *,TYPE_5__*,int **,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_10 ;
 int FUNC_11 (int *,int ,int ,int,int) ;
 int FUNC_12 (char*,TYPE_4__**) ;

__attribute__((used)) static HRESULT FUNC_13(IDirectDrawMediaStream *VAR_11, IDirectDrawSurface *VAR_12,
    const RECT *VAR_13, IDirectDrawStreamSample **VAR_14)
{
    IDirectDrawStreamSampleImpl *VAR_15;
    HRESULT VAR_16;

    FUNC_12("(%p)\n", VAR_14);

    VAR_15 = FUNC_3(FUNC_2(), VAR_9, sizeof(*VAR_15));
    if (!VAR_15)
        return VAR_8;

    VAR_15->IDirectDrawStreamSample_iface.lpVtbl = &VAR_7;
    VAR_15->ref = 1;
    VAR_15->parent = (IMediaStream*)VAR_11;
    FUNC_10(VAR_15->parent);

    if (VAR_12)
    {
        VAR_15->surface = VAR_12;
        FUNC_6(VAR_12);
    }
    else
    {
        DDSURFACEDESC VAR_17;
        IDirectDraw *VAR_18;

        VAR_16 = FUNC_4(VAR_11, &VAR_18);
        if (FUNC_1(VAR_16))
        {
            FUNC_5(&VAR_15->IDirectDrawStreamSample_iface);
            return VAR_16;
        }

        VAR_17.dwSize = sizeof(VAR_17);
        VAR_17.dwFlags = VAR_3|VAR_4|VAR_6|VAR_5;
        VAR_17.dwHeight = 100;
        VAR_17.dwWidth = 100;
        VAR_17.ddpfPixelFormat.dwSize = sizeof(VAR_17.ddpfPixelFormat);
        VAR_17.ddpfPixelFormat.dwFlags = VAR_0;
        VAR_17.ddpfPixelFormat.dwRGBBitCount = 32;
        VAR_17.ddpfPixelFormat.dwRBitMask = 0xff0000;
        VAR_17.ddpfPixelFormat.dwGBitMask = 0x00ff00;
        VAR_17.ddpfPixelFormat.dwBBitMask = 0x0000ff;
        VAR_17.ddpfPixelFormat.dwRGBAlphaBitMask = 0;
        VAR_17.ddsCaps.dwCaps = VAR_2|VAR_1;
        VAR_17.lpSurface = ((void*)0);

        VAR_16 = FUNC_8(VAR_18, &VAR_17, &VAR_15->surface, ((void*)0));
        FUNC_9(VAR_18);
        if (FUNC_1(VAR_16))
        {
            FUNC_0("failed to create surface, 0x%08x\n", VAR_16);
            FUNC_5(&VAR_15->IDirectDrawStreamSample_iface);
            return VAR_16;
        }
    }

    if (VAR_13)
        VAR_15->rect = *VAR_13;
    else if (VAR_15->surface)
    {
        DDSURFACEDESC VAR_19 = { sizeof(VAR_19) };
        VAR_16 = FUNC_7(VAR_15->surface, &VAR_19);
        if (VAR_16 == VAR_10)
            FUNC_11(&VAR_15->rect, 0, 0, VAR_19.dwWidth, VAR_19.dwHeight);
    }

    *VAR_14 = &VAR_15->IDirectDrawStreamSample_iface;

    return VAR_10;
}
