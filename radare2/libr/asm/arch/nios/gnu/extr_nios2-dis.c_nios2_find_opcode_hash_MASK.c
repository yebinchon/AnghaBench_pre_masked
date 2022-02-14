
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nios2_opcode {unsigned long match; unsigned long mask; } ;
struct TYPE_4__ {struct nios2_opcode const* opcode; struct TYPE_4__* next; } ;
typedef TYPE_1__ nios2_opcode_hash ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_1__** VAR_4 ;

const struct nios2_opcode *
FUNC_1 (unsigned long VAR_5)
{
  nios2_opcode_hash *VAR_6;


  if (!VAR_3) {
   FUNC_0 ();
  }


  for (VAR_6 = VAR_4[(VAR_5 >> VAR_1) & VAR_0];
   VAR_6; VAR_6 = VAR_6->next) {
   if (VAR_6->opcode->match == (VAR_5 & VAR_6->opcode->mask)) {
    return VAR_6->opcode;
   }
  }


  for (VAR_6 = VAR_2[(VAR_5 >> VAR_1) & VAR_0];
   VAR_6; VAR_6 = VAR_6->next) {
   if (VAR_6->opcode->match == (VAR_5 & VAR_6->opcode->mask)) {
    return VAR_6->opcode;
   }
  }

  return ((void*)0);
}
