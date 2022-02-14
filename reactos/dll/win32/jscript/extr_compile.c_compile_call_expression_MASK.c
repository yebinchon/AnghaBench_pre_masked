
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int jsop_t ;
typedef int compiler_ctx_t ;
struct TYPE_11__ {TYPE_4__* argument_list; TYPE_6__* expression; } ;
typedef TYPE_3__ call_expression_t ;
struct TYPE_12__ {TYPE_6__* expr; struct TYPE_12__* next; } ;
typedef TYPE_4__ argument_t ;
struct TYPE_14__ {int type; } ;
struct TYPE_10__ {TYPE_1__* arg; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
struct TYPE_9__ {unsigned int uint; int lng; } ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_6__*,int ) ;
 int FUNC_2 (int *,TYPE_6__*,int ) ;
 TYPE_5__* FUNC_3 (int *,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_7(compiler_ctx_t *VAR_7, call_expression_t *VAR_8, BOOL VAR_9)
{
    unsigned VAR_10 = 0, VAR_11;
    argument_t *VAR_12;
    unsigned VAR_13;
    jsop_t VAR_14;
    HRESULT VAR_15;

    if(FUNC_4(VAR_8->expression->type)) {
        VAR_14 = VAR_2;
        VAR_11 = 2;
        VAR_15 = FUNC_2(VAR_7, VAR_8->expression, 0);
    }else {
        VAR_14 = VAR_1;
        VAR_11 = 1;
        VAR_15 = FUNC_1(VAR_7, VAR_8->expression, VAR_6);
    }

    if(FUNC_0(VAR_15))
        return VAR_15;

    for(VAR_12 = VAR_8->argument_list; VAR_12; VAR_12 = VAR_12->next) {
        VAR_15 = FUNC_1(VAR_7, VAR_12->expr, VAR_6);
        if(FUNC_0(VAR_15))
            return VAR_15;
        VAR_10++;
    }

    VAR_13 = FUNC_5(VAR_7, VAR_14);
    if(!VAR_13)
        return VAR_0;

    FUNC_3(VAR_7, VAR_13)->u.arg[0].uint = VAR_10;
    FUNC_3(VAR_7, VAR_13)->u.arg[1].lng = VAR_9;

    VAR_15 = FUNC_6(VAR_7, VAR_3, VAR_10 + VAR_11);
    if(FUNC_0(VAR_15))
        return VAR_15;

    return !VAR_9 || FUNC_5(VAR_7, VAR_4) ? VAR_5 : VAR_0;
}
