
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_ssa_phi ;
struct TYPE_6__ {TYPE_1__* vars; } ;
typedef TYPE_2__ zend_ssa ;
struct TYPE_5__ {int * phi_use_chain; } ;


 int ** FUNC_0 (TYPE_2__*,int,int *) ;

__attribute__((used)) static inline void FUNC_1(zend_ssa *VAR_0, zend_ssa_phi *VAR_1, int VAR_2, zend_ssa_phi *VAR_3)
{
 zend_ssa_phi **VAR_4 = &VAR_0->vars[VAR_2].phi_use_chain;
 while (*VAR_4 && *VAR_4 != VAR_1) {
  VAR_4 = FUNC_0(VAR_0, VAR_2, *VAR_4);
 }
 if (*VAR_4) {
  *VAR_4 = VAR_3;
 }
}
