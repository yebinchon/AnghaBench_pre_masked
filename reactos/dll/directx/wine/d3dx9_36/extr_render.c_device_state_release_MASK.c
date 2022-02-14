
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_state {unsigned int num_render_targets; scalar_t__ depth_stencil; scalar_t__* render_targets; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct device_state *VAR_0)
{
    unsigned int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->num_render_targets; VAR_1++)
    {
        if (VAR_0->render_targets[VAR_1])
            FUNC_2(VAR_0->render_targets[VAR_1]);
    }

    FUNC_1(FUNC_0(), 0, VAR_0->render_targets);

    if (VAR_0->depth_stencil) FUNC_2(VAR_0->depth_stencil);
}
