
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int dummy; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int D3DXHANDLE ;


 int FUNC_0 (char*,int ) ;
 struct d3dx_parameter* FUNC_1 (struct d3dx9_base_effect*,struct d3dx_parameter*,char const*) ;
 int FUNC_2 (struct d3dx_parameter*) ;
 struct d3dx_parameter* FUNC_3 (struct d3dx9_base_effect*,int ) ;

__attribute__((used)) static D3DXHANDLE FUNC_4(struct d3dx9_base_effect *VAR_0,
        D3DXHANDLE VAR_1, const char *VAR_2)
{
    struct d3dx_parameter *VAR_3 = FUNC_3(VAR_0, VAR_1);
    D3DXHANDLE VAR_4;

    if (!VAR_2)
    {
        VAR_4 = FUNC_2(VAR_3);
        FUNC_0("Returning parameter %p.\n", VAR_4);
        return VAR_4;
    }

    VAR_4 = FUNC_2(FUNC_1(VAR_0, VAR_3, VAR_2));
    FUNC_0("Returning parameter %p.\n", VAR_4);

    return VAR_4;
}
