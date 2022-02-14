
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx9_base_effect {size_t technique_count; int * techniques; } ;
typedef size_t UINT ;
typedef int * D3DXHANDLE ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static D3DXHANDLE FUNC_3(struct d3dx9_base_effect *VAR_0, UINT VAR_1)
{
    if (VAR_1 >= VAR_0->technique_count)
    {
        FUNC_1("Invalid argument specified.\n");
        return ((void*)0);
    }

    FUNC_0("Returning technique %p.\n", &VAR_0->techniques[VAR_1]);

    return FUNC_2(&VAR_0->techniques[VAR_1]);
}
