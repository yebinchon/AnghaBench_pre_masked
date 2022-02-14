
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut8 ;
typedef void* ut64 ;
struct TYPE_13__ {scalar_t__ parent_stackptr; scalar_t__ addr; scalar_t__ jump; scalar_t__ stackptr; scalar_t__ fail; int * parent_reg_arena; int size; } ;
struct TYPE_12__ {TYPE_1__* anal; } ;
struct TYPE_11__ {scalar_t__ stackptr; int * last_disasm_reg; int reg; void* gp; } ;
typedef TYPE_2__ RCore ;
typedef int RAnalFunction ;
typedef TYPE_3__ RAnalBlock ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (TYPE_2__*,scalar_t__,int ,int) ;
 TYPE_3__* FUNC_2 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int *,TYPE_3__*) ;
 void* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 void* FUNC_6 (int ,char*) ;

__attribute__((used)) static char *FUNC_7(RCore *VAR_2, RAnalBlock *VAR_3, int VAR_4, RAnalFunction *VAR_5, bool VAR_6, ut64 VAR_7, ut8 *VAR_8) {
 if (VAR_6) {
  VAR_2->anal->gp = VAR_7;
  if (VAR_3->parent_reg_arena) {
   FUNC_5 (VAR_2->anal->reg, VAR_3->parent_reg_arena);
   FUNC_0 (VAR_3->parent_reg_arena);
   ut64 VAR_9 = FUNC_6 (VAR_2->anal->reg, "gp");
   if (VAR_9) {
    VAR_2->anal->gp = VAR_9;
   }
  } else {
   FUNC_5 (VAR_2->anal->reg, VAR_8);
  }
 }
 if (VAR_3->parent_stackptr != VAR_0) {
  VAR_2->anal->stackptr = VAR_3->parent_stackptr;
 }
 char *VAR_10 = FUNC_1 (VAR_2, VAR_3->addr, VAR_3->size, VAR_4);
 if (VAR_3->jump != VAR_1) {
  if (VAR_3->jump > VAR_3->addr) {
   RAnalBlock *VAR_11 = FUNC_3 (VAR_5, VAR_3);
   if (VAR_11) {
    if (VAR_6 && VAR_2->anal->last_disasm_reg != ((void*)0) && !VAR_11->parent_reg_arena) {
     VAR_11->parent_reg_arena = FUNC_4 (VAR_2->anal->reg, VAR_2->anal->last_disasm_reg);
    }
    if (VAR_11->parent_stackptr == VAR_0) {
     VAR_11->parent_stackptr = VAR_2->anal->stackptr + VAR_3->stackptr;
    }
   }
  }
 }
 if (VAR_3->fail != VAR_1) {
  if (VAR_3->fail > VAR_3->addr) {
   RAnalBlock *VAR_12 = FUNC_2 (VAR_5, VAR_3);
   if (VAR_12) {
    if (VAR_6 && VAR_2->anal->last_disasm_reg != ((void*)0) && !VAR_12->parent_reg_arena) {
     VAR_12->parent_reg_arena = FUNC_4 (VAR_2->anal->reg, VAR_2->anal->last_disasm_reg);
    }
    if (VAR_12->parent_stackptr == VAR_0) {
     VAR_12->parent_stackptr = VAR_2->anal->stackptr + VAR_3->stackptr;
    }
   }
  }
 }
 return VAR_10;
}
