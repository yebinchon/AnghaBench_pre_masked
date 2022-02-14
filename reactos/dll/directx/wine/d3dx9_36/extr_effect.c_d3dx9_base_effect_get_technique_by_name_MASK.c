
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_technique {int dummy; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int * D3DXHANDLE ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 struct d3dx_technique* FUNC_2 (struct d3dx9_base_effect*,char const*) ;
 int * FUNC_3 (struct d3dx_technique*) ;

__attribute__((used)) static D3DXHANDLE FUNC_4(struct d3dx9_base_effect *VAR_0, const char *VAR_1)
{
    struct d3dx_technique *VAR_2 = FUNC_2(VAR_0, VAR_1);

    if (VAR_2)
    {
        D3DXHANDLE VAR_3 = FUNC_3(VAR_2);
        FUNC_0("Returning technique %p\n", VAR_3);
        return VAR_3;
    }

    FUNC_1("Technique not found.\n");

    return ((void*)0);
}
