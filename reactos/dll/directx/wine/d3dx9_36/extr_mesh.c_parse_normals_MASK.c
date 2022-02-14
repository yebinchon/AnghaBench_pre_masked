
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mesh_data {int num_poly_faces; int num_tri_faces; int num_normals; int* normal_indices; int* num_tri_per_face; int * normals; int fvf; } ;
struct TYPE_7__ {TYPE_1__* lpVtbl; } ;
struct TYPE_6__ {int (* Unlock ) (TYPE_2__*) ;int (* Lock ) (TYPE_2__*,int*,void const**) ;} ;
typedef int SIZE_T ;
typedef TYPE_2__ ID3DXFileData ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int D3DXVECTOR3 ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (TYPE_2__*,int*,void const**) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_9(ID3DXFileData *VAR_4, struct mesh_data *VAR_5)
{
    HRESULT VAR_6;
    SIZE_T VAR_7;
    const BYTE *VAR_8;
    DWORD *VAR_9;
    DWORD VAR_10;
    DWORD VAR_11 = VAR_5->num_poly_faces * 2 + VAR_5->num_tri_faces;

    FUNC_4(FUNC_2(), 0, VAR_5->normals);
    VAR_5->num_normals = 0;
    VAR_5->normals = ((void*)0);
    VAR_5->normal_indices = ((void*)0);
    VAR_5->fvf |= VAR_0;

    VAR_6 = VAR_4->lpVtbl->Lock(VAR_4, &VAR_7, (const void**)&VAR_8);
    if (FUNC_1(VAR_6)) return VAR_6;
    VAR_6 = VAR_2;

    if (VAR_7 < sizeof(DWORD) * 2) {
        FUNC_5("truncated data (%ld bytes)\n", VAR_7);
        goto end;
    }
    VAR_5->num_normals = *(DWORD*)VAR_8;
    VAR_8 += sizeof(DWORD);
    if (VAR_7 < sizeof(DWORD) * 2 + VAR_5->num_normals * sizeof(D3DXVECTOR3) +
                    VAR_11 * sizeof(DWORD)) {
        FUNC_5("truncated data (%ld bytes)\n", VAR_7);
        goto end;
    }

    VAR_5->normals = FUNC_3(FUNC_2(), 0, VAR_5->num_normals * sizeof(D3DXVECTOR3));
    VAR_5->normal_indices = FUNC_3(FUNC_2(), 0, VAR_11 * sizeof(DWORD));
    if (!VAR_5->normals || !VAR_5->normal_indices) {
        VAR_6 = VAR_3;
        goto end;
    }

    FUNC_6(VAR_5->normals, VAR_8, VAR_5->num_normals * sizeof(D3DXVECTOR3));
    VAR_8 += VAR_5->num_normals * sizeof(D3DXVECTOR3);
    for (VAR_10 = 0; VAR_10 < VAR_5->num_normals; VAR_10++)
        FUNC_0(&VAR_5->normals[VAR_10], &VAR_5->normals[VAR_10]);

    if (*(DWORD*)VAR_8 != VAR_5->num_poly_faces) {
        FUNC_5("number of face normals (%u) doesn't match number of faces (%u)\n",
             *(DWORD*)VAR_8, VAR_5->num_poly_faces);
        goto end;
    }
    VAR_8 += sizeof(DWORD);
    VAR_9 = VAR_5->normal_indices;
    for (VAR_10 = 0; VAR_10 < VAR_5->num_poly_faces; VAR_10++)
    {
        DWORD VAR_12;
        DWORD VAR_13 = *(DWORD*)VAR_8;
        if (VAR_13 != VAR_5->num_tri_per_face[VAR_10] + 2) {
            FUNC_5("face %u: number of normals (%u) doesn't match number of vertices (%u)\n",
                 VAR_10, VAR_13, VAR_5->num_tri_per_face[VAR_10] + 2);
            goto end;
        }
        VAR_8 += sizeof(DWORD);

        for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
            DWORD VAR_14 = *(DWORD*)VAR_8;
            if (VAR_14 >= VAR_5->num_normals) {
                FUNC_5("face %u, normal index %u: reference to undefined normal %u (only %u normals)\n",
                     VAR_10, VAR_12, VAR_14, VAR_5->num_normals);
                goto end;
            }
            *VAR_9++ = VAR_14;
            VAR_8 += sizeof(DWORD);
        }
    }

    VAR_6 = VAR_1;

end:
    VAR_4->lpVtbl->Unlock(VAR_4);
    return VAR_6;
}
