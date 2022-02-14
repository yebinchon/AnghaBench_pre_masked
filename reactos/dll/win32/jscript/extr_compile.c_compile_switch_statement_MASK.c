
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {TYPE_5__* case_list; scalar_t__ expr; } ;
typedef TYPE_1__ switch_statement_t ;
struct TYPE_18__ {struct TYPE_18__* next; } ;
typedef TYPE_2__ statement_t ;
struct TYPE_19__ {int break_label; int member_2; int member_1; int member_0; } ;
typedef TYPE_3__ statement_ctx_t ;
struct TYPE_20__ {int code_off; } ;
typedef TYPE_4__ compiler_ctx_t ;
struct TYPE_21__ {TYPE_2__* stat; struct TYPE_21__* next; scalar_t__ expr; } ;
typedef TYPE_5__ case_clausule_t ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,TYPE_2__*) ;
 unsigned int* FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 unsigned int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int ,int) ;
 int FUNC_11 (TYPE_4__*,unsigned int,int ) ;

__attribute__((used)) static HRESULT FUNC_12(compiler_ctx_t *VAR_7, switch_statement_t *VAR_8)
{
    statement_ctx_t VAR_9 = {0, VAR_1, VAR_1};
    unsigned VAR_10 = 0, *VAR_11, VAR_12, VAR_13;
    BOOL VAR_14 = VAR_1;
    statement_t *VAR_15;
    case_clausule_t *VAR_16;
    HRESULT VAR_17;

    VAR_17 = FUNC_4(VAR_7, VAR_8->expr, VAR_6);
    if(FUNC_0(VAR_17))
        return VAR_17;

    VAR_9.break_label = FUNC_2(VAR_7);
    if(!VAR_9.break_label)
        return VAR_0;

    for(VAR_16 = VAR_8->case_list; VAR_16; VAR_16 = VAR_16->next) {
        if(VAR_16->expr)
            VAR_10++;
    }

    VAR_11 = FUNC_6(VAR_10 * sizeof(*VAR_11));
    if(!VAR_11)
        return VAR_0;

    VAR_12 = 0;
    for(VAR_16 = VAR_8->case_list; VAR_16; VAR_16 = VAR_16->next) {
        if(!VAR_16->expr) {
            VAR_14 = VAR_6;
            continue;
        }

        VAR_17 = FUNC_4(VAR_7, VAR_16->expr, VAR_6);
        if(FUNC_0(VAR_17))
            break;

        VAR_11[VAR_12] = FUNC_9(VAR_7, VAR_2);
        if(!VAR_11[VAR_12]) {
            VAR_17 = VAR_0;
            break;
        }
        VAR_12++;
    }

    if(FUNC_1(VAR_17)) {
        VAR_17 = FUNC_10(VAR_7, VAR_4, 1);
        if(FUNC_1(VAR_17)) {
            VAR_13 = FUNC_9(VAR_7, VAR_3);
            if(!VAR_13)
                VAR_17 = VAR_0;
        }
    }

    if(FUNC_0(VAR_17)) {
        FUNC_7(VAR_11);
        return VAR_17;
    }

    VAR_12 = 0;
    for(VAR_16 = VAR_8->case_list; VAR_16; VAR_16 = VAR_16->next) {
        while(VAR_16->next && VAR_16->next->stat == VAR_16->stat) {
            FUNC_11(VAR_7, VAR_16->expr ? VAR_11[VAR_12++] : VAR_13, VAR_7->code_off);
            VAR_16 = VAR_16->next;
        }

        FUNC_11(VAR_7, VAR_16->expr ? VAR_11[VAR_12++] : VAR_13, VAR_7->code_off);

        for(VAR_15 = VAR_16->stat; VAR_15 && (!VAR_16->next || VAR_16->next->stat != VAR_15);
            VAR_15 = VAR_15->next) {
            VAR_17 = FUNC_5(VAR_7, &VAR_9, VAR_15);
            if(FUNC_0(VAR_17))
                break;
        }
        if(FUNC_0(VAR_17))
            break;
    }

    FUNC_7(VAR_11);
    if(FUNC_0(VAR_17))
        return VAR_17;
    FUNC_3(VAR_12 == VAR_10);

    if(!VAR_14) {
        VAR_17 = FUNC_10(VAR_7, VAR_3, VAR_9.break_label);
        if(FUNC_0(VAR_17))
            return VAR_17;
        FUNC_11(VAR_7, VAR_13, VAR_7->code_off);
    }

    FUNC_8(VAR_7, VAR_9.break_label);
    return VAR_5;
}
