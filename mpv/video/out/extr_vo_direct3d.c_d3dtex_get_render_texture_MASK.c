
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dtex {scalar_t__ system; scalar_t__ device; } ;
typedef int d3d_priv ;
typedef int IDirect3DBaseTexture9 ;



__attribute__((used)) static IDirect3DBaseTexture9 *FUNC_0(d3d_priv *VAR_0,
                                                        struct d3dtex *VAR_1)
{
    return (IDirect3DBaseTexture9 *)(VAR_1->device ? VAR_1->device : VAR_1->system);
}
