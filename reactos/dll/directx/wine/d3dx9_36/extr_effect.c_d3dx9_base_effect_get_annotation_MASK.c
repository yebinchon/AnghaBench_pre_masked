
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int dummy; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef size_t UINT ;
typedef int * D3DXHANDLE ;


 int FUNC_0 (char*,struct d3dx_parameter*) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (struct d3dx9_base_effect*,int *,struct d3dx_parameter**) ;
 int * FUNC_3 (struct d3dx_parameter*) ;

__attribute__((used)) static D3DXHANDLE FUNC_4(struct d3dx9_base_effect *VAR_0,
        D3DXHANDLE VAR_1, UINT VAR_2)
{
    struct d3dx_parameter *VAR_3 = ((void*)0);
    UINT VAR_4 = 0;

    VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_3);

    if (VAR_2 < VAR_4)
    {
        FUNC_0("Returning parameter %p\n", &VAR_3[VAR_2]);
        return FUNC_3(&VAR_3[VAR_2]);
    }

    FUNC_1("Annotation not found.\n");

    return ((void*)0);
}
