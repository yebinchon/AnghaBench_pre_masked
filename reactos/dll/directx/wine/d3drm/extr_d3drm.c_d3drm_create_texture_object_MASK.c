
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3drm_texture {int IDirect3DRMTexture_iface; } ;
typedef int IDirect3DRM ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct d3drm_texture**,int *) ;

__attribute__((used)) static HRESULT FUNC_2(void **VAR_0, IDirect3DRM *VAR_1)
{
    struct d3drm_texture *VAR_2;
    HRESULT VAR_3;

    if (FUNC_0(VAR_3 = FUNC_1(&VAR_2, VAR_1)))
        return VAR_3;

    *VAR_0 = &VAR_2->IDirect3DRMTexture_iface;

    return VAR_3;
}
