
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int class; int element_count; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int HRESULT ;
typedef int D3DXMATRIX ;
typedef int D3DXHANDLE ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct d3dx_parameter*,int *,int ) ;
 struct d3dx_parameter* FUNC_5 (struct d3dx9_base_effect*,int ) ;

__attribute__((used)) static HRESULT FUNC_6(struct d3dx9_base_effect *VAR_4,
        D3DXHANDLE VAR_5, D3DXMATRIX *VAR_6)
{
    struct d3dx_parameter *VAR_7 = FUNC_5(VAR_4, VAR_5);

    if (VAR_6 && VAR_7 && !VAR_7->element_count)
    {
        FUNC_1("Class %s\n", FUNC_3(VAR_7->class));

        switch (VAR_7->class)
        {
            case 130:
            case 128:
                FUNC_4(VAR_7, VAR_6, VAR_2);
                return VAR_1;

            case 132:
                FUNC_4(VAR_7, VAR_6, VAR_3);
                return VAR_1;

            case 131:
            case 129:
                break;

            default:
                FUNC_0("Unhandled class %s\n", FUNC_3(VAR_7->class));
                break;
        }
    }

    FUNC_2("Parameter not found.\n");

    return VAR_0;
}
