
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* base; } ;
struct insn_state {int drap_offset; void* drap_reg; TYPE_3__* vals; TYPE_2__* regs; TYPE_1__ cfa; } ;
struct TYPE_6__ {void* base; } ;
struct TYPE_5__ {void* base; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct insn_state*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct insn_state *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->cfa.base = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->regs[VAR_3].base = VAR_1;
  VAR_2->vals[VAR_3].base = VAR_1;
 }
 VAR_2->drap_reg = VAR_1;
 VAR_2->drap_offset = -1;
}
