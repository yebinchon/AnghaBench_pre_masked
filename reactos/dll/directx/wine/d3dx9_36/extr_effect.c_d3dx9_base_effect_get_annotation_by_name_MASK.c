
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int dummy; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int UINT ;
typedef int * D3DXHANDLE ;


 int FUNC_0 (char*,struct d3dx_parameter*) ;
 int FUNC_1 (char*) ;
 struct d3dx_parameter* FUNC_2 (struct d3dx9_base_effect*,int ,struct d3dx_parameter*,char const*) ;
 int FUNC_3 (struct d3dx9_base_effect*,int *,struct d3dx_parameter**) ;
 int * FUNC_4 (struct d3dx_parameter*) ;

__attribute__((used)) static D3DXHANDLE FUNC_5(struct d3dx9_base_effect *VAR_0,
        D3DXHANDLE VAR_1, const char *VAR_2)
{
    struct d3dx_parameter *VAR_3 = ((void*)0);
    struct d3dx_parameter *VAR_4 = ((void*)0);
    UINT VAR_5 = 0;

    if (!VAR_2)
    {
        FUNC_1("Invalid argument specified\n");
        return ((void*)0);
    }

    VAR_5 = FUNC_3(VAR_0, VAR_1, &VAR_4);

    VAR_3 = FUNC_2(VAR_0, VAR_5, VAR_4, VAR_2);
    if (VAR_3)
    {
        FUNC_0("Returning parameter %p\n", VAR_3);
        return FUNC_4(VAR_3);
    }

    FUNC_1("Annotation not found.\n");

    return ((void*)0);
}
