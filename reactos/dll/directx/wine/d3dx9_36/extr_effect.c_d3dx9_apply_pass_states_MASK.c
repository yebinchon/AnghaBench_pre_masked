
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_pass {unsigned int state_count; int update_version; int * states; } ;
struct ID3DXEffectImpl {int light_updated; scalar_t__ material_updated; int current_material; int * current_light; int base_effect; } ;
typedef int ULONG64 ;
typedef int HRESULT ;
typedef int BOOL ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ID3DXEffectImpl*,int ,unsigned int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,struct ID3DXEffectImpl*,struct d3dx_pass*,unsigned int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct ID3DXEffectImpl*,struct d3dx_pass*,int *,unsigned int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static HRESULT FUNC_7(struct ID3DXEffectImpl *VAR_4, struct d3dx_pass *VAR_5, BOOL VAR_6)
{
    unsigned int VAR_7;
    HRESULT VAR_8;
    HRESULT VAR_9;
    ULONG64 VAR_10 = FUNC_6(&VAR_4->base_effect);

    FUNC_3("effect %p, pass %p, state_count %u.\n", VAR_4, VAR_5, VAR_5->state_count);

    VAR_8 = VAR_0;
    for (VAR_7 = 0; VAR_7 < VAR_5->state_count; ++VAR_7)
    {
        if (FUNC_1(VAR_9 = FUNC_5(VAR_4, VAR_5, &VAR_5->states[VAR_7], ~0u, VAR_6)))
        {
            FUNC_4("Error applying state, hr %#x.\n", VAR_9);
            VAR_8 = VAR_9;
        }
    }

    if (VAR_4->light_updated)
    {
        for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->current_light); ++VAR_7)
        {
            if ((VAR_4->light_updated & (1u << VAR_7))
                    && FUNC_1(VAR_9 = FUNC_2(VAR_4, VAR_2, VAR_7, &VAR_4->current_light[VAR_7])))
            {
                FUNC_4("Error setting light, hr %#x.\n", VAR_9);
                VAR_8 = VAR_9;
            }
        }
        VAR_4->light_updated = 0;
    }

    if (VAR_4->material_updated
            && FUNC_1(VAR_9 = FUNC_2(VAR_4, VAR_3, &VAR_4->current_material)))
    {
        FUNC_4("Error setting material, hr %#x.\n", VAR_9);
        VAR_8 = VAR_9;
    }
    VAR_4->material_updated = VAR_1;

    VAR_5->update_version = VAR_10;
    return VAR_8;
}
