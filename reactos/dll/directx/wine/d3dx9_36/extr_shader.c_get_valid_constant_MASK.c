
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctab_constant {int dummy; } ;
struct TYPE_2__ {size_t Constants; } ;
struct ID3DXConstantTableImpl {struct ctab_constant* constants; TYPE_1__ desc; } ;
typedef size_t UINT ;
typedef int D3DXHANDLE ;


 struct ctab_constant* FUNC_0 (struct ID3DXConstantTableImpl*,int *,int ) ;
 int FUNC_1 (struct ctab_constant*) ;
 struct ctab_constant* FUNC_2 (struct ctab_constant*,int ) ;

__attribute__((used)) static inline struct ctab_constant *FUNC_3(struct ID3DXConstantTableImpl *VAR_0, D3DXHANDLE VAR_1)
{
    struct ctab_constant *VAR_2;
    UINT VAR_3;

    if (!VAR_1) return ((void*)0);

    for (VAR_3 = 0; VAR_3 < VAR_0->desc.Constants; ++VAR_3)
    {
        if (FUNC_1(&VAR_0->constants[VAR_3]) == VAR_1)
            return &VAR_0->constants[VAR_3];

        VAR_2 = FUNC_2(&VAR_0->constants[VAR_3], VAR_1);
        if (VAR_2) return VAR_2;
    }

    return FUNC_0(VAR_0, ((void*)0), VAR_1);
}
