
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;


typedef int nsresult ;
typedef int nsIDOMNode ;
typedef int nsIDOMHTMLElement ;
typedef size_t eventid_t ;
typedef int UINT16 ;
struct TYPE_25__ {int IHTMLDocument2_iface; int cp_container; } ;
struct TYPE_24__ {TYPE_2__* vtbl; int IHTMLDOMNode_iface; int * cp_container; int event_target; } ;
struct TYPE_19__ {int event_target; } ;
struct TYPE_23__ {TYPE_9__ basedoc; TYPE_1__ node; int nsdoc; TYPE_3__* window; } ;
struct TYPE_22__ {int * nsevent; scalar_t__ cancel_bubble; scalar_t__ prevent_default; int IHTMLEventObj_iface; } ;
struct TYPE_21__ {int * event; } ;
struct TYPE_20__ {int (* handle_event ) (TYPE_6__*,size_t,int *,scalar_t__*) ;} ;
struct TYPE_18__ {int flags; int name; } ;
typedef int IHTMLEventObj ;
typedef int IDispatch ;
typedef TYPE_3__ HTMLInnerWindow ;
typedef TYPE_4__ HTMLEventObj ;
typedef TYPE_5__ HTMLDocumentNode ;
typedef TYPE_6__ HTMLDOMNode ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;




 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*,int *,int *,size_t,int *) ;
 int FUNC_9 (int ) ;
 TYPE_15__* VAR_5 ;
 int FUNC_10 (TYPE_5__*,int *,scalar_t__,TYPE_6__**) ;
 int FUNC_11 (TYPE_9__*) ;
 int FUNC_12 (TYPE_9__*) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int **) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int*) ;
 int FUNC_19 (int *,int **) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (TYPE_6__*,size_t,int *,scalar_t__*) ;

__attribute__((used)) static void FUNC_22(HTMLDocumentNode *VAR_6, eventid_t VAR_7, HTMLEventObj *VAR_8,
        nsIDOMNode *VAR_9, IDispatch *VAR_10)
{
    IHTMLEventObj *VAR_11;
    nsIDOMNode *VAR_12, *VAR_13;
    BOOL VAR_14 = VAR_3;
    HTMLInnerWindow *VAR_15;
    HTMLDOMNode *VAR_16;
    UINT16 VAR_17;
    nsresult VAR_18;
    HRESULT VAR_19;

    FUNC_6("(%p) %s\n", VAR_6, FUNC_9(VAR_5[VAR_7].name));

    VAR_15 = VAR_6->window;
    if(!VAR_15) {
        FUNC_7("NULL window\n");
        return;
    }

    FUNC_11(&VAR_6->basedoc);

    VAR_11 = VAR_15->event;
    VAR_15->event = VAR_8 ? &VAR_8->IHTMLEventObj_iface : ((void*)0);

    FUNC_18(VAR_9, &VAR_17);
    VAR_13 = VAR_9;
    FUNC_17(VAR_13);

    switch(VAR_17) {
    case 128:
        do {
            VAR_19 = FUNC_10(VAR_6, VAR_13, VAR_3, &VAR_16);
            if(FUNC_5(VAR_19) && VAR_16) {
                FUNC_8(VAR_6, VAR_8, &VAR_16->event_target, VAR_16->cp_container, VAR_7,
                        VAR_10 ? VAR_10 : (IDispatch*)&VAR_16->IHTMLDOMNode_iface);
                FUNC_13(VAR_16);
            }

            if(!(VAR_5[VAR_7].flags & VAR_0) || (VAR_8 && VAR_8->cancel_bubble))
                break;

            FUNC_19(VAR_13, &VAR_12);
            FUNC_20(VAR_13);
            VAR_13 = VAR_12;
            if(!VAR_13)
                break;

            FUNC_18(VAR_13, &VAR_17);
        }while(VAR_17 == 128);

        if(!(VAR_5[VAR_7].flags & VAR_0) || (VAR_8 && VAR_8->cancel_bubble))
            break;

    case 129:
        if(VAR_5[VAR_7].flags & VAR_1) {
            nsIDOMHTMLElement *VAR_20;
            nsresult VAR_21;

            VAR_21 = FUNC_15(VAR_6->nsdoc, &VAR_20);
            if(FUNC_4(VAR_21) && VAR_20) {
                VAR_19 = FUNC_10(VAR_6, (nsIDOMNode*)VAR_20, VAR_3, &VAR_16);
                if(FUNC_5(VAR_19) && VAR_16) {
                    FUNC_8(VAR_6, VAR_8, &VAR_16->event_target, VAR_16->cp_container, VAR_7,
                            VAR_10 ? VAR_10 : (IDispatch*)&VAR_16->IHTMLDOMNode_iface);
                    FUNC_13(VAR_16);
                }
                FUNC_16(VAR_20);
            }else {
                FUNC_0("Could not get body: %08x\n", VAR_21);
            }
        }

        FUNC_8(VAR_6, VAR_8, &VAR_6->node.event_target, &VAR_6->basedoc.cp_container, VAR_7,
                VAR_10 ? VAR_10 : (IDispatch*)&VAR_6->basedoc.IHTMLDocument2_iface);
        break;

    default:
        FUNC_2("unimplemented node type %d\n", VAR_17);
    }

    if(VAR_13)
        FUNC_20(VAR_13);

    if(VAR_8 && VAR_8->prevent_default)
        VAR_14 = VAR_4;
    VAR_15->event = VAR_11;

    if(!VAR_14 && (VAR_5[VAR_7].flags & VAR_2)) {
        FUNC_17(VAR_9);
        VAR_13 = VAR_9;

        do {
            VAR_19 = FUNC_10(VAR_6, VAR_13, VAR_4, &VAR_16);
            if(FUNC_1(VAR_19))
                break;

            if(VAR_16) {
                if(VAR_16->vtbl->handle_event)
                    VAR_19 = VAR_16->vtbl->handle_event(VAR_16, VAR_7, VAR_8 ? VAR_8->nsevent : ((void*)0), &VAR_14);
                FUNC_13(VAR_16);
                if(FUNC_1(VAR_19) || VAR_14 || (VAR_8 && VAR_8->cancel_bubble))
                    break;
            }

            VAR_18 = FUNC_19(VAR_13, &VAR_12);
            if(FUNC_3(VAR_18))
                break;

            FUNC_20(VAR_13);
            VAR_13 = VAR_12;
        } while(VAR_13);

        if(VAR_13)
            FUNC_20(VAR_13);
    }

    if(VAR_14 && VAR_8 && VAR_8->nsevent) {
        FUNC_6("calling PreventDefault\n");
        FUNC_14(VAR_8->nsevent);
    }

    FUNC_12(&VAR_6->basedoc);
}
