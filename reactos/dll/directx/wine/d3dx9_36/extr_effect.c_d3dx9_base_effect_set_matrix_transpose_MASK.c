
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
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 struct d3dx_parameter* FUNC_4 (struct d3dx9_base_effect*,int ) ;
 int FUNC_5 (struct d3dx_parameter*) ;
 int FUNC_6 (struct d3dx_parameter*,int const*) ;

__attribute__((used)) static HRESULT FUNC_7(struct d3dx9_base_effect *VAR_2,
        D3DXHANDLE VAR_3, const D3DXMATRIX *VAR_4)
{
    struct d3dx_parameter *VAR_5 = FUNC_4(VAR_2, VAR_3);

    if (VAR_5 && !VAR_5->element_count)
    {
        FUNC_1("Class %s\n", FUNC_3(VAR_5->class));

        switch (VAR_5->class)
        {
            case 132:
                FUNC_5(VAR_5);
                FUNC_6(VAR_5, VAR_4);
                return VAR_1;

            case 130:
            case 128:
            case 131:
            case 129:
                break;

            default:
                FUNC_0("Unhandled class %s\n", FUNC_3(VAR_5->class));
                break;
        }
    }

    FUNC_2("Parameter not found.\n");

    return VAR_0;
}
