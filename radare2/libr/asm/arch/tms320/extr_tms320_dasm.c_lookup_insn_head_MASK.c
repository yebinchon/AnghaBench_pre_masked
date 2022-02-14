
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int opcode; TYPE_2__* head; int * insn; int map; } ;
typedef TYPE_1__ tms320_dasm_t ;
struct TYPE_7__ {int insn; } ;
typedef TYPE_2__ insn_head_t ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 void* FUNC_0 (int ,int,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

insn_head_t * FUNC_2(tms320_dasm_t * VAR_2) {
 ut8 * VAR_3 = ((void*)0);


 if (FUNC_1 (VAR_2) == VAR_0) {
  VAR_3 = VAR_1;
 }
 while (VAR_3 && (VAR_3[0] && VAR_3[1])) {
  if ((VAR_2->opcode & VAR_3[0]) == VAR_3[1]) {
   VAR_2->head = FUNC_0 (VAR_2->map, VAR_3[1], ((void*)0));
   break;
  }
  VAR_3 += 2;
 }
 if (!VAR_2->head) {
  VAR_2->head = FUNC_0 (VAR_2->map, VAR_2->opcode, ((void*)0));
  if (!VAR_2->head) {
   VAR_2->head = FUNC_0 (VAR_2->map, (VAR_2->opcode & 0xfe), ((void*)0));
  }
 }
 VAR_2->insn = VAR_2->head ? &VAR_2->head->insn : ((void*)0);
 return VAR_2->head;
}
