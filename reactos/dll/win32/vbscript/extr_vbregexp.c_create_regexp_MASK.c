
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_1__ IRegExp2_iface; int pool; TYPE_2__ IRegExp_iface; } ;
typedef TYPE_3__ RegExp2 ;
typedef int IDispatch ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

HRESULT FUNC_4(IDispatch **VAR_5)
{
    RegExp2 *VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_3(VAR_2);
    if(FUNC_0(VAR_7))
        return VAR_7;

    VAR_6 = FUNC_1(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    VAR_6->IRegExp2_iface.lpVtbl = &VAR_1;
    VAR_6->IRegExp_iface.lpVtbl = &VAR_3;
    VAR_6->ref = 1;
    FUNC_2(&VAR_6->pool);

    *VAR_5 = (IDispatch*)&VAR_6->IRegExp2_iface;
    return VAR_4;
}
