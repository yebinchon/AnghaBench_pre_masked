
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int while_statement_t ;
struct TYPE_25__ {int type; struct TYPE_25__* next; } ;
typedef TYPE_1__ statement_t ;
struct TYPE_26__ {struct TYPE_26__* next; } ;
typedef TYPE_2__ statement_ctx_t ;
typedef int select_statement_t ;
typedef int onerror_statement_t ;
typedef int if_statement_t ;
typedef int function_statement_t ;
typedef int forto_statement_t ;
typedef int foreach_statement_t ;
typedef int dim_statement_t ;
typedef int const_statement_t ;
struct TYPE_27__ {TYPE_2__* stat_ctx; } ;
typedef TYPE_3__ compile_ctx_t ;
typedef int call_statement_t ;
typedef int assign_statement_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int *,int ) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int *) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 int FUNC_15 (TYPE_3__*,int *) ;
 int FUNC_16 (TYPE_3__*,int *) ;
 int FUNC_17 (TYPE_3__*,int *) ;
 int FUNC_18 (TYPE_3__*,int *) ;
 int FUNC_19 (TYPE_3__*,int *) ;
 int FUNC_20 (TYPE_3__*,int ) ;

__attribute__((used)) static HRESULT FUNC_21(compile_ctx_t *VAR_6, statement_ctx_t *VAR_7, statement_t *VAR_8)
{
    HRESULT VAR_9;

    if(VAR_7) {
        VAR_7->next = VAR_6->stat_ctx;
        VAR_6->stat_ctx = VAR_7;
    }

    while(VAR_8) {
        switch(VAR_8->type) {
        case 149:
            VAR_9 = FUNC_3(VAR_6, (assign_statement_t*)VAR_8, VAR_2);
            break;
        case 148:
            VAR_9 = FUNC_4(VAR_6, (call_statement_t*)VAR_8);
            break;
        case 147:
            VAR_9 = FUNC_5(VAR_6, (const_statement_t*)VAR_8);
            break;
        case 146:
            VAR_9 = FUNC_6(VAR_6, (dim_statement_t*)VAR_8);
            break;
        case 144:
        case 145:
            VAR_9 = FUNC_7(VAR_6, (while_statement_t*)VAR_8);
            break;
        case 143:
            VAR_9 = FUNC_8(VAR_6);
            break;
        case 142:
            VAR_9 = FUNC_9(VAR_6);
            break;
        case 141:
            VAR_9 = FUNC_10(VAR_6);
            break;
        case 140:
            VAR_9 = FUNC_11(VAR_6);
            break;
        case 139:
            VAR_9 = FUNC_12(VAR_6);
            break;
        case 138:
            VAR_9 = FUNC_13(VAR_6, (foreach_statement_t*)VAR_8);
            break;
        case 137:
            VAR_9 = FUNC_14(VAR_6, (forto_statement_t*)VAR_8);
            break;
        case 136:
            VAR_9 = FUNC_15(VAR_6, (function_statement_t*)VAR_8);
            break;
        case 135:
            VAR_9 = FUNC_16(VAR_6, (if_statement_t*)VAR_8);
            break;
        case 134:
            VAR_9 = FUNC_17(VAR_6, (onerror_statement_t*)VAR_8);
            break;
        case 133:
            VAR_9 = FUNC_18(VAR_6, (select_statement_t*)VAR_8);
            break;
        case 132:
            VAR_9 = FUNC_3(VAR_6, (assign_statement_t*)VAR_8, VAR_5);
            break;
        case 131:
            VAR_9 = FUNC_20(VAR_6, VAR_3) ? VAR_4 : VAR_1;
            break;
        case 130:
        case 129:
        case 128:
            VAR_9 = FUNC_19(VAR_6, (while_statement_t*)VAR_8);
            break;
        default:
            FUNC_1("Unimplemented statement type %d\n", VAR_8->type);
            VAR_9 = VAR_0;
        }

        if(FUNC_0(VAR_9))
            return VAR_9;
        VAR_8 = VAR_8->next;
    }

    if(VAR_7) {
        FUNC_2(VAR_6->stat_ctx == VAR_7);
        VAR_6->stat_ctx = VAR_7->next;
    }

    return VAR_4;
}
