
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int columns; int rows; int type; scalar_t__ data; int element_count; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int D3DXHANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,float) ;
 int FUNC_1 (char*) ;
 struct d3dx_parameter* FUNC_2 (struct d3dx9_base_effect*,int ) ;
 int FUNC_3 (float*,int ,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_4(struct d3dx9_base_effect *VAR_3, D3DXHANDLE VAR_4, float *VAR_5)
{
    struct d3dx_parameter *VAR_6 = FUNC_2(VAR_3, VAR_4);

    if (VAR_5 && VAR_6 && !VAR_6->element_count && VAR_6->columns == 1 && VAR_6->rows == 1)
    {
        FUNC_3(VAR_5, VAR_1, (DWORD *)VAR_6->data, VAR_6->type);
        FUNC_0("Returning %f\n", *VAR_5);
        return VAR_2;
    }

    FUNC_1("Parameter not found.\n");

    return VAR_0;
}
