
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int instr; TYPE_1__* code; } ;
typedef TYPE_2__ exec_ctx_t ;
struct TYPE_4__ {unsigned int instrs; } ;



__attribute__((used)) static inline void FUNC_0(exec_ctx_t *VAR_0, unsigned VAR_1)
{
    VAR_0->instr = VAR_0->code->instrs + VAR_1;
}
