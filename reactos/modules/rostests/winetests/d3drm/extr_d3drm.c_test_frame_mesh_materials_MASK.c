
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {unsigned int vertex_count; unsigned int face_count; unsigned int vertex_per_face; int * emissive; int * specular; int power; int color; int face_data_size; } ;
struct TYPE_4__ {int dSize; int lpMemory; } ;
typedef int IDirect3DRMTexture ;
typedef int IDirect3DRMMesh ;
typedef int IDirect3DRMMaterial ;
typedef int IDirect3DRM ;
typedef int HRESULT ;
typedef int GUID ;
typedef int DWORD ;
typedef int D3DVALUE ;
typedef TYPE_1__ D3DRMLOADMEMORY ;
typedef int D3DCOLOR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int,unsigned int*,unsigned int*,unsigned int*,int *,int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int **) ;
 int FUNC_11 (int *,int,int **) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_1__*,int *,int **,int,int ,int ,void*,int *,int *,int *) ;
 int FUNC_15 (int *) ;
 int const VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_16 (int,char*,int,...) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(void)
{
    HRESULT VAR_7;
    IDirect3DRM *VAR_8;
    D3DRMLOADMEMORY VAR_9;
    const GUID *VAR_10[] = { &VAR_2 };
    IDirect3DRMMesh *VAR_11;
    ULONG VAR_12;
    IDirect3DRMMaterial *VAR_13;
    IDirect3DRMTexture *VAR_14;
    int VAR_15;

    VAR_7 = FUNC_0(&VAR_8);
    FUNC_16(VAR_7 == VAR_1, "Direct3DRMCreate returned %x\n", VAR_7);

    VAR_9.lpMemory = VAR_3;
    VAR_9.dSize = FUNC_17(VAR_3);
    VAR_7 = FUNC_14(VAR_8, &VAR_9, ((void*)0), (GUID**)VAR_10, 1, VAR_0, VAR_6, (void*)0xdeadbeef, ((void*)0), ((void*)0), ((void*)0));
    FUNC_16(VAR_7 == VAR_1, "Cannot load data (hr = %x)\n", VAR_7);

    VAR_7 = FUNC_5(VAR_5, &VAR_11);
    FUNC_16(VAR_7 == VAR_1, "IDirect3DRMMeshBuilder_CreateMesh returned %x\n", VAR_7);

    VAR_12 = FUNC_9(VAR_11);
    FUNC_16(VAR_12 == 3, "Wrong size %u returned, expected 3\n", VAR_12);

    for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
    {
        D3DVALUE VAR_16, VAR_17, VAR_18, VAR_19;
        D3DCOLOR VAR_20;
        unsigned VAR_21, VAR_22, VAR_23;
        DWORD VAR_24;

        VAR_7 = FUNC_7(VAR_11, VAR_15, &VAR_21, &VAR_22, &VAR_23, &VAR_24, ((void*)0));
        FUNC_16(VAR_7 == VAR_1, "Group %d: IDirect3DRMMesh_GetGroup returned %x\n", VAR_15, VAR_7);
        FUNC_16(VAR_21 == VAR_4[VAR_15].vertex_count, "Group %d: Wrong vertex count %d, expected %d\n", VAR_15, VAR_21, VAR_4[VAR_15].vertex_count);
        FUNC_16(VAR_22 == VAR_4[VAR_15].face_count, "Group %d: Wrong face count %d; expected %d\n", VAR_15, VAR_22, VAR_4[VAR_15].face_count);
        FUNC_16(VAR_23 == VAR_4[VAR_15].vertex_per_face, "Group %d: Wrong vertex per face %d, expected %d\n", VAR_15, VAR_23, VAR_4[VAR_15].vertex_per_face);
        FUNC_16(VAR_24 == VAR_4[VAR_15].face_data_size, "Group %d: Wrong face data size %d, expected %d\n", VAR_15, VAR_24, VAR_4[VAR_15].face_data_size);

        VAR_20 = FUNC_8(VAR_11, VAR_15);
        FUNC_16(VAR_20 == VAR_4[VAR_15].color, "Group %d: Wrong color %x, expected %x\n", VAR_15, VAR_20, VAR_4[VAR_15].color);

        VAR_7 = FUNC_10(VAR_11, VAR_15, &VAR_13);
        FUNC_16(VAR_7 == VAR_1, "Group %d: IDirect3DRMMesh_GetGroupMaterial returned %x\n", VAR_15, VAR_7);
        FUNC_16(VAR_13 != ((void*)0), "Group %d: No material\n", VAR_15);
        VAR_19 = FUNC_2(VAR_13);
        FUNC_16(VAR_19 == VAR_4[VAR_15].power, "Group %d: Wrong power %f, expected %f\n", VAR_15, VAR_19, VAR_4[VAR_15].power);
        VAR_7 = FUNC_3(VAR_13, &VAR_16, &VAR_17, &VAR_18);
        FUNC_16(VAR_7 == VAR_1, "Group %d: IDirect3DRMMaterial_GetSpecular returned %x\n", VAR_15, VAR_7);
        FUNC_16(VAR_16 == VAR_4[VAR_15].specular[0], "Group %d: Wrong specular red %f, expected %f\n", VAR_15, VAR_16, VAR_4[VAR_15].specular[0]);
        FUNC_16(VAR_17 == VAR_4[VAR_15].specular[1], "Group %d: Wrong specular green %f, pD3DRMexpected %f\n", VAR_15, VAR_17, VAR_4[VAR_15].specular[1]);
        FUNC_16(VAR_18 == VAR_4[VAR_15].specular[2], "Group %d: Wrong specular blue %f, expected %f\n", VAR_15, VAR_18, VAR_4[VAR_15].specular[2]);
        VAR_7 = FUNC_1(VAR_13, &VAR_16, &VAR_17, &VAR_18);
        FUNC_16(VAR_7 == VAR_1, "Group %d: IDirect3DRMMaterial_GetEmissive returned %x\n", VAR_15, VAR_7);
        FUNC_16(VAR_16 == VAR_4[VAR_15].emissive[0], "Group %d: Wrong emissive red %f, expected %f\n", VAR_15, VAR_16, VAR_4[VAR_15].emissive[0]);
        FUNC_16(VAR_17 == VAR_4[VAR_15].emissive[1], "Group %d: Wrong emissive green %f, expected %f\n", VAR_15, VAR_17, VAR_4[VAR_15].emissive[1]);
        FUNC_16(VAR_18 == VAR_4[VAR_15].emissive[2], "Group %d: Wrong emissive blue %f, expected %f\n", VAR_15, VAR_18, VAR_4[VAR_15].emissive[2]);

        VAR_7 = FUNC_11(VAR_11, VAR_15, &VAR_14);
        FUNC_16(VAR_7 == VAR_1, "Group %d: IDirect3DRMMesh_GetGroupTexture returned %x\n", VAR_15, VAR_7);
        FUNC_16(!VAR_14, "Group %d: Unexpected texture\n", VAR_15);

        if (VAR_13)
            FUNC_4(VAR_13);
        if (VAR_14)
            FUNC_13(VAR_14);
    }

    FUNC_12(VAR_11);
    FUNC_6(VAR_5);
    FUNC_15(VAR_8);
}
