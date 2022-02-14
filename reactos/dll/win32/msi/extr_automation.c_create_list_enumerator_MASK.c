
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; TYPE_3__* list; scalar_t__ pos; TYPE_2__ IEnumVARIANT_iface; } ;
struct TYPE_8__ {int IDispatch_iface; } ;
struct TYPE_10__ {TYPE_1__ autoobj; } ;
typedef TYPE_3__ ListObject ;
typedef TYPE_4__ ListEnumerator ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_3__*,void**) ;
 TYPE_4__* FUNC_2 (int) ;

__attribute__((used)) static HRESULT FUNC_3(ListObject *VAR_2, void **VAR_3)
{
    ListEnumerator *VAR_4;

    FUNC_1("(%p, %p)\n", VAR_2, VAR_3);

    VAR_4 = FUNC_2(sizeof(ListEnumerator));


    VAR_4->IEnumVARIANT_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 1;


    VAR_4->pos = 0;
    VAR_4->list = VAR_2;
    if (VAR_2) FUNC_0(&VAR_2->autoobj.IDispatch_iface);

    *VAR_3 = VAR_4;
    return VAR_1;
}
