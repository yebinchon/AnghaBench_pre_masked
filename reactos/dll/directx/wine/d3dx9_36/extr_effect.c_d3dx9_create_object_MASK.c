
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_parameter {int type; scalar_t__ data; } ;
struct d3dx_object {void* creation_failed; int data; int size; struct d3dx_parameter* param; } ;
struct d3dx9_base_effect {TYPE_1__* effect; } ;
struct IDirect3DDevice9 {int dummy; } ;
struct TYPE_2__ {struct IDirect3DDevice9* device; } ;
typedef int IDirect3DVertexShader9 ;
typedef int IDirect3DPixelShader9 ;
typedef int HRESULT ;





 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct IDirect3DDevice9*,int ,int **) ;
 int FUNC_5 (struct IDirect3DDevice9*,int ,int **) ;
 void* VAR_2 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_8(struct d3dx9_base_effect *VAR_3, struct d3dx_object *VAR_4)
{
    struct d3dx_parameter *VAR_5 = VAR_4->param;
    struct IDirect3DDevice9 *VAR_6 = VAR_3->effect->device;
    HRESULT VAR_7;

    if (*(char **)VAR_5->data)
        FUNC_0("Parameter data already allocated.\n");

    switch (VAR_5->type)
    {
        case 129:
            *(char **)VAR_5->data = FUNC_3(FUNC_2(), 0, VAR_4->size);
            if (!*(char **)VAR_5->data)
            {
                FUNC_0("Out of memory.\n");
                return VAR_1;
            }
            FUNC_7(*(char **)VAR_5->data, VAR_4->data, VAR_4->size);
            break;
        case 128:
            if (FUNC_1(VAR_7 = FUNC_5(VAR_6, VAR_4->data,
                    (IDirect3DVertexShader9 **)VAR_5->data)))
            {
                FUNC_6("Failed to create vertex shader.\n");
                VAR_4->creation_failed = VAR_2;
            }
            break;
        case 130:
            if (FUNC_1(VAR_7 = FUNC_4(VAR_6, VAR_4->data,
                    (IDirect3DPixelShader9 **)VAR_5->data)))
            {
                FUNC_6("Failed to create pixel shader.\n");
                VAR_4->creation_failed = VAR_2;
            }
            break;
        default:
            break;
    }
    return VAR_0;
}
