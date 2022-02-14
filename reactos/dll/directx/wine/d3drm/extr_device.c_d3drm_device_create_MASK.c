
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct d3drm_device {int obj; int * d3drm; TYPE_3__ IDirect3DRMWinDevice_iface; TYPE_2__ IDirect3DRMDevice3_iface; TYPE_1__ IDirect3DRMDevice2_iface; TYPE_4__ IDirect3DRMDevice_iface; } ;
typedef int IDirect3DRM ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct d3drm_device**,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char const*) ;
 struct d3drm_device* FUNC_2 (int) ;

HRESULT FUNC_3(struct d3drm_device **VAR_6, IDirect3DRM *VAR_7)
{
    static const char VAR_8[] = "Device";
    struct d3drm_device *VAR_9;

    FUNC_0("device %p, d3drm %p.\n", VAR_6, VAR_7);

    if (!(VAR_9 = FUNC_2(sizeof(*VAR_9))))
        return VAR_1;

    VAR_9->IDirect3DRMDevice_iface.lpVtbl = &VAR_2;
    VAR_9->IDirect3DRMDevice2_iface.lpVtbl = &VAR_3;
    VAR_9->IDirect3DRMDevice3_iface.lpVtbl = &VAR_4;
    VAR_9->IDirect3DRMWinDevice_iface.lpVtbl = &VAR_5;
    VAR_9->d3drm = VAR_7;
    FUNC_1(&VAR_9->obj, VAR_8);

    *VAR_6 = VAR_9;

    return VAR_0;
}
