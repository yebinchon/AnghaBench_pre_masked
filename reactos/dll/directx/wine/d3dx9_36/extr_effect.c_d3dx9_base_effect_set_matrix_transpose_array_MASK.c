
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
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 struct d3dx_parameter* FUNC_4 (struct d3dx9_base_effect*,int ) ;
 int FUNC_5 (struct d3dx_parameter*) ;
 int FUNC_6 (int *,int const*) ;

__attribute__((used)) static HRESULT FUNC_7(struct d3dx9_base_effect *VAR_2,
        D3DXHANDLE VAR_3, const D3DXMATRIX *VAR_4, UINT VAR_5)
{
    struct d3dx_parameter *VAR_6 = FUNC_4(VAR_2, VAR_3);

    if (VAR_6 && VAR_6->element_count >= VAR_5)
    {
        UINT VAR_7;

        FUNC_1("Class %s\n", FUNC_3(VAR_6->class));

        switch (VAR_6->class)
        {
            case 132:
                FUNC_5(VAR_6);
                for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7)
                {
                    FUNC_6(&VAR_6->members[VAR_7], &VAR_4[VAR_7]);
                }
                return VAR_1;

            case 130:
            case 128:
            case 131:
            case 129:
                break;

            default:
                FUNC_0("Unhandled class %s\n", FUNC_3(VAR_6->class));
                break;
        }
    }

    FUNC_2("Parameter not found.\n");

    return VAR_0;
}
