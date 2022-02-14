
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_state {unsigned int num_render_targets; int viewport; int * depth_stencil; int ** render_targets; } ;
typedef int IDirect3DDevice9 ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned int,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(IDirect3DDevice9 *VAR_0, struct device_state *VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_render_targets; VAR_2++)
    {
        FUNC_1(VAR_0, VAR_2, VAR_1->render_targets[VAR_2]);
        if (VAR_1->render_targets[VAR_2])
            FUNC_3(VAR_1->render_targets[VAR_2]);
        VAR_1->render_targets[VAR_2] = ((void*)0);
    }

    FUNC_0(VAR_0, VAR_1->depth_stencil);
    if (VAR_1->depth_stencil)
    {
        FUNC_3(VAR_1->depth_stencil);
        VAR_1->depth_stencil = ((void*)0);
    }

    FUNC_2(VAR_0, &VAR_1->viewport);
}
