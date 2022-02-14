
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;


struct TYPE_22__ {int site; TYPE_5__* named_items; scalar_t__ global; TYPE_1__* call_ctx; } ;
typedef TYPE_3__ script_ctx_t ;
struct TYPE_23__ {int obj; scalar_t__ jsobj; TYPE_11__* frame; struct TYPE_23__* next; } ;
typedef TYPE_4__ scope_chain_t ;
struct TYPE_24__ {int flags; char const* name; int disp; struct TYPE_24__* next; } ;
typedef TYPE_5__ named_item_t ;
struct TYPE_25__ {int ref; } ;
typedef TYPE_6__ local_ref_t ;
typedef int function_code_t ;
struct TYPE_21__ {int val; int off; } ;
struct TYPE_26__ {TYPE_2__ u; int type; } ;
typedef TYPE_7__ exprval_t ;
typedef char WCHAR ;
struct TYPE_20__ {TYPE_4__* scope; } ;
struct TYPE_19__ {int * function; } ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef int DISPID ;
typedef char const* BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,int ,int **,int *) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (char*,int ,...) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_3__*,TYPE_11__*,int ) ;
 int FUNC_10 (TYPE_3__*,int ,char const*,char const*,int ,int *) ;
 int FUNC_11 (TYPE_7__*,int ,int ) ;
 int FUNC_12 (TYPE_7__*,int ) ;
 int VAR_8 ;
 int FUNC_13 (scalar_t__,char const*,int ,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_11__*,int ) ;
 scalar_t__ FUNC_16 (TYPE_3__*,char const*,TYPE_7__*) ;
 TYPE_6__* FUNC_17 (int *,char const*) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (char const*,char const*) ;

__attribute__((used)) static HRESULT FUNC_20(script_ctx_t *VAR_9, BSTR VAR_10, exprval_t *VAR_11)
{
    scope_chain_t *VAR_12;
    named_item_t *VAR_13;
    DISPID VAR_14 = 0;
    HRESULT VAR_15;

    FUNC_6("%s\n", FUNC_8(VAR_10));

    if(VAR_9->call_ctx) {
        for(VAR_12 = VAR_9->call_ctx->scope; VAR_12; VAR_12 = VAR_12->next) {
            if(VAR_12->frame) {
                function_code_t *VAR_16 = VAR_12->frame->function;
                local_ref_t *VAR_17 = FUNC_17(VAR_16, VAR_10);
                static const WCHAR VAR_18[] = {'a','r','g','u','m','e','n','t','s',0};

                if(VAR_17) {
                    VAR_11->type = VAR_1;
                    VAR_11->u.off = FUNC_15(VAR_12->frame, VAR_17->ref);
                    FUNC_6("returning ref %d for %d\n", VAR_11->u.off, VAR_17->ref);
                    return VAR_7;
                }

                if(!FUNC_19(VAR_10, VAR_18)) {
                    VAR_15 = FUNC_9(VAR_9, VAR_12->frame, VAR_2);
                    if(FUNC_0(VAR_15))
                        return VAR_15;
                }
            }
            if(VAR_12->jsobj)
                VAR_15 = FUNC_13(VAR_12->jsobj, VAR_10, VAR_8, &VAR_14);
            else
                VAR_15 = FUNC_10(VAR_9, VAR_12->obj, VAR_10, VAR_10, VAR_8, &VAR_14);
            if(FUNC_5(VAR_15)) {
                FUNC_11(VAR_11, VAR_12->obj, VAR_14);
                return VAR_7;
            }
        }
    }

    VAR_15 = FUNC_13(VAR_9->global, VAR_10, 0, &VAR_14);
    if(FUNC_5(VAR_15)) {
        FUNC_11(VAR_11, FUNC_18(VAR_9->global), VAR_14);
        return VAR_7;
    }

    for(VAR_13 = VAR_9->named_items; VAR_13; VAR_13 = VAR_13->next) {
        if((VAR_13->flags & VAR_6) && !FUNC_19(VAR_13->name, VAR_10)) {
            if(!VAR_13->disp) {
                IUnknown *VAR_19;

                if(!VAR_9->site)
                    break;

                VAR_15 = FUNC_1(VAR_9->site, VAR_10,
                                                     VAR_5, &VAR_19, ((void*)0));
                if(FUNC_0(VAR_15)) {
                    FUNC_7("GetItemInfo failed: %08x\n", VAR_15);
                    break;
                }

                VAR_15 = FUNC_3(VAR_19, &VAR_3, (void**)&VAR_13->disp);
                FUNC_4(VAR_19);
                if(FUNC_0(VAR_15)) {
                    FUNC_7("object does not implement IDispatch\n");
                    break;
                }
            }

            FUNC_2(VAR_13->disp);
            VAR_11->type = VAR_0;
            VAR_11->u.val = FUNC_14(VAR_13->disp);
            return VAR_7;
        }
    }

    if(FUNC_16(VAR_9, VAR_10, VAR_11))
        return VAR_7;

    FUNC_12(VAR_11, VAR_4);
    return VAR_7;
}
