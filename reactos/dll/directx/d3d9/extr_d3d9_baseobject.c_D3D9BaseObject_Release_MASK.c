
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_7__ {TYPE_2__* pUnknown; int lRefCnt; } ;
struct TYPE_6__ {TYPE_1__* lpVtbl; } ;
struct TYPE_5__ {int (* Release ) (int *) ;} ;
typedef int IUnknown ;
typedef TYPE_3__ D3D9BaseObject ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

ULONG FUNC_2(D3D9BaseObject* VAR_0)
{
    ULONG VAR_1 = 0;

    if (VAR_0)
    {
        VAR_1 = FUNC_0(&VAR_0->lRefCnt);

        if (VAR_1 == 0)
        {
            if (VAR_0->pUnknown)
            {
                VAR_0->pUnknown->lpVtbl->Release((IUnknown*) &VAR_0->pUnknown->lpVtbl);
            }
        }
    }

    return VAR_1;
}
