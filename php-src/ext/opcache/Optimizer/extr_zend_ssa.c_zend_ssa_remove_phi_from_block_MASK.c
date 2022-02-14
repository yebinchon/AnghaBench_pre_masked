
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t block; struct TYPE_6__* next; } ;
typedef TYPE_1__ zend_ssa_phi ;
struct TYPE_7__ {TYPE_1__* phis; } ;
typedef TYPE_2__ zend_ssa_block ;
struct TYPE_8__ {TYPE_2__* blocks; } ;
typedef TYPE_3__ zend_ssa ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(zend_ssa *VAR_0, zend_ssa_phi *VAR_1)
{
 zend_ssa_block *VAR_2 = &VAR_0->blocks[VAR_1->block];
 zend_ssa_phi **VAR_3 = &VAR_2->phis;
 while (*VAR_3 != VAR_1) {
  FUNC_0(*VAR_3 != ((void*)0));
  VAR_3 = &(*VAR_3)->next;
 }
 *VAR_3 = (*VAR_3)->next;
}
