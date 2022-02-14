
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mesh_container {int mesh; int num_materials; int materials; int adjacency; int transform; int entry; } ;
struct list {int dummy; } ;
struct IDirect3DDevice9 {int dummy; } ;
struct ID3DXFileData {TYPE_1__* lpVtbl; } ;
struct TYPE_2__ {int (* GetType ) (struct ID3DXFileData*,int *) ;int (* GetChild ) (struct ID3DXFileData*,scalar_t__,struct ID3DXFileData**) ;int (* GetChildren ) (struct ID3DXFileData*,scalar_t__*) ;} ;
typedef scalar_t__ SIZE_T ;
typedef struct ID3DXFileData ID3DXFileData ;
typedef int HRESULT ;
typedef int GUID ;
typedef int DWORD ;
typedef int D3DXMATRIX ;


 int FUNC_0 (struct ID3DXFileData*,int,struct IDirect3DDevice9*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_2 ;
 struct mesh_container* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct ID3DXFileData*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct list*,int *) ;
 int FUNC_8 (struct ID3DXFileData*,int *) ;
 int FUNC_9 (struct ID3DXFileData*,scalar_t__*) ;
 int FUNC_10 (struct ID3DXFileData*,scalar_t__,struct ID3DXFileData**) ;
 int FUNC_11 (struct ID3DXFileData*,int *) ;

__attribute__((used)) static HRESULT FUNC_12(struct ID3DXFileData *VAR_8, DWORD VAR_9, struct IDirect3DDevice9 *VAR_10,
        const D3DXMATRIX *VAR_11, struct list *VAR_12, DWORD VAR_13)
{
    HRESULT VAR_14;
    D3DXMATRIX VAR_15 = *VAR_11;
    ID3DXFileData *VAR_16;
    GUID VAR_17;
    SIZE_T VAR_18, VAR_19;

    VAR_14 = VAR_8->lpVtbl->GetChildren(VAR_8, &VAR_19);
    if (FUNC_2(VAR_14))
        return VAR_14;

    for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
    {
        VAR_14 = VAR_8->lpVtbl->GetChild(VAR_8, VAR_18, &VAR_16);
        if (FUNC_2(VAR_14))
            return VAR_14;
        VAR_14 = VAR_16->lpVtbl->GetType(VAR_16, &VAR_17);
        if (FUNC_2(VAR_14))
            goto err;

        if (FUNC_6(&VAR_17, &VAR_7)) {
            struct mesh_container *VAR_20 = FUNC_4(FUNC_3(), VAR_2, sizeof(*VAR_20));
            if (!VAR_20)
            {
                VAR_14 = VAR_1;
                goto err;
            }
            FUNC_7(VAR_12, &VAR_20->entry);
            VAR_20->transform = VAR_15;

            VAR_14 = FUNC_0(VAR_16, VAR_9, VAR_10,
                    (VAR_13 & VAR_3) ? &VAR_20->adjacency : ((void*)0),
                    (VAR_13 & VAR_4) ? &VAR_20->materials : ((void*)0),
                    ((void*)0), &VAR_20->num_materials, ((void*)0), &VAR_20->mesh);
        } else if (FUNC_6(&VAR_17, &VAR_6)) {
            D3DXMATRIX VAR_21;
            VAR_14 = FUNC_8(VAR_16, &VAR_21);
            FUNC_1(&VAR_15, &VAR_15, &VAR_21);
        } else if (FUNC_6(&VAR_17, &VAR_5)) {
            VAR_14 = FUNC_12(VAR_16, VAR_9, VAR_10, &VAR_15, VAR_12, VAR_13);
        }
        if (FUNC_2(VAR_14))
            goto err;

        FUNC_5(VAR_16);
    }
    return VAR_0;

err:
    FUNC_5(VAR_16);
    return VAR_14;
}
