
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsIDOMNode ;
struct TYPE_9__ {int doc; } ;
struct TYPE_8__ {TYPE_2__ node; int IHTMLElement_iface; scalar_t__ filter; } ;
typedef TYPE_1__ HTMLElement ;
typedef TYPE_2__ HTMLDOMNode ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,TYPE_1__**) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;

HRESULT FUNC_5(HTMLDOMNode *VAR_3, nsIDOMNode *VAR_4, HTMLDOMNode **VAR_5)
{
    HTMLElement *VAR_6 = FUNC_4(VAR_3);
    HTMLElement *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_1(VAR_6->node.doc, VAR_4, VAR_1, &VAR_7);
    if(FUNC_0(VAR_8))
        return VAR_8;

    if(VAR_6->filter) {
        VAR_7->filter = FUNC_3(VAR_6->filter);
        if(!VAR_7->filter) {
            FUNC_2(&VAR_6->IHTMLElement_iface);
            return VAR_0;
        }
    }

    *VAR_5 = &VAR_7->node;
    return VAR_2;
}
