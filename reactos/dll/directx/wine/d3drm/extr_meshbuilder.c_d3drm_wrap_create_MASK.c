
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct d3drm_wrap {int ref; int obj; TYPE_1__ IDirect3DRMWrap_iface; } ;
typedef int IDirect3DRM ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct d3drm_wrap**,int *) ;
 int FUNC_1 (int *,char const*) ;
 int VAR_2 ;
 struct d3drm_wrap* FUNC_2 (int) ;

HRESULT FUNC_3(struct d3drm_wrap **VAR_3, IDirect3DRM *VAR_4)
{
    static const char VAR_5[] = "";
    struct d3drm_wrap *VAR_6;

    FUNC_0("wrap %p, d3drm %p.\n", VAR_3, VAR_4);

    if (!(VAR_6 = FUNC_2(sizeof(*VAR_6))))
        return VAR_0;

    VAR_6->IDirect3DRMWrap_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;

    FUNC_1(&VAR_6->obj, VAR_5);

    *VAR_3 = VAR_6;

    return VAR_1;
}
