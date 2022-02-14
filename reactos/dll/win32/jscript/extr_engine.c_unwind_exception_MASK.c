
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int val; } ;
struct TYPE_17__ {scalar_t__ stack_top; TYPE_3__ ei; TYPE_6__* call_ctx; } ;
typedef TYPE_4__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_18__ {unsigned int catch_off; scalar_t__ stack_top; scalar_t__ scope; unsigned int finally_off; struct TYPE_18__* next; } ;
typedef TYPE_5__ except_frame_t ;
struct TYPE_19__ {scalar_t__ scope; scalar_t__ base_scope; scalar_t__ stack_base; int flags; unsigned int ip; TYPE_5__* except_frame; TYPE_2__* bytecode; } ;
typedef TYPE_6__ call_frame_t ;
typedef char WCHAR ;
struct TYPE_15__ {TYPE_1__* instrs; } ;
struct TYPE_14__ {scalar_t__ op; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int VAR_4 ;
 int FUNC_9 (int *,char const*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (scalar_t__*) ;
 int FUNC_17 (TYPE_4__*,scalar_t__) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 int * FUNC_19 (int ) ;

__attribute__((used)) static HRESULT FUNC_20(script_ctx_t *VAR_5, HRESULT VAR_6)
{
    except_frame_t *VAR_7;
    call_frame_t *VAR_8;
    jsval_t VAR_9;
    unsigned VAR_10;
    HRESULT VAR_11;

    if(FUNC_3(VAR_4)) {
        jsdisp_t *VAR_12;
        jsval_t VAR_13;

        static const WCHAR VAR_14[] = {'m','e','s','s','a','g','e',0};

        FUNC_2("Exception %08x %s", VAR_6, FUNC_6(VAR_5->ei.val));
        if(FUNC_12(VAR_5->ei.val) == VAR_2) {
            VAR_12 = FUNC_19(FUNC_7(VAR_5->ei.val));
            if(VAR_12) {
                VAR_11 = FUNC_9(VAR_12, VAR_14, &VAR_13);
                if(FUNC_1(VAR_11)) {
                    FUNC_2(" (message %s)", FUNC_6(VAR_13));
                    FUNC_11(VAR_13);
                }
            }
        }
        FUNC_2(" in:\n");

        FUNC_15(VAR_5);
    }

    for(VAR_8 = VAR_5->call_ctx; !VAR_8->except_frame; VAR_8 = VAR_5->call_ctx) {
        DWORD VAR_15;

        while(VAR_8->scope != VAR_8->base_scope)
            FUNC_16(&VAR_8->scope);

        FUNC_17(VAR_5, VAR_5->stack_top-VAR_8->stack_base);

        VAR_15 = VAR_8->flags;
        FUNC_14(VAR_5);
        if(!(VAR_15 & VAR_0))
            return VAR_6;
    }

    VAR_7 = VAR_8->except_frame;
    VAR_10 = VAR_7->catch_off;

    FUNC_4(VAR_7->stack_top <= VAR_5->stack_top);
    FUNC_17(VAR_5, VAR_5->stack_top - VAR_7->stack_top);

    while(VAR_7->scope != VAR_8->scope)
        FUNC_16(&VAR_8->scope);

    VAR_8->ip = VAR_10 ? VAR_10 : VAR_7->finally_off;
    if(VAR_10) FUNC_4(VAR_8->bytecode->instrs[VAR_8->ip].op == VAR_3);

    VAR_9 = VAR_5->ei.val;
    VAR_5->ei.val = FUNC_13();
    FUNC_5(VAR_5);


    if(VAR_10 && VAR_7->finally_off) {
        VAR_7->catch_off = 0;
    }else {
        VAR_8->except_frame = VAR_7->next;
        FUNC_8(VAR_7);
    }

    VAR_11 = FUNC_18(VAR_5, VAR_9);
    if(FUNC_0(VAR_11))
        return VAR_11;

    if(!VAR_10)
        VAR_11 = FUNC_18(VAR_5, FUNC_10(VAR_1));
    return VAR_11;
}
