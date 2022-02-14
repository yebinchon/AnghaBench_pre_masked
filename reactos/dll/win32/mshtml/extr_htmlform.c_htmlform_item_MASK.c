
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
typedef int nsIDOMHTMLCollection ;
struct TYPE_10__ {int IHTMLDOMNode_iface; } ;
struct TYPE_7__ {int doc; } ;
struct TYPE_8__ {TYPE_1__ node; } ;
struct TYPE_9__ {TYPE_2__ element; int nsform; } ;
typedef int IDispatch ;
typedef TYPE_3__ HTMLFormElement ;
typedef TYPE_4__ HTMLDOMNode ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *,int ,TYPE_4__**) ;
 int FUNC_4 (int *,int,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int **) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static HRESULT FUNC_8(HTMLFormElement *VAR_3, int VAR_4, IDispatch **VAR_5)
{
    nsIDOMHTMLCollection *VAR_6;
    nsIDOMNode *VAR_7;
    HTMLDOMNode *VAR_8;
    nsresult VAR_9;
    HRESULT VAR_10;

    VAR_9 = FUNC_6(VAR_3->nsform, &VAR_6);
    if(FUNC_2(VAR_9)) {
        FUNC_1("GetElements failed: 0x%08x\n", VAR_9);
        return VAR_0;
    }

    VAR_9 = FUNC_4(VAR_6, VAR_4, &VAR_7);
    FUNC_5(VAR_6);
    if(FUNC_2(VAR_9)) {
        FUNC_1("Item failed: 0x%08x\n", VAR_9);
        return VAR_0;
    }

    if(VAR_7) {
        VAR_10 = FUNC_3(VAR_3->element.node.doc, VAR_7, VAR_2, &VAR_8);
        if(FUNC_0(VAR_10))
            return VAR_10;

        FUNC_7(VAR_7);
        *VAR_5 = (IDispatch*)&VAR_8->IHTMLDOMNode_iface;
    }else {
        *VAR_5 = ((void*)0);
    }

    return VAR_1;
}
