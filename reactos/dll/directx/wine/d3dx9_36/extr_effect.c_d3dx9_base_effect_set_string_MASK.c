
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ type; int data; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int HRESULT ;
typedef int D3DXHANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 struct d3dx_parameter* FUNC_1 (struct d3dx9_base_effect*,int ) ;
 int FUNC_2 (struct d3dx_parameter*) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static HRESULT FUNC_4(struct d3dx9_base_effect *VAR_2,
        D3DXHANDLE VAR_3, const char *VAR_4)
{
    struct d3dx_parameter *VAR_5 = FUNC_1(VAR_2, VAR_3);

    if (VAR_5 && VAR_5->type == VAR_1)
    {
        FUNC_2(VAR_5);
        return FUNC_3(VAR_5->data, VAR_4);
    }

    FUNC_0("Parameter not found.\n");

    return VAR_0;
}
