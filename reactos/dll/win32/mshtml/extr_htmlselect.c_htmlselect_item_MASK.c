
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLOptionsCollection ;
struct TYPE_10__ {int IHTMLDOMNode_iface; } ;
struct TYPE_7__ {int doc; } ;
struct TYPE_8__ {TYPE_1__ node; } ;
struct TYPE_9__ {TYPE_2__ element; int nsselect; } ;
typedef int IDispatch ;
typedef TYPE_3__ HTMLSelectElement ;
typedef TYPE_4__ HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int ,TYPE_4__**) ;
 int FUNC_4 (int *,int,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int **) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static HRESULT FUNC_8(HTMLSelectElement *VAR_3, int VAR_4, IDispatch **VAR_5)
{
    nsIDOMHTMLOptionsCollection *VAR_6;
    nsIDOMNode *VAR_7;
    nsresult VAR_8;
    HRESULT VAR_9;

    VAR_8 = FUNC_6(VAR_3->nsselect, &VAR_6);
    if(FUNC_2(VAR_8)) {
        FUNC_0("GetOptions failed: %08x\n", VAR_8);
        return VAR_0;
    }

    VAR_8 = FUNC_4(VAR_6, VAR_4, &VAR_7);
    FUNC_5(VAR_6);
    if(FUNC_2(VAR_8)) {
        FUNC_0("Item failed: %08x\n", VAR_8);
        return VAR_0;
    }

    if(VAR_7) {
        HTMLDOMNode *VAR_10;

        VAR_9 = FUNC_3(VAR_3->element.node.doc, VAR_7, VAR_2, &VAR_10);
        FUNC_7(VAR_7);
        if(FUNC_1(VAR_9))
            return VAR_9;

        *VAR_5 = (IDispatch*)&VAR_10->IHTMLDOMNode_iface;
    }else {
        *VAR_5 = ((void*)0);
    }
    return VAR_1;
}
