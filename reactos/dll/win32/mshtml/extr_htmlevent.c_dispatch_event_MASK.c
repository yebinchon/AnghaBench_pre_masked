
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t eventid_t ;
typedef int WCHAR ;
typedef int VARIANT_BOOL ;
typedef int VARIANT ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int nsnode; int doc; } ;
struct TYPE_9__ {int IHTMLEventObj_iface; } ;
typedef int IHTMLEventObj ;
typedef TYPE_1__ HTMLEventObj ;
typedef TYPE_2__ HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__,int *,void**) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (char*,int ) ;
 size_t FUNC_9 (int const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int const*) ;
 TYPE_7__* VAR_12 ;
 int FUNC_12 (int ,size_t,int ,int ,int *,int *) ;
 int FUNC_13 (int ,size_t,TYPE_1__*,int ,int *) ;
 int FUNC_14 (TYPE_1__*,TYPE_2__*,size_t,int *) ;
 TYPE_1__* FUNC_15 (int *) ;

HRESULT FUNC_16(HTMLDOMNode *VAR_13, const WCHAR *VAR_14, VARIANT *VAR_15, VARIANT_BOOL *VAR_16)
{
    HTMLEventObj *VAR_17 = ((void*)0);
    eventid_t VAR_18;
    HRESULT VAR_19;

    VAR_18 = FUNC_9(VAR_14);
    if(VAR_18 == VAR_0) {
        FUNC_8("unknown event %s\n", FUNC_11(VAR_14));
        return VAR_3;
    }

    if(VAR_15 && FUNC_7(VAR_15) != VAR_10 && FUNC_7(VAR_15) != VAR_11) {
        if(FUNC_7(VAR_15) != VAR_9) {
            FUNC_2("event_var %s not supported\n", FUNC_10(VAR_15));
            return VAR_4;
        }

        if(FUNC_6(VAR_15)) {
            IHTMLEventObj *VAR_20;

            VAR_19 = FUNC_3(FUNC_6(VAR_15), &VAR_5, (void**)&VAR_20);
            if(FUNC_1(VAR_19)) {
                FUNC_2("No IHTMLEventObj iface\n");
                return VAR_19;
            }

            VAR_17 = FUNC_15(VAR_20);
            if(!VAR_17) {
                FUNC_0("Not our IHTMLEventObj?\n");
                FUNC_4(VAR_20);
                return VAR_2;
            }
        }
    }

    if(VAR_17) {
        VAR_19 = FUNC_14(VAR_17, VAR_13, VAR_18, ((void*)0));
        if(FUNC_5(VAR_19))
            FUNC_13(VAR_13->doc, VAR_18, VAR_17, VAR_13->nsnode, ((void*)0));

        FUNC_4(&VAR_17->IHTMLEventObj_iface);
        if(FUNC_1(VAR_19))
            return VAR_19;
    }else {
        if(!(VAR_12[VAR_18].flags & VAR_1)) {
            FUNC_2("not EVENT_DEFAULTEVENTHANDLER\n");
            return VAR_4;
        }

        FUNC_12(VAR_13->doc, VAR_18, VAR_7, VAR_13->nsnode, ((void*)0), ((void*)0));
    }

    *VAR_16 = VAR_8;
    return VAR_6;
}
