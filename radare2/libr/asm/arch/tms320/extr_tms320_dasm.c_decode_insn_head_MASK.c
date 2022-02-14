
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* insn; } ;
typedef TYPE_1__ tms320_dasm_t ;
typedef int insn_item_t ;
struct TYPE_8__ {struct TYPE_8__* i_list; } ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

insn_item_t * FUNC_4(tms320_dasm_t * VAR_0)
{
 FUNC_2(VAR_0);

 if (VAR_0->insn->i_list) {
  VAR_0->insn = VAR_0->insn->i_list;
  while (!FUNC_1(VAR_0->insn)) {
   if (FUNC_3 (VAR_0) && FUNC_2 (VAR_0)) {
    break;
   }
   VAR_0->insn++;
  }
 }

 if (!FUNC_1 (VAR_0->insn)) {
  return FUNC_0 (VAR_0);
 }

 return ((void*)0);
}
