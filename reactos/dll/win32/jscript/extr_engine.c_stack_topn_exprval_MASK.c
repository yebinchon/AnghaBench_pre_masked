
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {TYPE_8__* call_ctx; } ;
typedef TYPE_6__ script_ctx_t ;
typedef int jsval_t ;
struct TYPE_16__ {void* id; int disp; } ;
struct TYPE_17__ {unsigned int off; void* hres; TYPE_4__ idref; } ;
struct TYPE_19__ {TYPE_5__ u; void* type; } ;
typedef TYPE_7__ exprval_t ;
struct TYPE_20__ {unsigned int arguments_off; unsigned int variables_off; TYPE_3__* base_scope; TYPE_2__* function; } ;
typedef TYPE_8__ call_frame_t ;
struct TYPE_15__ {int obj; int jsobj; int frame; } ;
struct TYPE_14__ {unsigned int var_cnt; int * params; TYPE_1__* variables; } ;
struct TYPE_13__ {int name; } ;
typedef void* HRESULT ;
typedef void* DISPID ;
typedef int BSTR ;
typedef int BOOL ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (void*) ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ,int ,int ,void**) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (TYPE_6__*,unsigned int) ;
 int FUNC_11 (TYPE_6__*,unsigned int) ;

__attribute__((used)) static BOOL FUNC_12(script_ctx_t *VAR_5, unsigned VAR_6, exprval_t *VAR_7)
{
    jsval_t VAR_8 = FUNC_11(VAR_5, VAR_6+1);

    switch(FUNC_9(VAR_8)) {
    case 130: {
        call_frame_t *VAR_9 = VAR_5->call_ctx;
        unsigned VAR_10 = FUNC_2(VAR_8);

        if(!VAR_9->base_scope->frame && VAR_10 >= VAR_9->arguments_off) {
            DISPID VAR_11;
            BSTR VAR_12;
            HRESULT VAR_13;



            FUNC_1(VAR_10 < VAR_9->variables_off + VAR_9->function->var_cnt);
            VAR_12 = VAR_10 >= VAR_9->variables_off
                ? VAR_9->function->variables[VAR_10 - VAR_9->variables_off].name
                : VAR_9->function->params[VAR_10 - VAR_9->arguments_off];
            VAR_13 = FUNC_6(VAR_5->call_ctx->base_scope->jsobj, VAR_12, 0, &VAR_11);
            if(FUNC_0(VAR_13)) {
                VAR_7->type = VAR_1;
                VAR_7->u.hres = VAR_13;
                return VAR_3;
            }

            *FUNC_10(VAR_5, VAR_6+1) = FUNC_8(FUNC_5(VAR_9->base_scope->jsobj));
            *FUNC_10(VAR_5, VAR_6) = FUNC_7(VAR_11);
            VAR_7->type = VAR_0;
            VAR_7->u.idref.disp = VAR_9->base_scope->obj;
            VAR_7->u.idref.id = VAR_11;
            return VAR_4;
        }

        VAR_7->type = VAR_2;
        VAR_7->u.off = VAR_10;
        return VAR_4;
    }
    case 129:
        VAR_7->type = VAR_0;
        VAR_7->u.idref.disp = FUNC_3(VAR_8);
        FUNC_1(FUNC_4(FUNC_11(VAR_5, VAR_6)));
        VAR_7->u.idref.id = FUNC_2(FUNC_11(VAR_5, VAR_6));
        return VAR_4;
    case 128:
        VAR_7->type = VAR_1;
        FUNC_1(FUNC_4(FUNC_11(VAR_5, VAR_6)));
        VAR_7->u.hres = FUNC_2(FUNC_11(VAR_5, VAR_6));
        return VAR_3;
    default:
        FUNC_1(0);
        return VAR_3;
    }
}
