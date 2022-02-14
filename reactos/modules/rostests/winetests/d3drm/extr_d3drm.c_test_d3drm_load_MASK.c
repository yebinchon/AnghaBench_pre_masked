
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dSize; int lpMemory; } ;
typedef int IDirect3DRM ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef TYPE_1__ D3DRMLOADMEMORY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *,int **,int,int ,int ,void*,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    HRESULT VAR_8;
    IDirect3DRM *VAR_9;
    D3DRMLOADMEMORY VAR_10;
    const GUID* VAR_11[] = { &VAR_4, &VAR_2, &VAR_3 };

    VAR_8 = FUNC_0(&VAR_9);
    FUNC_3(VAR_8 == VAR_1, "Cannot get IDirect3DRM interface (hr = %x)\n", VAR_8);

    VAR_10.lpMemory = VAR_5;
    VAR_10.dSize = FUNC_4(VAR_5);
    VAR_8 = FUNC_1(VAR_9, &VAR_10, ((void*)0), (GUID **)VAR_11, 3, VAR_0,
            VAR_7, (void *)0xdeadbeef, ((void*)0), ((void*)0), ((void*)0));
    FUNC_3(VAR_8 == VAR_1, "Cannot load data (hr = %x)\n", VAR_8);
    FUNC_3(VAR_6 == 3, "Should have loaded 3 objects (got %d)\n", VAR_6);

    FUNC_2(VAR_9);
}
