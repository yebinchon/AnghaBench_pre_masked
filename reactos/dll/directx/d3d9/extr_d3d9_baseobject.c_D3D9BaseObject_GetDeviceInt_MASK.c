
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pUnknown; } ;
typedef int LPDIRECT3DDEVICE9 ;
typedef int HRESULT ;
typedef int DIRECT3DDEVICE9_INT ;
typedef TYPE_1__ D3D9BaseObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int *,void**) ;

HRESULT FUNC_3(D3D9BaseObject* VAR_4, DIRECT3DDEVICE9_INT** VAR_5)
{
    if (((void*)0) == VAR_5)
        return VAR_0;

    *VAR_5 = ((void*)0);

    if (VAR_4->pUnknown)
    {
        LPDIRECT3DDEVICE9 VAR_6;
        if (FUNC_0(FUNC_2(VAR_4->pUnknown, &VAR_3, (void**)&VAR_6)))
            return VAR_2;

        *VAR_5 = FUNC_1(VAR_6);
        return VAR_1;
    }

    return VAR_2;
}
