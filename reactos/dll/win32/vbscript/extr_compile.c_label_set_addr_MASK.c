
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int instr_cnt; int * labels; } ;
typedef TYPE_1__ compile_ctx_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline void FUNC_1(compile_ctx_t *VAR_1, unsigned VAR_2)
{
    FUNC_0(VAR_2 & VAR_0);
    VAR_1->labels[VAR_2 & ~VAR_0] = VAR_1->instr_cnt;
}
