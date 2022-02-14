
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct d3dtex {scalar_t__ device; scalar_t__ system; } ;
struct TYPE_3__ {int d3d_device; } ;
typedef TYPE_1__ d3d_priv ;
typedef int IDirect3DBaseTexture9 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static bool FUNC_2(d3d_priv *VAR_0, struct d3dtex *VAR_1)
{
    if (!VAR_1->device)
        return 1;
    return !FUNC_0(FUNC_1(VAR_0->d3d_device,
                   (IDirect3DBaseTexture9 *)VAR_1->system,
                   (IDirect3DBaseTexture9 *)VAR_1->device));
}
