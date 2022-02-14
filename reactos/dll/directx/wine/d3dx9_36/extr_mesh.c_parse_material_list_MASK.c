
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mesh_data {int num_poly_faces; int num_materials; int * materials; void* material_indices; } ;
struct TYPE_13__ {TYPE_1__* lpVtbl; } ;
struct TYPE_12__ {int (* Unlock ) (TYPE_2__*) ;int (* GetType ) (TYPE_2__*,int *) ;int (* GetChild ) (TYPE_2__*,int,TYPE_2__**) ;int (* GetChildren ) (TYPE_2__*,int*) ;int (* Lock ) (TYPE_2__*,int*,void const**) ;} ;
typedef int SIZE_T ;
typedef TYPE_2__ ID3DXFileData ;
typedef int HRESULT ;
typedef int GUID ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_3 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct mesh_data*) ;
 int FUNC_7 (void*,int const*,int) ;
 int FUNC_8 (TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_2__*,int*,void const**) ;
 int FUNC_10 (TYPE_2__*,int*) ;
 int FUNC_11 (TYPE_2__*,int,TYPE_2__**) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_14(ID3DXFileData *VAR_4, struct mesh_data *VAR_5)
{
    HRESULT VAR_6;
    SIZE_T VAR_7;
    const DWORD *VAR_8, *VAR_9;
    GUID VAR_10;
    ID3DXFileData *VAR_11 = ((void*)0);
    DWORD VAR_12;
    DWORD VAR_13;
    SIZE_T VAR_14;

    FUNC_6(VAR_5);

    VAR_6 = VAR_4->lpVtbl->Lock(VAR_4, &VAR_7, (const void**)&VAR_8);
    if (FUNC_0(VAR_6)) return VAR_6;
    VAR_9 = VAR_8;
    VAR_6 = VAR_1;

    if (VAR_7 < sizeof(DWORD)) {
        FUNC_5("truncated data (%ld bytes)\n", VAR_7);
        goto end;
    }
    VAR_12 = *VAR_9++;
    if (!VAR_12) {
        VAR_6 = VAR_0;
        goto end;
    }

    if (VAR_7 < 2 * sizeof(DWORD)) {
        FUNC_5("truncated data (%ld bytes)\n", VAR_7);
        goto end;
    }
    if (*VAR_9++ != VAR_5->num_poly_faces) {
        FUNC_5("number of material face indices (%u) doesn't match number of faces (%u)\n",
             *(VAR_9 - 1), VAR_5->num_poly_faces);
        goto end;
    }
    if (VAR_7 < 2 * sizeof(DWORD) + VAR_5->num_poly_faces * sizeof(DWORD)) {
        FUNC_5("truncated data (%ld bytes)\n", VAR_7);
        goto end;
    }
    for (VAR_13 = 0; VAR_13 < VAR_5->num_poly_faces; VAR_13++) {
        if (*VAR_9++ >= VAR_12) {
            FUNC_5("face %u: reference to undefined material %u (only %u materials)\n",
                 VAR_13, *(VAR_9 - 1), VAR_12);
            goto end;
        }
    }

    VAR_5->materials = FUNC_2(FUNC_1(), 0, VAR_12 * sizeof(*VAR_5->materials));
    VAR_5->material_indices = FUNC_2(FUNC_1(), 0, VAR_5->num_poly_faces * sizeof(*VAR_5->material_indices));
    if (!VAR_5->materials || !VAR_5->material_indices) {
        VAR_6 = VAR_2;
        goto end;
    }
    FUNC_7(VAR_5->material_indices, VAR_8 + 2, VAR_5->num_poly_faces * sizeof(DWORD));

    VAR_6 = VAR_4->lpVtbl->GetChildren(VAR_4, &VAR_14);
    if (FUNC_0(VAR_6))
        goto end;

    for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
    {
        VAR_6 = VAR_4->lpVtbl->GetChild(VAR_4, VAR_13, &VAR_11);
        if (FUNC_0(VAR_6))
            goto end;
        VAR_6 = VAR_11->lpVtbl->GetType(VAR_11, &VAR_10);
        if (FUNC_0(VAR_6))
            goto end;

        if (FUNC_4(&VAR_10, &VAR_3)) {
            if (VAR_5->num_materials >= VAR_12) {
                FUNC_5("more materials defined than declared\n");
                VAR_6 = VAR_1;
                goto end;
            }
            VAR_6 = FUNC_8(VAR_11, &VAR_5->materials[VAR_5->num_materials++]);
            if (FUNC_0(VAR_6))
                goto end;
        }

        FUNC_3(VAR_11);
        VAR_11 = ((void*)0);
    }
    if (VAR_12 != VAR_5->num_materials) {
        FUNC_5("only %u of %u materials defined\n", VAR_12, VAR_5->num_materials);
        VAR_6 = VAR_1;
    }

end:
    if (VAR_11)
        FUNC_3(VAR_11);
    VAR_4->lpVtbl->Unlock(VAR_4);
    return VAR_6;
}
