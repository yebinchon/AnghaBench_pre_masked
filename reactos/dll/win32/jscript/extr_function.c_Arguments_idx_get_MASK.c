
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_13__ {TYPE_4__* function; TYPE_2__* frame; } ;
struct TYPE_12__ {TYPE_3__* func_code; } ;
struct TYPE_11__ {int * params; } ;
struct TYPE_10__ {TYPE_1__* base_scope; } ;
struct TYPE_9__ {int jsobj; } ;
typedef int HRESULT ;
typedef TYPE_5__ ArgumentsInstance ;


 int FUNC_0 (char*,TYPE_5__*,unsigned int) ;
 TYPE_5__* FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_5__*,unsigned int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static HRESULT FUNC_5(jsdisp_t *VAR_0, unsigned VAR_1, jsval_t *VAR_2)
{
    ArgumentsInstance *VAR_3 = FUNC_1(VAR_0);
    jsval_t *VAR_4;

    FUNC_0("%p[%u]\n", VAR_3, VAR_1);

    if((VAR_4 = FUNC_2(VAR_3, VAR_1)))
        return FUNC_4(*VAR_4, VAR_2);


    return FUNC_3(VAR_3->frame->base_scope->jsobj,
                               VAR_3->function->func_code->params[VAR_1], VAR_2);
}
