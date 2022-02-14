
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct d3dx_effect_pool {int dummy; } ;
struct IDirect3DDevice9 {int dummy; } ;
struct ID3DXEffectPool {TYPE_2__* lpVtbl; } ;
struct TYPE_6__ {int * techniques; } ;
struct TYPE_4__ {int * lpVtbl; } ;
struct ID3DXEffectImpl {int ref; int * active_pass; TYPE_3__ base_effect; int * active_technique; struct IDirect3DDevice9* device; struct ID3DXEffectPool* pool; TYPE_1__ ID3DXEffect_iface; } ;
typedef int UINT ;
struct TYPE_5__ {int (* AddRef ) (struct ID3DXEffectPool*) ;} ;
typedef int SIZE_T ;
typedef int ID3DInclude ;
typedef int ID3DBlob ;
typedef int HRESULT ;
typedef int D3D_SHADER_MACRO ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct IDirect3DDevice9*) ;
 int FUNC_3 (char*,struct ID3DXEffectImpl*,struct IDirect3DDevice9*,char const*,int ,struct ID3DXEffectPool*) ;
 int FUNC_4 (TYPE_3__*,char const*,int ,int const*,int *,int ,int **,struct ID3DXEffectImpl*,struct d3dx_effect_pool*,char const*) ;
 int FUNC_5 (struct ID3DXEffectImpl*) ;
 struct d3dx_effect_pool* FUNC_6 (struct ID3DXEffectPool*) ;
 int FUNC_7 (struct ID3DXEffectPool*) ;

__attribute__((used)) static HRESULT FUNC_8(struct ID3DXEffectImpl *VAR_2, struct IDirect3DDevice9 *VAR_3,
        const char *VAR_4, SIZE_T VAR_5, const D3D_SHADER_MACRO *VAR_6, ID3DInclude *VAR_7,
        UINT VAR_8, ID3DBlob **VAR_9, struct ID3DXEffectPool *VAR_10, const char *VAR_11)
{
    HRESULT VAR_12;
    struct d3dx_effect_pool *VAR_13 = ((void*)0);

    FUNC_3("effect %p, device %p, data %p, data_size %lu, pool %p\n", VAR_2, VAR_3, VAR_4, VAR_5, VAR_10);

    VAR_2->ID3DXEffect_iface.lpVtbl = &VAR_1;
    VAR_2->ref = 1;

    if (VAR_10)
    {
        VAR_10->lpVtbl->AddRef(VAR_10);
        VAR_13 = FUNC_6(VAR_10);
    }
    VAR_2->pool = VAR_10;

    FUNC_2(VAR_3);
    VAR_2->device = VAR_3;

    if (FUNC_0(VAR_12 = FUNC_4(&VAR_2->base_effect, VAR_4, VAR_5, VAR_6, VAR_7,
            VAR_8, VAR_9, VAR_2, VAR_13, VAR_11)))
    {
        FUNC_1("Failed to parse effect, hr %#x.\n", VAR_12);
        FUNC_5(VAR_2);
        return VAR_12;
    }


    if (VAR_2->base_effect.techniques)
    {
        VAR_2->active_technique = &VAR_2->base_effect.techniques[0];
        VAR_2->active_pass = ((void*)0);
    }

    return VAR_0;
}
