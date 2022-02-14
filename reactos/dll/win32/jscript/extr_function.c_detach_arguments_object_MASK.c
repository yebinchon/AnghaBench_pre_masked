
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int jsdisp_t ;
struct TYPE_12__ {int arguments_off; int arguments_obj; TYPE_4__* function; TYPE_3__* base_scope; } ;
typedef TYPE_5__ call_frame_t ;
struct TYPE_9__ {int ref; TYPE_1__* ctx; } ;
struct TYPE_13__ {int argc; int * buf; TYPE_2__ jsdisp; TYPE_5__* frame; } ;
struct TYPE_11__ {int param_cnt; int * params; } ;
struct TYPE_10__ {int jsobj; TYPE_5__* frame; } ;
struct TYPE_8__ {int * stack; } ;
typedef int HRESULT ;
typedef int BOOL ;
typedef TYPE_6__ ArgumentsInstance ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_6__* FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;

void FUNC_9(jsdisp_t *VAR_1)
{
    ArgumentsInstance *VAR_2 = FUNC_2(VAR_1);
    call_frame_t *VAR_3 = VAR_2->frame;
    const BOOL VAR_4 = VAR_3->base_scope->frame == VAR_3;
    HRESULT VAR_5;



    FUNC_5(VAR_3->base_scope->jsobj, VAR_0, FUNC_8());
    VAR_2->frame = ((void*)0);


    if(VAR_2->jsdisp.ref > 1) {
        VAR_2->buf = FUNC_3(VAR_2->argc * sizeof(*VAR_2->buf));
        if(VAR_2->buf) {
            int VAR_6;

            for(VAR_6 = 0; VAR_6 < VAR_2->argc ; VAR_6++) {
                if(VAR_4 || VAR_6 >= VAR_3->function->param_cnt)
                    VAR_5 = FUNC_7(VAR_2->jsdisp.ctx->stack[VAR_3->arguments_off + VAR_6], VAR_2->buf+VAR_6);
                else
                    VAR_5 = FUNC_4(VAR_3->base_scope->jsobj, VAR_3->function->params[VAR_6], VAR_2->buf+VAR_6);
                if(FUNC_1(VAR_5))
                    VAR_2->buf[VAR_6] = FUNC_8();
            }
        }else {
            FUNC_0("out of memory\n");
            VAR_2->argc = 0;
        }
    }

    FUNC_6(VAR_3->arguments_obj);
}
