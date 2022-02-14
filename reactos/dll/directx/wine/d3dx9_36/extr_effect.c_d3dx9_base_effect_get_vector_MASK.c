
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct d3dx_parameter {int class; int bytes; scalar_t__ data; int type; int element_count; } ;
struct d3dx9_base_effect {int dummy; } ;
struct TYPE_4__ {int x; int y; int z; int w; } ;
typedef int INT ;
typedef int HRESULT ;
typedef TYPE_1__ D3DXVECTOR4 ;
typedef int D3DXHANDLE ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 struct d3dx_parameter* FUNC_4 (struct d3dx9_base_effect*,int ) ;
 int FUNC_5 (struct d3dx_parameter*,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_6(struct d3dx9_base_effect *VAR_4,
        D3DXHANDLE VAR_5, D3DXVECTOR4 *VAR_6)
{
    struct d3dx_parameter *VAR_7 = FUNC_4(VAR_4, VAR_5);

    if (VAR_6 && VAR_7 && !VAR_7->element_count)
    {
        FUNC_1("Class %s\n", FUNC_3(VAR_7->class));

        switch (VAR_7->class)
        {
            case 130:
            case 128:
                if (VAR_7->type == VAR_1 && VAR_7->bytes == 4)
                {
                    FUNC_1("INT fixup\n");
                    VAR_6->x = (((*(INT *)VAR_7->data) & 0xff0000) >> 16) * VAR_3;
                    VAR_6->y = (((*(INT *)VAR_7->data) & 0xff00) >> 8) * VAR_3;
                    VAR_6->z = ((*(INT *)VAR_7->data) & 0xff) * VAR_3;
                    VAR_6->w = (((*(INT *)VAR_7->data) & 0xff000000) >> 24) * VAR_3;
                    return VAR_2;
                }
                FUNC_5(VAR_7, VAR_6);
                return VAR_2;

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
