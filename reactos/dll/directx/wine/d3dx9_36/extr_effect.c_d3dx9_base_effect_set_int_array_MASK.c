
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int bytes; int class; int type; scalar_t__ data; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef size_t UINT ;
typedef int INT ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int D3DXHANDLE ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 struct d3dx_parameter* FUNC_4 (struct d3dx9_base_effect*,int ) ;
 size_t FUNC_5 (size_t,int) ;
 int FUNC_6 (struct d3dx_parameter*) ;
 int FUNC_7 (int *,int ,int const*,int ) ;

__attribute__((used)) static HRESULT FUNC_8(struct d3dx9_base_effect *VAR_3,
        D3DXHANDLE VAR_4, const INT *VAR_5, UINT VAR_6)
{
    struct d3dx_parameter *VAR_7 = FUNC_4(VAR_3, VAR_4);

    if (VAR_7)
    {
        UINT VAR_8, VAR_9 = FUNC_5(VAR_6, VAR_7->bytes / sizeof(DWORD));

        FUNC_1("Class %s\n", FUNC_3(VAR_7->class));

        switch (VAR_7->class)
        {
            case 130:
            case 128:
            case 132:
                for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
                {
                    FUNC_7((DWORD *)VAR_7->data + VAR_8, VAR_7->type, &VAR_5[VAR_8], VAR_1);
                }
                FUNC_6(VAR_7);
                return VAR_2;

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
