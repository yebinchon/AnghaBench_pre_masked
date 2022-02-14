
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int MaxSimultaneousTextures; TYPE_4__* pBaseDevice; int pTextureHeap; } ;
struct TYPE_11__ {TYPE_3__* DeviceData; } ;
struct TYPE_8__ {int MaxSimultaneousTextures; } ;
struct TYPE_9__ {TYPE_1__ DriverCaps9; } ;
struct TYPE_10__ {TYPE_2__ DriverCaps; } ;
typedef int LPVOID ;
typedef TYPE_4__* LPDIRECT3DDEVICE9_INT ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_5__ D3D9ResourceManager ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static HRESULT FUNC_4(D3D9ResourceManager* VAR_2, LPDIRECT3DDEVICE9_INT VAR_3)
{
    DWORD VAR_4;

    VAR_4 = FUNC_3(1, VAR_3->DeviceData[0].DriverCaps.DriverCaps9.MaxSimultaneousTextures);

    if (FUNC_2(FUNC_0((LPVOID *)&VAR_2->pTextureHeap, sizeof(DWORD) + VAR_4 * sizeof(int) * 3)))
    {
        FUNC_1("Could not allocate texture heap");
        return VAR_1;
    }



    VAR_2->MaxSimultaneousTextures = VAR_4;
    VAR_2->pBaseDevice = VAR_3;

    return VAR_0;
}
