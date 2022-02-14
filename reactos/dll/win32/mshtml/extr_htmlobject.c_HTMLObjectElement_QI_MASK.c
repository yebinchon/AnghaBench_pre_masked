
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int node; } ;
struct TYPE_9__ {TYPE_2__* plugin_host; TYPE_1__ element; } ;
struct TYPE_10__ {int IHTMLObjectElement_iface; TYPE_3__ plugin_container; int IHTMLObjectElement2_iface; } ;
struct TYPE_8__ {scalar_t__ plugin_unk; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_4__ HTMLObjectElement ;
typedef int HTMLDOMNode ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,TYPE_4__*,int *,...) ;
 int FUNC_7 (int ) ;
 TYPE_4__* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,int **) ;

__attribute__((used)) static HRESULT FUNC_11(HTMLDOMNode *VAR_7, REFIID VAR_8, void **VAR_9)
{
    HTMLObjectElement *VAR_10 = FUNC_8(VAR_7);

    FUNC_6("(%p)->(%s %p)\n", VAR_10, FUNC_7(VAR_8), VAR_9);

    if(FUNC_5(&VAR_5, VAR_8)) {
        *VAR_9 = &VAR_10->IHTMLObjectElement_iface;
    }else if(FUNC_5(&VAR_2, VAR_8)) {
        *VAR_9 = &VAR_10->IHTMLObjectElement_iface;
    }else if(FUNC_5(&VAR_3, VAR_8)) {
        *VAR_9 = &VAR_10->IHTMLObjectElement_iface;
    }else if(FUNC_5(&VAR_4, VAR_8)) {
        *VAR_9 = &VAR_10->IHTMLObjectElement2_iface;
    }else if(FUNC_5(&VAR_1, VAR_8)) {

        *VAR_9 = &VAR_10->plugin_container;
        FUNC_9(&VAR_10->plugin_container.element.node);
        return VAR_6;
    }else {
        HRESULT VAR_11;

        VAR_11 = FUNC_1(&VAR_10->plugin_container.element.node, VAR_8, VAR_9);
        if(VAR_11 == VAR_0 && VAR_10->plugin_container.plugin_host && VAR_10->plugin_container.plugin_host->plugin_unk) {
            IUnknown *VAR_12, *VAR_13;

            VAR_11 = FUNC_3(VAR_10->plugin_container.plugin_host->plugin_unk, VAR_8, (void**)&VAR_12);
            if(VAR_11 == VAR_6) {
                VAR_11 = FUNC_10(VAR_12, (IUnknown*)&VAR_10->IHTMLObjectElement_iface, &VAR_13);
                FUNC_4(VAR_12);
                if(FUNC_0(VAR_11))
                    return VAR_11;

                FUNC_6("returning plugin iface %p wrapped to %p\n", VAR_12, VAR_13);
                *VAR_9 = VAR_13;
                return VAR_6;
            }
        }

        return VAR_11;
    }

    FUNC_2((IUnknown*)*VAR_9);
    return VAR_6;
}
