
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pUnknown; } ;
typedef int IDirect3DDevice9 ;
typedef int HRESULT ;
typedef TYPE_1__ D3D9BaseObject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *,void**) ;

HRESULT FUNC_1(D3D9BaseObject* VAR_2, IDirect3DDevice9** VAR_3)
{
    if (VAR_2->pUnknown)
    {
        return FUNC_0(VAR_2->pUnknown, &VAR_1, (void**)VAR_3);
    }

    return VAR_0;
}
