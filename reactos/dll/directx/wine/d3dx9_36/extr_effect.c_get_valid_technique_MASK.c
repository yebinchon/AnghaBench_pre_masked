
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_technique {int dummy; } ;
struct d3dx9_base_effect {unsigned int technique_count; struct d3dx_technique* techniques; } ;
typedef scalar_t__ D3DXHANDLE ;


 struct d3dx_technique* FUNC_0 (struct d3dx9_base_effect*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct d3dx_technique*) ;

__attribute__((used)) static struct d3dx_technique *FUNC_2(struct d3dx9_base_effect *VAR_0, D3DXHANDLE VAR_1)
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->technique_count; ++VAR_2)
    {
        if (FUNC_1(&VAR_0->techniques[VAR_2]) == VAR_1)
            return &VAR_0->techniques[VAR_2];
    }

    return FUNC_0(VAR_0, VAR_1);
}
