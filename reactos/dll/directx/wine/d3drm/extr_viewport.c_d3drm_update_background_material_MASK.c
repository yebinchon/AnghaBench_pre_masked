
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct d3drm_viewport {int material; int camera; } ;
typedef int mat ;
struct TYPE_5__ {int diffuse; } ;
struct TYPE_6__ {int dwSize; TYPE_1__ u; } ;
typedef int IDirect3DRMFrame ;
typedef int HRESULT ;
typedef TYPE_2__ D3DMATERIAL ;
typedef int D3DCOLOR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static HRESULT FUNC_7(struct d3drm_viewport *VAR_0)
{
    IDirect3DRMFrame *VAR_1;
    D3DCOLOR VAR_2;
    D3DMATERIAL VAR_3;
    HRESULT VAR_4;

    if (FUNC_0(VAR_4 = FUNC_2(VAR_0->camera, &VAR_1)))
        return VAR_4;
    VAR_2 = FUNC_3(VAR_1);
    FUNC_4(VAR_1);

    FUNC_6(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.dwSize = sizeof(VAR_3);
    FUNC_5(&VAR_3.u.diffuse, VAR_2);

    return FUNC_1(VAR_0->material, &VAR_3);
}
