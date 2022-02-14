
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t uint; } ;
struct TYPE_9__ {size_t op; TYPE_2__ arg1; } ;
typedef TYPE_3__ instr_t ;
struct TYPE_10__ {int instr_cnt; size_t labels_cnt; size_t* labels; TYPE_1__* code; } ;
typedef TYPE_4__ compile_ctx_t ;
struct TYPE_11__ {scalar_t__ arg1_type; scalar_t__ arg2_type; } ;
struct TYPE_7__ {TYPE_3__* instrs; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_6__* VAR_2 ;

__attribute__((used)) static void FUNC_1(compile_ctx_t *VAR_3, unsigned VAR_4)
{
    instr_t *VAR_5;

    for(VAR_5 = VAR_3->code->instrs+VAR_4; VAR_5 < VAR_3->code->instrs+VAR_3->instr_cnt; VAR_5++) {
        if(VAR_2[VAR_5->op].arg1_type == VAR_0 && (VAR_5->arg1.uint & VAR_1)) {
            FUNC_0((VAR_5->arg1.uint & ~VAR_1) < VAR_3->labels_cnt);
            VAR_5->arg1.uint = VAR_3->labels[VAR_5->arg1.uint & ~VAR_1];
        }
        FUNC_0(VAR_2[VAR_5->op].arg2_type != VAR_0);
    }

    VAR_3->labels_cnt = 0;
}
