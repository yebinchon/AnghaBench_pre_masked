
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsIDOMNodeList ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLScriptElement ;
typedef int nsAString ;
typedef int WCHAR ;
typedef scalar_t__ UINT32 ;
struct TYPE_20__ {int IDispatchEx_iface; } ;
struct TYPE_25__ {TYPE_1__ dispex; } ;
struct TYPE_24__ {int nsdoc; } ;
struct TYPE_21__ {int node; } ;
struct TYPE_23__ {TYPE_2__ element; } ;
struct TYPE_22__ {int IHTMLScriptElement_iface; } ;
typedef char PRUnichar ;
typedef int IDispatch ;
typedef TYPE_3__ HTMLScriptElement ;
typedef TYPE_4__ HTMLPluginContainer ;
typedef TYPE_5__ HTMLDocumentNode ;
typedef int HRESULT ;
typedef TYPE_6__ EventTarget ;


 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,TYPE_5__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_5__*,TYPE_4__*,int *,int *) ;
 int FUNC_11 (TYPE_5__*,TYPE_6__*,int *,int *) ;
 TYPE_6__* FUNC_12 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char const*) ;
 scalar_t__ FUNC_17 (int ,int *,int **) ;
 scalar_t__ FUNC_18 (int *,scalar_t__*) ;
 scalar_t__ FUNC_19 (int *,scalar_t__,int **) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *,int *,void**) ;
 int FUNC_22 (int *) ;
 int * FUNC_23 (TYPE_5__*,TYPE_3__*,int **) ;
 int FUNC_24 (TYPE_5__*,int *,TYPE_3__**) ;

void FUNC_25(HTMLDocumentNode *VAR_3)
{
    HTMLPluginContainer *VAR_4;
    nsIDOMHTMLScriptElement *VAR_5;
    HTMLScriptElement *VAR_6;
    EventTarget *VAR_7;
    nsIDOMNodeList *VAR_8;
    nsIDOMNode *VAR_9;
    nsAString VAR_10;
    IDispatch *VAR_11;
    UINT32 VAR_12, VAR_13;
    WCHAR *VAR_14;
    nsresult VAR_15;
    HRESULT VAR_16;

    static const PRUnichar VAR_17[] = {'s','c','r','i','p','t','[','e','v','e','n','t',']',0};

    FUNC_8("%p\n", VAR_3);

    if(!VAR_3->nsdoc)
        return;

    FUNC_16(&VAR_10, VAR_17);
    VAR_15 = FUNC_17(VAR_3->nsdoc, &VAR_10, &VAR_8);
    FUNC_15(&VAR_10);
    if(FUNC_6(VAR_15)) {
        FUNC_0("QuerySelectorAll failed: %08x\n", VAR_15);
        return;
    }

    if(!VAR_8)
        return;

    VAR_15 = FUNC_18(VAR_8, &VAR_12);
    FUNC_9(VAR_15 == VAR_2);

    for(VAR_13=0; VAR_13 < VAR_12; VAR_13++) {
        VAR_15 = FUNC_19(VAR_8, VAR_13, &VAR_9);
        if(FUNC_6(VAR_15) || !VAR_9) {
            FUNC_0("Item(%d) failed: %08x\n", VAR_13, VAR_15);
            continue;
        }

        VAR_15 = FUNC_21(VAR_9, &VAR_1, (void**)&VAR_5);
        FUNC_9(VAR_15 == VAR_2);
        FUNC_22(VAR_9);

        VAR_16 = FUNC_24(VAR_3, VAR_5, &VAR_6);
        if(FUNC_1(VAR_16))
            continue;

        VAR_11 = FUNC_23(VAR_3, VAR_6, &VAR_14);
        if(VAR_11) {
            VAR_7 = FUNC_12(VAR_3, VAR_6);
            if(VAR_7) {
                VAR_16 = FUNC_2(&VAR_7->dispex.IDispatchEx_iface, &VAR_0,
                        (void**)&VAR_4);
                if(FUNC_7(VAR_16))
                    FUNC_10(VAR_3, VAR_4, VAR_14, VAR_11);
                else
                    FUNC_11(VAR_3, VAR_7, VAR_14, VAR_11);

                FUNC_3(&VAR_7->dispex.IDispatchEx_iface);
                if(VAR_4)
                    FUNC_14(&VAR_4->element.node);
            }

            FUNC_13(VAR_14);
            FUNC_4(VAR_11);
        }

        FUNC_5(&VAR_6->IHTMLScriptElement_iface);
    }

    FUNC_20(VAR_8);
}
