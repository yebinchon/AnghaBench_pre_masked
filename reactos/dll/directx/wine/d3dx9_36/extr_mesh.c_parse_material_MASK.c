
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


struct TYPE_19__ {float r; float g; float b; float a; } ;
struct TYPE_18__ {float a; } ;
struct TYPE_20__ {TYPE_1__ Ambient; TYPE_16__ Emissive; TYPE_16__ Specular; int Power; TYPE_16__ Diffuse; } ;
struct TYPE_23__ {int * pTextureFilename; TYPE_2__ MatD3D; } ;
struct TYPE_22__ {TYPE_3__* lpVtbl; } ;
struct TYPE_21__ {int (* GetType ) (TYPE_4__*,int *) ;int (* GetChild ) (TYPE_4__*,int,TYPE_4__**) ;int (* GetChildren ) (TYPE_4__*,int*) ;int (* Unlock ) (TYPE_4__*) ;int (* Lock ) (TYPE_4__*,int*,void const**) ;} ;
typedef int SIZE_T ;
typedef TYPE_4__ ID3DXFileData ;
typedef int HRESULT ;
typedef int GUID ;
typedef int FLOAT ;
typedef TYPE_5__ D3DXMATERIAL ;
typedef int D3DCOLORVALUE ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_16__*,int const*,int) ;
 int FUNC_5 (TYPE_4__*,int **) ;
 int FUNC_6 (TYPE_4__*,int*,void const**) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int*) ;
 int FUNC_10 (TYPE_4__*,int,TYPE_4__**) ;
 int FUNC_11 (TYPE_4__*,int *) ;

__attribute__((used)) static HRESULT FUNC_12(ID3DXFileData *VAR_3, D3DXMATERIAL *VAR_4)
{
    HRESULT VAR_5;
    SIZE_T VAR_6;
    const BYTE *VAR_7;
    GUID VAR_8;
    ID3DXFileData *VAR_9;
    SIZE_T VAR_10, VAR_11;

    VAR_4->pTextureFilename = ((void*)0);

    VAR_5 = VAR_3->lpVtbl->Lock(VAR_3, &VAR_6, (const void**)&VAR_7);
    if (FUNC_0(VAR_5)) return VAR_5;
    if (VAR_6 != sizeof(FLOAT) * 11) {
        FUNC_3("incorrect data size (%ld bytes)\n", VAR_6);
        VAR_3->lpVtbl->Unlock(VAR_3);
        return VAR_1;
    }

    FUNC_4(&VAR_4->MatD3D.Diffuse, VAR_7, sizeof(D3DCOLORVALUE));
    VAR_7 += sizeof(D3DCOLORVALUE);
    VAR_4->MatD3D.Power = *(FLOAT*)VAR_7;
    VAR_7 += sizeof(FLOAT);
    FUNC_4(&VAR_4->MatD3D.Specular, VAR_7, sizeof(FLOAT) * 3);
    VAR_4->MatD3D.Specular.a = 1.0f;
    VAR_7 += 3 * sizeof(FLOAT);
    FUNC_4(&VAR_4->MatD3D.Emissive, VAR_7, sizeof(FLOAT) * 3);
    VAR_4->MatD3D.Emissive.a = 1.0f;
    VAR_4->MatD3D.Ambient.r = 0.0f;
    VAR_4->MatD3D.Ambient.g = 0.0f;
    VAR_4->MatD3D.Ambient.b = 0.0f;
    VAR_4->MatD3D.Ambient.a = 1.0f;

    VAR_3->lpVtbl->Unlock(VAR_3);

    VAR_5 = VAR_3->lpVtbl->GetChildren(VAR_3, &VAR_11);
    if (FUNC_0(VAR_5))
        return VAR_5;

    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
    {
        VAR_5 = VAR_3->lpVtbl->GetChild(VAR_3, VAR_10, &VAR_9);
        if (FUNC_0(VAR_5))
            return VAR_5;
        VAR_5 = VAR_9->lpVtbl->GetType(VAR_9, &VAR_8);
        if (FUNC_0(VAR_5))
            goto err;

        if (FUNC_2(&VAR_8, &VAR_2)) {
            VAR_5 = FUNC_5(VAR_9, &VAR_4->pTextureFilename);
            if (FUNC_0(VAR_5))
                goto err;
        }
        FUNC_1(VAR_9);
    }
    return VAR_0;

err:
    FUNC_1(VAR_9);
    return VAR_5;
}
