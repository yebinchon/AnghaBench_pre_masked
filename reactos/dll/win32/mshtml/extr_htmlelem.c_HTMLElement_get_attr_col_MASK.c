
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_12__ {int ref; TYPE_7__ IHTMLAttributeCollection_iface; int dispex; int attrs; TYPE_3__* elem; TYPE_2__ IHTMLAttributeCollection3_iface; TYPE_1__ IHTMLAttributeCollection2_iface; } ;
struct TYPE_11__ {TYPE_4__* attrs; } ;
typedef int IUnknown ;
typedef TYPE_3__ HTMLElement ;
typedef int HTMLDOMNode ;
typedef TYPE_4__ HTMLAttributeCollection ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_7__*) ;
 int VAR_5 ;
 TYPE_4__* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;

HRESULT FUNC_5(HTMLDOMNode *VAR_6, HTMLAttributeCollection **VAR_7)
{
    HTMLElement *VAR_8 = FUNC_2(VAR_6);

    if(VAR_8->attrs) {
        FUNC_0(&VAR_8->attrs->IHTMLAttributeCollection_iface);
        *VAR_7 = VAR_8->attrs;
        return VAR_5;
    }

    VAR_8->attrs = FUNC_1(sizeof(HTMLAttributeCollection));
    if(!VAR_8->attrs)
        return VAR_0;

    VAR_8->attrs->IHTMLAttributeCollection_iface.lpVtbl = &VAR_3;
    VAR_8->attrs->IHTMLAttributeCollection2_iface.lpVtbl = &VAR_1;
    VAR_8->attrs->IHTMLAttributeCollection3_iface.lpVtbl = &VAR_2;
    VAR_8->attrs->ref = 2;

    VAR_8->attrs->elem = VAR_8;
    FUNC_4(&VAR_8->attrs->attrs);
    FUNC_3(&VAR_8->attrs->dispex, (IUnknown*)&VAR_8->attrs->IHTMLAttributeCollection_iface,
            &VAR_4);

    *VAR_7 = VAR_8->attrs;
    return VAR_5;
}
