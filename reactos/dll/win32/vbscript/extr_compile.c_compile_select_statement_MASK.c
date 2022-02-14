
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* case_clausules; TYPE_2__* expr; } ;
typedef TYPE_1__ select_statement_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ expression_t ;
typedef int compile_ctx_t ;
struct TYPE_8__ {struct TYPE_8__* next; int stat; TYPE_2__* expr; } ;
typedef TYPE_3__ case_clausule_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 unsigned int* FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int*) ;
 int FUNC_7 (int *,unsigned int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,unsigned int) ;
 int FUNC_10 (int *,int ,int) ;

__attribute__((used)) static HRESULT FUNC_11(compile_ctx_t *VAR_6, select_statement_t *VAR_7)
{
    unsigned VAR_8, VAR_9 = 0, *VAR_10 = ((void*)0), VAR_11;
    case_clausule_t *VAR_12;
    expression_t *VAR_13;
    HRESULT VAR_14;

    VAR_14 = FUNC_2(VAR_6, VAR_7->expr);
    if(FUNC_0(VAR_14))
        return VAR_14;

    if(!FUNC_8(VAR_6, VAR_4))
        return VAR_0;

    VAR_8 = FUNC_1(VAR_6);
    if(!VAR_8)
        return VAR_0;

    if(!FUNC_4(VAR_6, 0, VAR_8))
        return VAR_0;

    for(VAR_12 = VAR_7->case_clausules; VAR_12; VAR_12 = VAR_12->next)
        VAR_9++;

    if(VAR_9) {
        VAR_10 = FUNC_5(VAR_9*sizeof(*VAR_10));
        if(!VAR_10)
            return VAR_0;
    }

    for(VAR_12 = VAR_7->case_clausules, VAR_11=0; VAR_12; VAR_12 = VAR_12->next, VAR_11++) {
        VAR_10[VAR_11] = FUNC_1(VAR_6);
        if(!VAR_10[VAR_11]) {
            VAR_14 = VAR_0;
            break;
        }

        if(!VAR_12->expr)
            break;

        for(VAR_13 = VAR_12->expr; VAR_13; VAR_13 = VAR_13->next) {
            VAR_14 = FUNC_2(VAR_6, VAR_13);
            if(FUNC_0(VAR_14))
                break;

            VAR_14 = FUNC_9(VAR_6, VAR_1, VAR_10[VAR_11]);
            if(FUNC_0(VAR_14))
                break;

            if(!FUNC_4(VAR_6, 0, VAR_10[VAR_11])) {
                VAR_14 = VAR_0;
                break;
            }
        }
    }

    if(FUNC_0(VAR_14)) {
        FUNC_6(VAR_10);
        return VAR_14;
    }

    VAR_14 = FUNC_10(VAR_6, VAR_3, 1);
    if(FUNC_0(VAR_14)) {
        FUNC_6(VAR_10);
        return VAR_14;
    }

    VAR_14 = FUNC_9(VAR_6, VAR_2, VAR_12 ? VAR_10[VAR_11] : VAR_8);
    if(FUNC_0(VAR_14)) {
        FUNC_6(VAR_10);
        return VAR_14;
    }

    for(VAR_12 = VAR_7->case_clausules, VAR_11=0; VAR_12; VAR_12 = VAR_12->next, VAR_11++) {
        FUNC_7(VAR_6, VAR_10[VAR_11]);
        VAR_14 = FUNC_3(VAR_6, ((void*)0), VAR_12->stat);
        if(FUNC_0(VAR_14))
            break;

        if(!VAR_12->next)
            break;

        VAR_14 = FUNC_9(VAR_6, VAR_2, VAR_8);
        if(FUNC_0(VAR_14))
            break;
    }

    FUNC_6(VAR_10);
    if(FUNC_0(VAR_14))
        return VAR_14;

    FUNC_7(VAR_6, VAR_8);
    return VAR_5;
}
