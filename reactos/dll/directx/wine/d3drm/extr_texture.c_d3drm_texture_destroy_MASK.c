
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3drm_texture {scalar_t__ surface; int d3drm; scalar_t__ image; int obj; int IDirect3DRMTexture_iface; } ;
typedef int IDirect3DRMObject ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,struct d3drm_texture*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct d3drm_texture*) ;

__attribute__((used)) static void FUNC_5(struct d3drm_texture *VAR_0)
{
    FUNC_2("texture %p is being destroyed.\n", VAR_0);

    FUNC_3((IDirect3DRMObject*)&VAR_0->IDirect3DRMTexture_iface, &VAR_0->obj);
    if (VAR_0->image || VAR_0->surface)
        FUNC_0(VAR_0->d3drm);
    if (VAR_0->surface)
        FUNC_1(VAR_0->surface);
    FUNC_4(VAR_0);
}
