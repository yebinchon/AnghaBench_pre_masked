
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int resume_next; TYPE_3__* script; TYPE_2__* instr; } ;
typedef TYPE_4__ exec_ctx_t ;
struct TYPE_8__ {int err_number; } ;
struct TYPE_6__ {int uint; } ;
struct TYPE_7__ {TYPE_1__ arg1; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int const) ;

__attribute__((used)) static HRESULT FUNC_1(exec_ctx_t *VAR_1)
{
    const int VAR_2 = VAR_1->instr->arg1.uint;

    FUNC_0("%d\n", VAR_2);

    VAR_1->resume_next = VAR_2;
    VAR_1->script->err_number = VAR_0;
    return VAR_0;
}
