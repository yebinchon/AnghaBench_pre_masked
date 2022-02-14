
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t Constants; } ;
struct ID3DXConstantTableImpl {int * ctab; int * constants; TYPE_1__ desc; } ;
typedef size_t UINT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ID3DXConstantTableImpl *VAR_0)
{
    if (VAR_0->constants)
    {
        UINT VAR_1;

        for (VAR_1 = 0; VAR_1 < VAR_0->desc.Constants; ++VAR_1)
        {
            FUNC_2(&VAR_0->constants[VAR_1]);
        }
        FUNC_1(FUNC_0(), 0, VAR_0->constants);
    }
    FUNC_1(FUNC_0(), 0, VAR_0->ctab);
}
