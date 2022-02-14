
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMHTMLElement ;
struct TYPE_10__ {int * vtbl; } ;
struct TYPE_15__ {TYPE_1__ node; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_14__ {TYPE_6__ element; int nstable; TYPE_4__ IHTMLTable3_iface; TYPE_3__ IHTMLTable2_iface; TYPE_2__ IHTMLTable_iface; } ;
typedef TYPE_5__ HTMLTable ;
typedef TYPE_6__ HTMLElement ;
typedef int HTMLDocumentNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;

HRESULT FUNC_4(HTMLDocumentNode *VAR_9, nsIDOMHTMLElement *VAR_10, HTMLElement **VAR_11)
{
    HTMLTable *VAR_12;
    nsresult VAR_13;

    VAR_12 = FUNC_2(sizeof(HTMLTable));
    if(!VAR_12)
        return VAR_0;

    VAR_12->element.node.vtbl = &VAR_3;
    VAR_12->IHTMLTable_iface.lpVtbl = &VAR_4;
    VAR_12->IHTMLTable2_iface.lpVtbl = &VAR_1;
    VAR_12->IHTMLTable3_iface.lpVtbl = &VAR_2;

    FUNC_0(&VAR_12->element, VAR_9, VAR_10, &VAR_5);

    VAR_13 = FUNC_3(VAR_10, &VAR_6, (void**)&VAR_12->nstable);
    FUNC_1(VAR_13 == VAR_7);

    *VAR_11 = &VAR_12->element;
    return VAR_8;
}
