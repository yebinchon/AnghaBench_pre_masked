
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int stack_top; TYPE_3__* call_ctx; } ;
typedef TYPE_1__ script_ctx_t ;
struct TYPE_8__ {unsigned int catch_off; unsigned int finally_off; struct TYPE_8__* next; int scope; int stack_top; } ;
typedef TYPE_2__ except_frame_t ;
struct TYPE_9__ {TYPE_2__* except_frame; int scope; } ;
typedef TYPE_3__ call_frame_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_2)
{
    const unsigned VAR_3 = FUNC_1(VAR_2, 0);
    const unsigned VAR_4 = FUNC_1(VAR_2, 1);
    call_frame_t *VAR_5 = VAR_2->call_ctx;
    except_frame_t *VAR_6;

    FUNC_0("\n");

    VAR_6 = FUNC_2(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    VAR_6->stack_top = VAR_2->stack_top;
    VAR_6->scope = VAR_5->scope;
    VAR_6->catch_off = VAR_3;
    VAR_6->finally_off = VAR_4;
    VAR_6->next = VAR_5->except_frame;
    VAR_5->except_frame = VAR_6;
    return VAR_1;
}
