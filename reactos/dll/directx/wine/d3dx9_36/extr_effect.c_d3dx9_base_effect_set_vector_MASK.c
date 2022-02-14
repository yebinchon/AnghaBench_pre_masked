
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct d3dx_parameter {int class; int bytes; int columns; scalar_t__ data; int type; int element_count; } ;
struct d3dx9_base_effect {int dummy; } ;
struct TYPE_5__ {int w; int x; int y; int z; } ;
typedef int INT ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ D3DXVECTOR4 ;
typedef int D3DXHANDLE ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 struct d3dx_parameter* FUNC_4 (struct d3dx9_base_effect*,int ) ;
 int FUNC_5 (int ,float) ;
 int FUNC_6 (scalar_t__,TYPE_1__ const*,int) ;
 int FUNC_7 (int ,float) ;
 int FUNC_8 (struct d3dx_parameter*) ;
 int FUNC_9 (struct d3dx_parameter*,TYPE_1__ const*) ;

__attribute__((used)) static HRESULT FUNC_10(struct d3dx9_base_effect *VAR_5,
        D3DXHANDLE VAR_6, const D3DXVECTOR4 *VAR_7)
{
    struct d3dx_parameter *VAR_8 = FUNC_4(VAR_5, VAR_6);

    if (VAR_8 && !VAR_8->element_count)
    {
        FUNC_1("Class %s\n", FUNC_3(VAR_8->class));

        switch (VAR_8->class)
        {
            case 130:
            case 128:
                FUNC_8(VAR_8);
                if (VAR_8->type == VAR_2 && VAR_8->bytes == 4)
                {
                    DWORD VAR_9;

                    FUNC_1("INT fixup\n");
                    VAR_9 = (DWORD)(FUNC_5(FUNC_7(VAR_7->z, 1.0f), 0.0f) * VAR_4);
                    VAR_9 += ((DWORD)(FUNC_5(FUNC_7(VAR_7->y, 1.0f), 0.0f) * VAR_4)) << 8;
                    VAR_9 += ((DWORD)(FUNC_5(FUNC_7(VAR_7->x, 1.0f), 0.0f) * VAR_4)) << 16;
                    VAR_9 += ((DWORD)(FUNC_5(FUNC_7(VAR_7->w, 1.0f), 0.0f) * VAR_4)) << 24;

                    *(INT *)VAR_8->data = VAR_9;
                    return VAR_3;
                }
                if (VAR_8->type == VAR_1)
                {
                    FUNC_6(VAR_8->data, VAR_7, VAR_8->columns * sizeof(float));
                    return VAR_3;
                }

                FUNC_9(VAR_8, VAR_7);
                return VAR_3;

            case 132:
            case 131:
            case 129:
                break;

            default:
                FUNC_0("Unhandled class %s\n", FUNC_3(VAR_8->class));
                break;
        }
    }

    FUNC_2("Parameter not found.\n");

    return VAR_0;
}
