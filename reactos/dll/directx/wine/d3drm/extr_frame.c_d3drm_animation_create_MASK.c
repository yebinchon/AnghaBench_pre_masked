
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_3__ {int * lpVtbl; } ;
struct d3drm_animation {int ref; int options; int * d3drm; int obj; TYPE_2__ IDirect3DRMAnimation2_iface; TYPE_1__ IDirect3DRMAnimation_iface; } ;
typedef int IDirect3DRM ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct d3drm_animation**,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char const*) ;
 struct d3drm_animation* FUNC_3 (int) ;

HRESULT FUNC_4(struct d3drm_animation **VAR_6, IDirect3DRM *VAR_7)
{
    static const char VAR_8[] = "Animation";
    struct d3drm_animation *VAR_9;
    HRESULT VAR_10 = VAR_2;

    FUNC_1("animation %p, d3drm %p.\n", VAR_6, VAR_7);

    if (!(VAR_9 = FUNC_3(sizeof(*VAR_9))))
        return VAR_3;

    VAR_9->IDirect3DRMAnimation_iface.lpVtbl = &VAR_4;
    VAR_9->IDirect3DRMAnimation2_iface.lpVtbl = &VAR_5;
    VAR_9->d3drm = VAR_7;
    VAR_9->ref = 1;
    VAR_9->options = VAR_0 | VAR_1;

    FUNC_2(&VAR_9->obj, VAR_8);

    FUNC_0(VAR_9->d3drm);

    *VAR_6 = VAR_9;

    return VAR_10;
}
