
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsIDOMHTMLElement ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; TYPE_3__ IPropertyBag_iface; int props; TYPE_1__ IPropertyBag2_iface; } ;
typedef TYPE_2__ PropertyBag ;
typedef TYPE_3__ IPropertyBag ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

HRESULT FUNC_6(nsIDOMHTMLElement *VAR_4, IPropertyBag **VAR_5)
{
    PropertyBag *VAR_6;
    HRESULT VAR_7;

    VAR_6 = FUNC_3(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    VAR_6->IPropertyBag_iface.lpVtbl = &VAR_2;
    VAR_6->IPropertyBag2_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;

    FUNC_5(&VAR_6->props);
    VAR_7 = FUNC_2(VAR_4, VAR_6);
    if(FUNC_0(VAR_7) || FUNC_4(&VAR_6->props)) {
        FUNC_1(&VAR_6->IPropertyBag_iface);
        *VAR_5 = ((void*)0);
        return VAR_7;
    }

    *VAR_5 = &VAR_6->IPropertyBag_iface;
    return VAR_3;
}
