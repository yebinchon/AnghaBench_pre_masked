
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


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_5__*,unsigned int,int ) ;
 TYPE_5__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (TYPE_5__*,unsigned int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static HRESULT FUNC_8(jsdisp_t *VAR_1, unsigned VAR_2, jsval_t VAR_3)
{
    ArgumentsInstance *VAR_4 = FUNC_2(VAR_1);
    jsval_t *VAR_5;
    HRESULT VAR_6;

    FUNC_1("%p[%u] = %s\n", VAR_4, VAR_2, FUNC_3(VAR_3));

    if((VAR_5 = FUNC_4(VAR_4, VAR_2))) {
        jsval_t VAR_7;
        VAR_6 = FUNC_6(VAR_3, &VAR_7);
        if(FUNC_0(VAR_6))
            return VAR_6;

        FUNC_7(*VAR_5);
        *VAR_5 = VAR_7;
        return VAR_0;
    }


    return FUNC_5(VAR_4->frame->base_scope->jsobj,
                               VAR_4->function->func_code->params[VAR_2], VAR_3);
}
