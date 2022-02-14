
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int identifier; scalar_t__ event_target; struct TYPE_8__* next; scalar_t__ func_id; } ;
typedef TYPE_2__ function_expression_t ;
struct TYPE_9__ {TYPE_2__* func_head; TYPE_2__* func_tail; TYPE_1__* func; } ;
typedef TYPE_3__ compiler_ctx_t ;
struct TYPE_7__ {int func_cnt; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static HRESULT FUNC_1(compiler_ctx_t *VAR_2, function_expression_t *VAR_3)
{
    VAR_3->func_id = VAR_2->func->func_cnt++;
    VAR_2->func_tail = VAR_2->func_tail ? (VAR_2->func_tail->next = VAR_3) : (VAR_2->func_head = VAR_3);

    return !VAR_3->identifier || VAR_3->event_target || FUNC_0(VAR_2, VAR_3->identifier)
        ? VAR_1 : VAR_0;
}
