
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Elements; size_t StructMembers; } ;
struct ctab_constant {struct ctab_constant* constants; TYPE_1__ desc; } ;
typedef size_t UINT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct ctab_constant*) ;

__attribute__((used)) static void FUNC_2(struct ctab_constant *VAR_0)
{
    if (VAR_0->constants)
    {
        UINT VAR_1, VAR_2 = VAR_0->desc.Elements > 1 ? VAR_0->desc.Elements : VAR_0->desc.StructMembers;

        for (VAR_1 = 0; VAR_1 < VAR_2; ++VAR_1)
        {
            FUNC_2(&VAR_0->constants[VAR_1]);
        }
        FUNC_1(FUNC_0(), 0, VAR_0->constants);
    }
}
