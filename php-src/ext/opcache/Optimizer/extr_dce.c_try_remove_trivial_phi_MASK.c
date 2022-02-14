
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pi; int ssa_var; } ;
typedef TYPE_1__ zend_ssa_phi ;
typedef int zend_ssa ;
struct TYPE_8__ {int * ssa; } ;
typedef TYPE_2__ context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,int ,int,int) ;

__attribute__((used)) static void FUNC_3(context *VAR_0, zend_ssa_phi *VAR_1) {
 zend_ssa *VAR_2 = VAR_0->ssa;
 if (VAR_1->pi < 0) {

  int VAR_3 = FUNC_0(VAR_2, VAR_1);
  if (VAR_3 >= 0) {
   FUNC_2(VAR_2, VAR_1->ssa_var, VAR_3, 1);
   FUNC_1(VAR_2, VAR_1);
  }
 } else {







 }
}
