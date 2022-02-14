
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ element_count; int class; int * members; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;
typedef int D3DXMATRIX ;
typedef int D3DXHANDLE ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 struct d3dx_parameter* FUNC_3 (struct d3dx9_base_effect*,int ) ;
 int FUNC_4 (struct d3dx_parameter*) ;
 int FUNC_5 (int *,int const*) ;

__attribute__((used)) static HRESULT FUNC_6(struct d3dx9_base_effect *VAR_2,
        D3DXHANDLE VAR_3, const D3DXMATRIX **VAR_4, UINT VAR_5)
{
    struct d3dx_parameter *VAR_6 = FUNC_3(VAR_2, VAR_3);

    if (VAR_6 && VAR_5 <= VAR_6->element_count)
    {
        UINT VAR_7;

        switch (VAR_6->class)
        {
            case 131:
                FUNC_4(VAR_6);
                for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7)
                {
                    FUNC_5(&VAR_6->members[VAR_7], VAR_4[VAR_7]);
                }
                return VAR_1;

            case 129:
            case 128:
            case 130:
                break;

            default:
                FUNC_0("Unhandled class %s\n", FUNC_2(VAR_6->class));
                break;
        }
    }

    FUNC_1("Parameter not found.\n");

    return VAR_0;
}
