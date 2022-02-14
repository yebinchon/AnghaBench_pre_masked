
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct mesh_data {int num_vertices; int num_poly_faces; int num_tri_faces; int* num_tri_per_face; int* indices; int nb_bones; scalar_t__ skin_info; void* vertices; int fvf; } ;
struct TYPE_17__ {TYPE_1__* lpVtbl; } ;
struct TYPE_16__ {int (* Unlock ) (TYPE_2__*) ;int (* GetType ) (TYPE_2__*,int *) ;int (* GetChild ) (TYPE_2__*,int,TYPE_2__**) ;int (* GetChildren ) (TYPE_2__*,int*) ;int (* Lock ) (TYPE_2__*,int*,void const**) ;} ;
typedef int SIZE_T ;
typedef TYPE_2__ ID3DXFileData ;
typedef int HRESULT ;
typedef int GUID ;
typedef int DWORD ;
typedef int D3DXVECTOR3 ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (void*,int const*,int) ;
 int FUNC_8 (TYPE_2__*,struct mesh_data*) ;
 int FUNC_9 (TYPE_2__*,struct mesh_data*) ;
 int FUNC_10 (TYPE_2__*,struct mesh_data*,int) ;
 int FUNC_11 (TYPE_2__*,struct mesh_data*) ;
 int FUNC_12 (TYPE_2__*,struct mesh_data*) ;
 int FUNC_13 (TYPE_2__*,int*,void const**) ;
 int FUNC_14 (TYPE_2__*,int*) ;
 int FUNC_15 (TYPE_2__*,int,TYPE_2__**) ;
 int FUNC_16 (TYPE_2__*,int *) ;
 int FUNC_17 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_18(ID3DXFileData *VAR_12, struct mesh_data *VAR_13, DWORD VAR_14)
{
    HRESULT VAR_15;
    SIZE_T VAR_16;
    const BYTE *VAR_17, *VAR_18;
    DWORD *VAR_19;
    GUID VAR_20;
    ID3DXFileData *VAR_21 = ((void*)0);
    DWORD VAR_22;
    SIZE_T VAR_23;
    DWORD VAR_24 = 0;
    VAR_15 = VAR_12->lpVtbl->Lock(VAR_12, &VAR_16, (const void**)&VAR_17);
    if (FUNC_0(VAR_15)) return VAR_15;

    VAR_18 = VAR_17;
    VAR_15 = VAR_4;

    if (VAR_16 < sizeof(DWORD) * 2) {
        FUNC_5("truncated data (%ld bytes)\n", VAR_16);
        goto end;
    }
    VAR_13->num_vertices = *(DWORD*)VAR_18;
    if (VAR_16 < sizeof(DWORD) * 2 + VAR_13->num_vertices * sizeof(D3DXVECTOR3)) {
        FUNC_5("truncated data (%ld bytes)\n", VAR_16);
        goto end;
    }
    VAR_18 += sizeof(DWORD) + VAR_13->num_vertices * sizeof(D3DXVECTOR3);

    VAR_13->num_poly_faces = *(DWORD*)VAR_18;
    VAR_18 += sizeof(DWORD);

    VAR_13->num_tri_faces = 0;
    for (VAR_22 = 0; VAR_22 < VAR_13->num_poly_faces; VAR_22++)
    {
        DWORD VAR_25;
        DWORD VAR_26;

        if (VAR_16 - (VAR_18 - VAR_17) < sizeof(DWORD)) {
            FUNC_5("truncated data (%ld bytes)\n", VAR_16);
            goto end;
        }
        VAR_25 = *(DWORD*)VAR_18;
        VAR_18 += sizeof(DWORD);
        if (VAR_16 - (VAR_18 - VAR_17) < VAR_25 * sizeof(DWORD)) {
            FUNC_5("truncated data (%ld bytes)\n", VAR_16);
            goto end;
        }
        if (VAR_25 < 3) {
            FUNC_5("face %u has only %u vertices\n", VAR_22, VAR_25);
            goto end;
        }
        for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++) {
            if (*(DWORD*)VAR_18 >= VAR_13->num_vertices) {
                FUNC_5("face %u, index %u: undefined vertex %u (only %u vertices)\n",
                     VAR_22, VAR_26, *(DWORD*)VAR_18, VAR_13->num_vertices);
                goto end;
            }
            VAR_18 += sizeof(DWORD);
        }
        VAR_13->num_tri_faces += VAR_25 - 2;
    }

    VAR_13->fvf = VAR_0;

    VAR_13->vertices = FUNC_2(FUNC_1(), 0,
            VAR_13->num_vertices * sizeof(*VAR_13->vertices));
    VAR_13->num_tri_per_face = FUNC_2(FUNC_1(), 0,
            VAR_13->num_poly_faces * sizeof(*VAR_13->num_tri_per_face));
    VAR_13->indices = FUNC_2(FUNC_1(), 0,
            (VAR_13->num_tri_faces + VAR_13->num_poly_faces * 2) * sizeof(*VAR_13->indices));
    if (!VAR_13->vertices || !VAR_13->num_tri_per_face || !VAR_13->indices) {
        VAR_15 = VAR_5;
        goto end;
    }

    VAR_18 = VAR_17 + sizeof(DWORD);
    FUNC_7(VAR_13->vertices, VAR_18, VAR_13->num_vertices * sizeof(D3DXVECTOR3));
    VAR_18 += VAR_13->num_vertices * sizeof(D3DXVECTOR3) + sizeof(DWORD);

    VAR_19 = VAR_13->indices;
    for (VAR_22 = 0; VAR_22 < VAR_13->num_poly_faces; VAR_22++)
    {
        DWORD VAR_27;

        VAR_27 = *(DWORD*)VAR_18;
        VAR_18 += sizeof(DWORD);
        VAR_13->num_tri_per_face[VAR_22] = VAR_27 - 2;

        while (VAR_27--) {
            *VAR_19++ = *(DWORD*)VAR_18;
            VAR_18 += sizeof(DWORD);
        }
    }

    VAR_15 = VAR_12->lpVtbl->GetChildren(VAR_12, &VAR_23);
    if (FUNC_0(VAR_15))
        goto end;

    for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++)
    {
        VAR_15 = VAR_12->lpVtbl->GetChild(VAR_12, VAR_22, &VAR_21);
        if (FUNC_0(VAR_15))
            goto end;
        VAR_15 = VAR_21->lpVtbl->GetType(VAR_21, &VAR_20);
        if (FUNC_0(VAR_15))
            goto end;

        if (FUNC_4(&VAR_20, &VAR_9)) {
            VAR_15 = FUNC_9(VAR_21, VAR_13);
        } else if (FUNC_4(&VAR_20, &VAR_11)) {
            VAR_15 = FUNC_12(VAR_21, VAR_13);
        } else if (FUNC_4(&VAR_20, &VAR_10)) {
            VAR_15 = FUNC_11(VAR_21, VAR_13);
        } else if (FUNC_4(&VAR_20, &VAR_8) &&
                   (VAR_14 & VAR_6))
        {
            VAR_15 = FUNC_8(VAR_21, VAR_13);
        } else if (VAR_14 & VAR_7) {
            if (FUNC_4(&VAR_20, &VAR_3)) {
                if (VAR_13->skin_info) {
                    FUNC_5("Skin mesh header already encountered\n");
                    VAR_15 = VAR_4;
                    goto end;
                }
                VAR_15 = FUNC_10(VAR_21, VAR_13, 0);
                if (FUNC_0(VAR_15))
                    goto end;
            } else if (FUNC_4(&VAR_20, &VAR_2)) {
                if (!VAR_13->skin_info) {
                    FUNC_5("Skin weights found but skin mesh header not encountered yet\n");
                    VAR_15 = VAR_4;
                    goto end;
                }
                VAR_15 = FUNC_10(VAR_21, VAR_13, VAR_24);
                if (FUNC_0(VAR_15))
                    goto end;
                VAR_24++;
            }
        }
        if (FUNC_0(VAR_15))
            goto end;

        FUNC_3(VAR_21);
        VAR_21 = ((void*)0);
    }

    if (VAR_13->skin_info && (VAR_24 != VAR_13->nb_bones)) {
        FUNC_5("Mismatch between nb skin weights info %u encountered and nb bones %u from skin mesh header\n",
             VAR_24, VAR_13->nb_bones);
        VAR_15 = VAR_4;
        goto end;
    }

    if ((VAR_14 & VAR_7) && !VAR_13->skin_info)
    {
        VAR_15 = FUNC_6(&VAR_13->skin_info);
        if (FUNC_0(VAR_15))
            goto end;
    }

    VAR_15 = VAR_1;

end:
    if (VAR_21)
        FUNC_3(VAR_21);
    VAR_12->lpVtbl->Unlock(VAR_12);
    return VAR_15;
}
