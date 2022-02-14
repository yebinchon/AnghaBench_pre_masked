
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_7__ {int lRefCnt; TYPE_2__* pUnknown; } ;
struct TYPE_6__ {TYPE_1__* lpVtbl; } ;
struct TYPE_5__ {int (* AddRef ) (int *) ;} ;
typedef int IUnknown ;
typedef TYPE_3__ D3D9BaseObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

ULONG FUNC_2(D3D9BaseObject* VAR_0)
{
    if (VAR_0->pUnknown)
    {
        VAR_0->pUnknown->lpVtbl->AddRef((IUnknown*) &VAR_0->pUnknown->lpVtbl);
    }

    return FUNC_0(&VAR_0->lRefCnt);
}
