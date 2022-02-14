
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMNode ;
struct TYPE_12__ {int member_2; int size; int len; TYPE_3__** buf; int member_1; int * member_0; } ;
typedef TYPE_2__ elem_vector_t ;
typedef scalar_t__ UINT16 ;
struct TYPE_14__ {int IHTMLDOMNode_iface; } ;
struct TYPE_11__ {int doc; int * nsnode; } ;
struct TYPE_13__ {TYPE_1__ node; } ;
typedef int LONG ;
typedef TYPE_3__ HTMLElement ;
typedef TYPE_4__ HTMLDOMNode ;
typedef int HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_4__*,TYPE_2__*) ;
 int FUNC_5 (int ,int *,int ,TYPE_4__**) ;
 TYPE_3__** FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__*) ;
 int FUNC_10 (int *,int **) ;
 int FUNC_11 (int *) ;

HRESULT FUNC_12(HTMLElement *VAR_8, LONG *VAR_9)
{
    elem_vector_t VAR_10 = {((void*)0), 0, 8};
    nsIDOMNode *VAR_11, *VAR_12;
    UINT16 VAR_13;
    HTMLDOMNode *VAR_14;
    int VAR_15;
    nsresult VAR_16;
    HRESULT VAR_17;

    VAR_12 = VAR_8->node.nsnode;
    FUNC_8(VAR_12);


    while(1) {
        VAR_16 = FUNC_10(VAR_12, &VAR_11);
        FUNC_11(VAR_12);
        FUNC_3(VAR_16 == VAR_5);
        if(!VAR_11)
            break;

        VAR_16 = FUNC_9(VAR_11, &VAR_13);
        FUNC_3(VAR_16 == VAR_5);

        if(VAR_13 != VAR_2) {
            if(VAR_13 != VAR_1 && VAR_13 != VAR_0)
                FUNC_1("Unexpected parent_type %d\n", VAR_13);
            break;
        }

        VAR_12 = VAR_11;
    }

    if(!VAR_11) {
        *VAR_9 = -1;
        return VAR_6;
    }

    VAR_17 = FUNC_5(VAR_8->node.doc, VAR_11, VAR_7, &VAR_14);
    FUNC_11(VAR_11);
    if(FUNC_0(VAR_17))
        return VAR_17;




    VAR_10.buf = FUNC_6(VAR_10.size*sizeof(*VAR_10.buf));
    if(!VAR_10.buf) {
        FUNC_2(&VAR_14->IHTMLDOMNode_iface);
        return VAR_3;
    }

    FUNC_4(VAR_8->node.doc, VAR_14, &VAR_10);

    for(VAR_15=0; VAR_15 < VAR_10.len; VAR_15++) {
        if(VAR_10.buf[VAR_15] == VAR_8)
            break;
    }
    FUNC_2(&VAR_14->IHTMLDOMNode_iface);
    FUNC_7(VAR_10.buf);
    if(VAR_15 == VAR_10.len) {
        FUNC_1("The element is not in parent's child list?\n");
        return VAR_4;
    }

    *VAR_9 = VAR_15;
    return VAR_6;
}
