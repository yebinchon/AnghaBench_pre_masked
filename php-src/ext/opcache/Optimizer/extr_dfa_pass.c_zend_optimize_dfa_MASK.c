
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_ssa ;
struct TYPE_5__ {int arena; } ;
typedef TYPE_1__ zend_optimizer_ctx ;
typedef int zend_op_array ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int *) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int *) ;

void FUNC_4(zend_op_array *VAR_1, zend_optimizer_ctx *VAR_2)
{
 void *VAR_3 = FUNC_0(VAR_2->arena);
 zend_ssa VAR_4;

 if (FUNC_2(VAR_1, VAR_2, &VAR_4) != VAR_0) {
  FUNC_1(&VAR_2->arena, VAR_3);
  return;
 }

 FUNC_3(VAR_1, VAR_2, &VAR_4, ((void*)0));


 FUNC_1(&VAR_2->arena, VAR_3);
}
