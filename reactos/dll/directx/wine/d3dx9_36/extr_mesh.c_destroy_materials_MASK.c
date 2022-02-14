
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mesh_data {size_t num_materials; TYPE_1__* material_indices; TYPE_1__* materials; } ;
struct TYPE_2__ {struct TYPE_2__* pTextureFilename; } ;
typedef size_t DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct mesh_data *VAR_0)
{
    DWORD VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->num_materials; VAR_1++)
        FUNC_1(FUNC_0(), 0, VAR_0->materials[VAR_1].pTextureFilename);
    FUNC_1(FUNC_0(), 0, VAR_0->materials);
    FUNC_1(FUNC_0(), 0, VAR_0->material_indices);
    VAR_0->num_materials = 0;
    VAR_0->materials = ((void*)0);
    VAR_0->material_indices = ((void*)0);
}
