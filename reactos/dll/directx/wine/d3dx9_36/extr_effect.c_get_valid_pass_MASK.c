
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_technique {unsigned int pass_count; struct d3dx_pass* passes; } ;
struct d3dx_pass {int dummy; } ;
struct d3dx9_base_effect {unsigned int technique_count; struct d3dx_technique* techniques; } ;
typedef scalar_t__ D3DXHANDLE ;


 scalar_t__ FUNC_0 (struct d3dx_pass*) ;

__attribute__((used)) static struct d3dx_pass *FUNC_1(struct d3dx9_base_effect *VAR_0, D3DXHANDLE VAR_1)
{
    unsigned int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0->technique_count; ++VAR_2)
    {
        struct d3dx_technique *VAR_4 = &VAR_0->techniques[VAR_2];

        for (VAR_3 = 0; VAR_3 < VAR_4->pass_count; ++VAR_3)
        {
            if (FUNC_0(&VAR_4->passes[VAR_3]) == VAR_1)
                return &VAR_4->passes[VAR_3];
        }
    }

    return ((void*)0);
}
