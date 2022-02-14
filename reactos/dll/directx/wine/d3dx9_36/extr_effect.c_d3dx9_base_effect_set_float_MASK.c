
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int rows; int columns; scalar_t__ data; int type; int element_count; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef int D3DXHANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 struct d3dx_parameter* FUNC_1 (struct d3dx9_base_effect*,int ) ;
 int FUNC_2 (struct d3dx_parameter*) ;
 int FUNC_3 (scalar_t__*,int ,float*,int ) ;

__attribute__((used)) static HRESULT FUNC_4(struct d3dx9_base_effect *VAR_3, D3DXHANDLE VAR_4, float VAR_5)
{
    struct d3dx_parameter *VAR_6 = FUNC_1(VAR_3, VAR_4);

    if (VAR_6 && !VAR_6->element_count && VAR_6->rows == 1 && VAR_6->columns == 1)
    {
        DWORD VAR_7;

        FUNC_3(&VAR_7, VAR_6->type, &VAR_5, VAR_1);
        if (VAR_7 != *(DWORD *)VAR_6->data)
            FUNC_2(VAR_6);
         *(DWORD *)VAR_6->data = VAR_7;
        return VAR_2;
    }

    FUNC_0("Parameter not found.\n");

    return VAR_0;
}
