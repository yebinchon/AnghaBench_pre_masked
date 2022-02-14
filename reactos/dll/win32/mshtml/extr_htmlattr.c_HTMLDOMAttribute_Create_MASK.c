
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int IHTMLAttributeCollection_iface; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_14__ {int ref; TYPE_7__ IHTMLDOMAttribute_iface; int name; int entry; int dispex; TYPE_3__* elem; int dispid; TYPE_1__ IHTMLDOMAttribute2_iface; } ;
struct TYPE_13__ {TYPE_2__* attrs; int node; } ;
struct TYPE_12__ {int attrs; } ;
typedef int IUnknown ;
typedef TYPE_3__ HTMLElement ;
typedef TYPE_4__ HTMLDOMAttribute ;
typedef TYPE_5__ HTMLAttributeCollection ;
typedef int HRESULT ;
typedef int DISPID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,TYPE_5__**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*) ;
 int VAR_4 ;
 TYPE_4__* FUNC_4 (int) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *) ;

HRESULT FUNC_8(const WCHAR *VAR_5, HTMLElement *VAR_6, DISPID VAR_7, HTMLDOMAttribute **VAR_8)
{
    HTMLAttributeCollection *VAR_9;
    HTMLDOMAttribute *VAR_10;
    HRESULT VAR_11;

    VAR_10 = FUNC_4(sizeof(*VAR_10));
    if(!VAR_10)
        return VAR_0;

    VAR_10->IHTMLDOMAttribute_iface.lpVtbl = &VAR_2;
    VAR_10->IHTMLDOMAttribute2_iface.lpVtbl = &VAR_1;
    VAR_10->ref = 1;
    VAR_10->dispid = VAR_7;
    VAR_10->elem = VAR_6;

    FUNC_6(&VAR_10->dispex, (IUnknown*)&VAR_10->IHTMLDOMAttribute_iface,
            &VAR_3);


    if(VAR_6) {
        VAR_11 = FUNC_1(&VAR_6->node, &VAR_9);
        if(FUNC_0(VAR_11)) {
            FUNC_3(&VAR_10->IHTMLDOMAttribute_iface);
            return VAR_11;
        }
        FUNC_2(&VAR_9->IHTMLAttributeCollection_iface);

        FUNC_7(&VAR_6->attrs->attrs, &VAR_10->entry);
    }


    if(VAR_5) {
        VAR_10->name = FUNC_5(VAR_5);
        if(!VAR_10->name) {
            FUNC_3(&VAR_10->IHTMLDOMAttribute_iface);
            return VAR_0;
        }
    }

    *VAR_8 = VAR_10;
    return VAR_4;
}
