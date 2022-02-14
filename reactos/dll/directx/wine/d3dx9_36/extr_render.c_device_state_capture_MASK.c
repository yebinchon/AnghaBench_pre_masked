
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_state {unsigned int num_render_targets; int * depth_stencil; int ** render_targets; int viewport; } ;
typedef int IDirect3DDevice9 ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *,unsigned int,int **) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(IDirect3DDevice9 *VAR_0, struct device_state *VAR_1)
{
    HRESULT VAR_2;
    unsigned int VAR_3;

    FUNC_3(VAR_0, &VAR_1->viewport);

    for (VAR_3 = 0; VAR_3 < VAR_1->num_render_targets; VAR_3++)
    {
        VAR_2 = FUNC_2(VAR_0, VAR_3, &VAR_1->render_targets[VAR_3]);
        if (FUNC_0(VAR_2)) VAR_1->render_targets[VAR_3] = ((void*)0);
    }

    VAR_2 = FUNC_1(VAR_0, &VAR_1->depth_stencil);
    if (FUNC_0(VAR_2)) VAR_1->depth_stencil = ((void*)0);
}
