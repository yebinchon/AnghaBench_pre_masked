
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3drm_mesh_builder {size_t nb_materials; TYPE_1__* material_indices; TYPE_1__* materials; scalar_t__ nb_coords2d; TYPE_1__* pCoords2d; scalar_t__ nb_faces; scalar_t__ face_data_size; TYPE_1__* pFaceData; scalar_t__ normals_size; scalar_t__ nb_normals; TYPE_1__* normals; scalar_t__ vertices_size; scalar_t__ nb_vertices; TYPE_1__* vertices; int IDirect3DRMMeshBuilder3_iface; } ;
struct TYPE_2__ {scalar_t__ texture; scalar_t__ material; } ;
typedef size_t DWORD ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct d3drm_mesh_builder *VAR_0)
{
    DWORD VAR_1;

    FUNC_1(&VAR_0->IDirect3DRMMeshBuilder3_iface, ((void*)0));
    FUNC_3(VAR_0->vertices);
    VAR_0->vertices = ((void*)0);
    VAR_0->nb_vertices = 0;
    VAR_0->vertices_size = 0;
    FUNC_3(VAR_0->normals);
    VAR_0->normals = ((void*)0);
    VAR_0->nb_normals = 0;
    VAR_0->normals_size = 0;
    FUNC_3(VAR_0->pFaceData);
    VAR_0->pFaceData = ((void*)0);
    VAR_0->face_data_size = 0;
    VAR_0->nb_faces = 0;
    FUNC_3(VAR_0->pCoords2d);
    VAR_0->pCoords2d = ((void*)0);
    VAR_0->nb_coords2d = 0;
    for (VAR_1 = 0; VAR_1 < VAR_0->nb_materials; VAR_1++)
    {
        if (VAR_0->materials[VAR_1].material)
            FUNC_0(VAR_0->materials[VAR_1].material);
        if (VAR_0->materials[VAR_1].texture)
            FUNC_2(VAR_0->materials[VAR_1].texture);
    }
    VAR_0->nb_materials = 0;
    FUNC_3(VAR_0->materials);
    VAR_0->materials = ((void*)0);
    FUNC_3(VAR_0->material_indices);
    VAR_0->material_indices = ((void*)0);
}
