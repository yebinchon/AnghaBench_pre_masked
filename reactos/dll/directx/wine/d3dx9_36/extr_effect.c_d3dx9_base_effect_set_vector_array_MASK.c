
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ element_count; int class; int columns; float* data; int * members; int type; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef scalar_t__ UINT ;
typedef int HRESULT ;
typedef int D3DXVECTOR4 ;
typedef int D3DXHANDLE ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 struct d3dx_parameter* FUNC_4 (struct d3dx9_base_effect*,int ) ;
 int FUNC_5 (float*,int const*,int) ;
 int FUNC_6 (struct d3dx_parameter*) ;
 int FUNC_7 (int *,int const*) ;

__attribute__((used)) static HRESULT FUNC_8(struct d3dx9_base_effect *VAR_3,
        D3DXHANDLE VAR_4, const D3DXVECTOR4 *VAR_5, UINT VAR_6)
{
    struct d3dx_parameter *VAR_7 = FUNC_4(VAR_3, VAR_4);

    if (VAR_7 && VAR_7->element_count && VAR_7->element_count >= VAR_6)
    {
        UINT VAR_8;

        FUNC_1("Class %s\n", FUNC_3(VAR_7->class));

        switch (VAR_7->class)
        {
            case 128:
                FUNC_6(VAR_7);
                if (VAR_7->type == VAR_1)
                {
                    if (VAR_7->columns == 4)
                        FUNC_5(VAR_7->data, VAR_5, VAR_6 * 4 * sizeof(float));
                    else
                        for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
                            FUNC_5((float *)VAR_7->data + VAR_7->columns * VAR_8, VAR_5 + VAR_8,
                                    VAR_7->columns * sizeof(float));
                    return VAR_2;
                }

                for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
                {
                    FUNC_7(&VAR_7->members[VAR_8], &VAR_5[VAR_8]);
                }
                return VAR_2;

            case 130:
            case 132:
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
