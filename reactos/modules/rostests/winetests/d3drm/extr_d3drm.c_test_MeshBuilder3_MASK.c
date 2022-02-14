
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* dSize; void* lpMemory; } ;
typedef int IDirect3DRMObject ;
typedef int IDirect3DRMMeshBuilder3 ;
typedef int IDirect3DRM3 ;
typedef int IDirect3DRM ;
typedef float HRESULT ;
typedef int DWORD ;
typedef float D3DVALUE ;
typedef TYPE_1__ D3DRMLOADMEMORY ;


 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int VAR_3 ;
 float VAR_4 ;
 float FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (float) ;
 float FUNC_2 (int *,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 float FUNC_5 (int *,int,float*,float*) ;
 int FUNC_6 (int *) ;
 float FUNC_7 (int *,int ,int*,int *) ;
 float FUNC_8 (int *,TYPE_1__*,int *,int ,int *,int *) ;
 int FUNC_9 (int *) ;
 float FUNC_10 (int *,int,float,float) ;
 float FUNC_11 (int *,int *,void**) ;
 int FUNC_12 (int *) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_13 (int,char*,float) ;
 void* FUNC_14 (void*) ;
 int FUNC_15 (int *,char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,float) ;

__attribute__((used)) static void FUNC_18(void)
{
    HRESULT VAR_9;
    IDirect3DRM *VAR_10;
    IDirect3DRM3 *VAR_11;
    IDirect3DRMMeshBuilder3 *VAR_12;
    D3DRMLOADMEMORY VAR_13;
    int VAR_14;
    DWORD VAR_15;
    D3DVALUE VAR_16, VAR_17;

    VAR_9 = FUNC_0(&VAR_10);
    FUNC_13(VAR_9 == VAR_4, "Cannot get IDirect3DRM interface (hr = %x)\n", VAR_9);

    if (FUNC_1(VAR_9 = FUNC_11(VAR_10, &VAR_5, (void **)&VAR_11)))
    {
        FUNC_17("Cannot get IDirect3DRM3 interface (hr = %x), skipping tests\n", VAR_9);
        FUNC_12(VAR_10);
        return;
    }

    VAR_9 = FUNC_2(VAR_11, &VAR_12);
    FUNC_13(VAR_9 == VAR_4, "Cannot get IDirect3DRMMeshBuilder3 interface (hr = %x)\n", VAR_9);

    FUNC_15((IDirect3DRMObject *)VAR_12, "Builder");
    FUNC_16((IDirect3DRMObject *)VAR_12);

    VAR_13.lpMemory = VAR_6;
    VAR_13.dSize = FUNC_14(VAR_6);
    VAR_9 = FUNC_8(VAR_12, &VAR_13, ((void*)0), VAR_3, ((void*)0), ((void*)0));
    FUNC_13(VAR_9 == VAR_0, "Should have returned D3DRMERR_BADFILE (hr = %x)\n", VAR_9);

    VAR_13.lpMemory = VAR_7;
    VAR_13.dSize = FUNC_14(VAR_7);
    VAR_9 = FUNC_8(VAR_12, &VAR_13, ((void*)0), VAR_3, ((void*)0), ((void*)0));
    FUNC_13(VAR_9 == VAR_2, "Should have returned D3DRMERR_NOTFOUND (hr = %x)\n", VAR_9);

    VAR_13.lpMemory = VAR_8;
    VAR_13.dSize = FUNC_14(VAR_8);
    VAR_9 = FUNC_8(VAR_12, &VAR_13, ((void*)0), VAR_3, ((void*)0), ((void*)0));
    FUNC_13(VAR_9 == VAR_4, "Cannot load mesh data (hr = %x)\n", VAR_9);

    VAR_14 = FUNC_6(VAR_12);
    FUNC_13(VAR_14 == 4, "Wrong number of vertices %d (must be 4)\n", VAR_14);

    VAR_14 = FUNC_4(VAR_12);
    FUNC_13(VAR_14 == 3, "Wrong number of faces %d (must be 3)\n", VAR_14);

    VAR_9 = FUNC_7(VAR_12, 0, &VAR_15, ((void*)0));
    FUNC_13(VAR_9 == VAR_4, "Cannot get vertices information (hr = %x)\n", VAR_9);
    FUNC_13(VAR_15 == 4, "Wrong number of vertices %d (must be 4)\n", VAR_15);


    VAR_16 = 1.23f;
    VAR_17 = 3.21f;
    VAR_9 = FUNC_5(VAR_12, 0, &VAR_16, &VAR_17);
    FUNC_13(VAR_9 == VAR_4, "Cannot get texture coordinates (hr = %x)\n", VAR_9);
    FUNC_13(VAR_16 == 0.0f, "Wrong coordinate %f (must be 0.0)\n", VAR_16);
    FUNC_13(VAR_17 == 0.0f, "Wrong coordinate %f (must be 0.0)\n", VAR_17);
    VAR_16 = 1.23f;
    VAR_17 = 3.21f;
    VAR_9 = FUNC_5(VAR_12, 1, &VAR_16, &VAR_17);
    FUNC_13(VAR_9 == VAR_4, "Cannot get texture coordinates (hr = %x)\n", VAR_9);
    FUNC_13(VAR_16 == 0.0f, "Wrong coordinate %f (must be 0.0)\n", VAR_16);
    FUNC_13(VAR_17 == 0.0f, "Wrong coordinate %f (must be 0.0)\n", VAR_17);
    VAR_16 = 1.23f;
    VAR_17 = 3.21f;
    VAR_9 = FUNC_5(VAR_12, 2, &VAR_16, &VAR_17);
    FUNC_13(VAR_9 == VAR_4, "Cannot get texture coordinates (hr = %x)\n", VAR_9);
    FUNC_13(VAR_16 == 0.0f, "Wrong coordinate %f (must be 0.0)\n", VAR_16);
    FUNC_13(VAR_17 == 0.0f, "Wrong coordinate %f (must be 0.0)\n", VAR_17);
    VAR_16 = 1.23f;
    VAR_17 = 3.21f;
    VAR_9 = FUNC_5(VAR_12, 3, &VAR_16, &VAR_17);
    FUNC_13(VAR_9 == VAR_4, "Cannot get texture coordinates (hr = %x)\n", VAR_9);
    FUNC_13(VAR_16 == 0.0f, "Wrong coordinate %f (must be 0.0)\n", VAR_16);
    FUNC_13(VAR_17 == 0.0f, "Wrong coordinate %f (must be 0.0)\n", VAR_17);
    VAR_9 = FUNC_5(VAR_12, 4, &VAR_16, &VAR_17);
    FUNC_13(VAR_9 == VAR_1, "Should fail and return D3DRM_BADVALUE (hr = %x)\n", VAR_9);

    VAR_16 = 1.23f;
    VAR_17 = 3.21f;
    VAR_9 = FUNC_10(VAR_12, 0, VAR_16, VAR_17);
    FUNC_13(VAR_9 == VAR_4, "Cannot set texture coordinates (hr = %x)\n", VAR_9);
    VAR_9 = FUNC_10(VAR_12, 4, VAR_16, VAR_17);
    FUNC_13(VAR_9 == VAR_1, "Should fail and return D3DRM_BADVALUE (hr = %x)\n", VAR_9);

    VAR_16 = 0.0f;
    VAR_17 = 0.0f;
    VAR_9 = FUNC_5(VAR_12, 0, &VAR_16, &VAR_17);
    FUNC_13(VAR_9 == VAR_4, "Cannot get texture coordinates (hr = %x)\n", VAR_9);
    FUNC_13(VAR_16 == 1.23f, "Wrong coordinate %f (must be 1.23)\n", VAR_16);
    FUNC_13(VAR_17 == 3.21f, "Wrong coordinate %f (must be 3.21)\n", VAR_17);

    FUNC_9(VAR_12);
    FUNC_3(VAR_11);
    FUNC_12(VAR_10);
}
