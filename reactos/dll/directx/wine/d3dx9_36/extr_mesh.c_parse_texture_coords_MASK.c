
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mesh_data {int num_vertices; int fvf; int * tex_coords; } ;
struct TYPE_7__ {TYPE_1__* lpVtbl; } ;
struct TYPE_6__ {int (* Unlock ) (TYPE_2__*) ;int (* Lock ) (TYPE_2__*,int*,void const**) ;} ;
typedef int SIZE_T ;
typedef TYPE_2__ ID3DXFileData ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (TYPE_2__*,int*,void const**) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_8(ID3DXFileData *VAR_4, struct mesh_data *VAR_5)
{
    HRESULT VAR_6;
    SIZE_T VAR_7;
    const BYTE *VAR_8;

    FUNC_3(FUNC_1(), 0, VAR_5->tex_coords);
    VAR_5->tex_coords = ((void*)0);

    VAR_6 = VAR_4->lpVtbl->Lock(VAR_4, &VAR_7, (const void**)&VAR_8);
    if (FUNC_0(VAR_6)) return VAR_6;
    VAR_6 = VAR_2;

    if (VAR_7 < sizeof(DWORD)) {
        FUNC_4("truncated data (%ld bytes)\n", VAR_7);
        goto end;
    }
    if (*(DWORD*)VAR_8 != VAR_5->num_vertices) {
        FUNC_4("number of texture coordinates (%u) doesn't match number of vertices (%u)\n",
             *(DWORD*)VAR_8, VAR_5->num_vertices);
        goto end;
    }
    VAR_8 += sizeof(DWORD);
    if (VAR_7 < sizeof(DWORD) + VAR_5->num_vertices * sizeof(*VAR_5->tex_coords)) {
        FUNC_4("truncated data (%ld bytes)\n", VAR_7);
        goto end;
    }

    VAR_5->tex_coords = FUNC_2(FUNC_1(), 0, VAR_5->num_vertices * sizeof(*VAR_5->tex_coords));
    if (!VAR_5->tex_coords) {
        VAR_6 = VAR_3;
        goto end;
    }
    FUNC_5(VAR_5->tex_coords, VAR_8, VAR_5->num_vertices * sizeof(*VAR_5->tex_coords));

    VAR_5->fvf |= VAR_0;

    VAR_6 = VAR_1;

end:
    VAR_4->lpVtbl->Unlock(VAR_4);
    return VAR_6;
}
