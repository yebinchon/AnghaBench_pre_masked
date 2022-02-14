
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ID3DXEffectImpl {int device; scalar_t__ manager; TYPE_2__* pool; int base_effect; } ;
struct TYPE_4__ {TYPE_1__* lpVtbl; } ;
struct TYPE_3__ {int (* Release ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,struct ID3DXEffectImpl*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct ID3DXEffectImpl *VAR_0)
{
    FUNC_2("Free effect %p\n", VAR_0);

    FUNC_3(&VAR_0->base_effect);

    if (VAR_0->pool)
    {
        VAR_0->pool->lpVtbl->Release(VAR_0->pool);
    }

    if (VAR_0->manager)
    {
        FUNC_1(VAR_0->manager);
    }

    FUNC_0(VAR_0->device);
}
