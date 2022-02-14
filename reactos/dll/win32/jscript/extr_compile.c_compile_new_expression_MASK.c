
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int compiler_ctx_t ;
struct TYPE_4__ {TYPE_2__* argument_list; int expression; } ;
typedef TYPE_1__ call_expression_t ;
struct TYPE_5__ {int expr; struct TYPE_5__* next; } ;
typedef TYPE_2__ argument_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,unsigned int) ;

__attribute__((used)) static HRESULT FUNC_4(compiler_ctx_t *VAR_6, call_expression_t *VAR_7)
{
    unsigned VAR_8 = 0;
    argument_t *VAR_9;
    HRESULT VAR_10;

    VAR_10 = FUNC_1(VAR_6, VAR_7->expression, VAR_5);
    if(FUNC_0(VAR_10))
        return VAR_10;

    for(VAR_9 = VAR_7->argument_list; VAR_9; VAR_9 = VAR_9->next) {
        VAR_10 = FUNC_1(VAR_6, VAR_9->expr, VAR_5);
        if(FUNC_0(VAR_10))
            return VAR_10;
        VAR_8++;
    }

    VAR_10 = FUNC_3(VAR_6, VAR_1, VAR_8);
    if(FUNC_0(VAR_10))
        return VAR_10;

    VAR_10 = FUNC_3(VAR_6, VAR_2, VAR_8+1);
    if(FUNC_0(VAR_10))
        return VAR_10;

    return FUNC_2(VAR_6, VAR_3) ? VAR_4 : VAR_0;
}
