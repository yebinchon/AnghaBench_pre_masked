
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mesh_data {TYPE_5__* skin_info; int nb_bones; int fvf; int num_vertices; } ;
typedef int WORD ;
struct TYPE_15__ {TYPE_1__* lpVtbl; } ;
struct TYPE_14__ {TYPE_2__* lpVtbl; } ;
struct TYPE_13__ {int (* Unlock ) (TYPE_3__*) ;int (* Lock ) (TYPE_3__*,int*,void const**) ;} ;
struct TYPE_12__ {int (* SetBoneOffsetMatrix ) (TYPE_5__*,int,int const*) ;int (* SetBoneInfluence ) (TYPE_5__*,int,int,int const*,int const*) ;int (* SetBoneName ) (TYPE_5__*,int,char const*) ;} ;
typedef int SIZE_T ;
typedef TYPE_3__ ID3DXFileData ;
typedef int HRESULT ;
typedef int FLOAT ;
typedef int DWORD ;
typedef int D3DMATRIX ;
typedef int BYTE ;


 int FUNC_0 (int ,int ,int ,TYPE_5__**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,TYPE_3__*,struct mesh_data*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_3__*,int*,void const**) ;
 int FUNC_6 (TYPE_5__*,int,char const*) ;
 int FUNC_7 (TYPE_5__*,int,int,int const*,int const*) ;
 int FUNC_8 (TYPE_5__*,int,int const*) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static HRESULT FUNC_10(ID3DXFileData *VAR_1, struct mesh_data *VAR_2, DWORD VAR_3)
{
    HRESULT VAR_4;
    SIZE_T VAR_5;
    const BYTE *VAR_6;

    FUNC_3("(%p, %p, %u)\n", VAR_1, VAR_2, VAR_3);

    VAR_4 = VAR_1->lpVtbl->Lock(VAR_1, &VAR_5, (const void**)&VAR_6);
    if (FUNC_1(VAR_4)) return VAR_4;

    VAR_4 = VAR_0;

    if (!VAR_2->skin_info) {
        if (VAR_5 < sizeof(WORD) * 3) {
            FUNC_4("truncated data (%ld bytes)\n", VAR_5);
            goto end;
        }

        VAR_6 += 2 * sizeof(WORD);
        VAR_2->nb_bones = *(WORD*)VAR_6;
        VAR_4 = FUNC_0(VAR_2->num_vertices, VAR_2->fvf, VAR_2->nb_bones, &VAR_2->skin_info);
    } else {
        const char *VAR_7;
        DWORD VAR_8;


        VAR_7 = *(const char**)VAR_6;
        VAR_6 += sizeof(char*);

        VAR_8 = *(DWORD*)VAR_6;
        VAR_6 += sizeof(DWORD);

        if (VAR_5 < (sizeof(char*) + sizeof(DWORD) + VAR_8 * (sizeof(DWORD) + sizeof(FLOAT)) + 16 * sizeof(FLOAT))) {
            FUNC_4("truncated data (%ld bytes)\n", VAR_5);
            goto end;
        }

        VAR_4 = VAR_2->skin_info->lpVtbl->SetBoneName(VAR_2->skin_info, VAR_3, VAR_7);
        if (FUNC_2(VAR_4))
            VAR_4 = VAR_2->skin_info->lpVtbl->SetBoneInfluence(VAR_2->skin_info, VAR_3, VAR_8,
                     (const DWORD*)VAR_6, (const FLOAT*)(VAR_6 + VAR_8 * sizeof(DWORD)));
        if (FUNC_2(VAR_4))
            VAR_4 = VAR_2->skin_info->lpVtbl->SetBoneOffsetMatrix(VAR_2->skin_info, VAR_3,
                     (const D3DMATRIX*)(VAR_6 + VAR_8 * (sizeof(DWORD) + sizeof(FLOAT))));
    }

end:
    VAR_1->lpVtbl->Unlock(VAR_1);
    return VAR_4;
}
