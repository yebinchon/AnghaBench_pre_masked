
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {size_t ssa_var; } ;
typedef TYPE_2__ zend_ssa_phi ;
struct TYPE_12__ {TYPE_1__* vars; } ;
typedef TYPE_3__ zend_ssa ;
struct TYPE_10__ {scalar_t__ use_chain; int * definition_phi; int * phi_use_chain; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;

void FUNC_3(zend_ssa *VAR_0, zend_ssa_phi *VAR_1)
{
 FUNC_0(VAR_1->ssa_var >= 0);
 FUNC_0(VAR_0->vars[VAR_1->ssa_var].use_chain < 0
  && VAR_0->vars[VAR_1->ssa_var].phi_use_chain == ((void*)0));
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1);
 VAR_0->vars[VAR_1->ssa_var].definition_phi = ((void*)0);
 VAR_1->ssa_var = -1;
}
