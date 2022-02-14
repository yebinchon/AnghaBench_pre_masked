
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ definition_phi; } ;
typedef TYPE_2__ zend_ssa_var ;
struct TYPE_7__ {int phi_worklist_no_val; int phi_dead; TYPE_1__* ssa; } ;
typedef TYPE_3__ context ;
struct TYPE_5__ {TYPE_2__* vars; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void FUNC_2(context *VAR_0, int VAR_1) {
 zend_ssa_var *VAR_2 = &VAR_0->ssa->vars[VAR_1];
 if (VAR_2->definition_phi && FUNC_0(VAR_0->phi_dead, VAR_1)) {
  FUNC_1(VAR_0->phi_worklist_no_val, VAR_1);
 }
}
