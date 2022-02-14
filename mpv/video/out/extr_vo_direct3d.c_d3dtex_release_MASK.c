
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dtex {scalar_t__ tex_h; scalar_t__ tex_w; int * device; int * system; } ;
typedef int d3d_priv ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(d3d_priv *VAR_0, struct d3dtex *VAR_1)
{
    if (VAR_1->system)
        FUNC_0(VAR_1->system);
    VAR_1->system = ((void*)0);

    if (VAR_1->device)
        FUNC_0(VAR_1->device);
    VAR_1->device = ((void*)0);

    VAR_1->tex_w = VAR_1->tex_h = 0;
}
