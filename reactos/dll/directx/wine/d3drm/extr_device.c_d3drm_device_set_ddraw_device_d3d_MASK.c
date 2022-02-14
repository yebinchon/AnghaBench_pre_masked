
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct d3drm_device {int * render_target; int * device; int height; int width; int * ddraw; int d3drm; } ;
typedef int desc ;
struct TYPE_3__ {int dwSize; int dwHeight; int dwWidth; } ;
typedef int IDirectDrawSurface ;
typedef int IDirectDraw ;
typedef int IDirect3DDevice2 ;
typedef int IDirect3DDevice ;
typedef int IDirect3D ;
typedef int HRESULT ;
typedef TYPE_1__ DDSURFACEDESC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_9(struct d3drm_device *VAR_4, IDirect3D *VAR_5, IDirect3DDevice *VAR_6)
{
    IDirectDraw *VAR_7;
    IDirectDrawSurface *VAR_8;
    IDirect3DDevice2 *VAR_9 = ((void*)0);
    DDSURFACEDESC VAR_10;
    HRESULT VAR_11;


    if (FUNC_0(VAR_11 = FUNC_6(VAR_5, &VAR_2, (void **)&VAR_7)))
        return VAR_11;
    FUNC_5(VAR_4->d3drm);
    FUNC_3(VAR_6);


    if (FUNC_0(VAR_11 = FUNC_4(VAR_6, &VAR_3, (void **)&VAR_8)))
    {
        if (FUNC_0(VAR_11 = FUNC_4(VAR_6, &VAR_1, (void **)&VAR_9)))
            return VAR_11;
        VAR_11 = FUNC_1(VAR_9, &VAR_8);
        FUNC_2(VAR_9);
        if (FUNC_0(VAR_11))
            return VAR_11;
    }

    if (VAR_4->ddraw)
    {
        if (VAR_9)
            FUNC_8(VAR_8);
        return VAR_0;
    }

    VAR_10.dwSize = sizeof(VAR_10);
    VAR_11 = FUNC_7(VAR_8, &VAR_10);
    if (FUNC_0(VAR_11))
    {
        FUNC_8(VAR_8);
        return VAR_11;
    }

    VAR_4->ddraw = VAR_7;
    VAR_4->width = VAR_10.dwWidth;
    VAR_4->height = VAR_10.dwHeight;
    VAR_4->device = VAR_6;
    VAR_4->render_target = VAR_8;

    return VAR_11;
}
