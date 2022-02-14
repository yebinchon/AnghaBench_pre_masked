
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ type; scalar_t__ data; int element_count; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int HRESULT ;
typedef int D3DXHANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 struct d3dx_parameter* FUNC_3 (struct d3dx9_base_effect*,int ) ;

__attribute__((used)) static HRESULT FUNC_4(struct d3dx9_base_effect *VAR_3,
        D3DXHANDLE VAR_4, const char **VAR_5)
{
    struct d3dx_parameter *VAR_6 = FUNC_3(VAR_3, VAR_4);

    if (VAR_5 && VAR_6 && !VAR_6->element_count && VAR_6->type == VAR_1)
    {
        *VAR_5 = *(const char **)VAR_6->data;
        FUNC_0("Returning %s.\n", FUNC_2(*VAR_5));
        return VAR_2;
    }

    FUNC_1("Parameter not found.\n");

    return VAR_0;
}
