
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_technique {size_t pass_count; int * passes; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef size_t UINT ;
typedef int * D3DXHANDLE ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;
 struct d3dx_technique* FUNC_3 (struct d3dx9_base_effect*,int *) ;

__attribute__((used)) static D3DXHANDLE FUNC_4(struct d3dx9_base_effect *VAR_0,
        D3DXHANDLE VAR_1, UINT VAR_2)
{
    struct d3dx_technique *VAR_3 = FUNC_3(VAR_0, VAR_1);

    if (VAR_3 && VAR_2 < VAR_3->pass_count)
    {
        FUNC_0("Returning pass %p\n", &VAR_3->passes[VAR_2]);
        return FUNC_2(&VAR_3->passes[VAR_2]);
    }

    FUNC_1("Pass not found.\n");

    return ((void*)0);
}
