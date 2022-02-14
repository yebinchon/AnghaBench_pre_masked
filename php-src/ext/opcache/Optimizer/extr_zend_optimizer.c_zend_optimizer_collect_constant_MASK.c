
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {scalar_t__ constants; int arena; } ;
typedef TYPE_1__ zend_optimizer_ctx ;
typedef int HashTable ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (scalar_t__,int ,int *) ;
 int FUNC_4 (scalar_t__,int,int *,int ,int ) ;
 int VAR_0 ;

void FUNC_5(zend_optimizer_ctx *VAR_1, zval *VAR_2, zval* VAR_3)
{
 zval VAR_4;

 if (!VAR_1->constants) {
  VAR_1->constants = FUNC_2(&VAR_1->arena, sizeof(HashTable));
  FUNC_4(VAR_1->constants, 16, ((void*)0), VAR_0, 0);
 }
 FUNC_0(&VAR_4, VAR_3);
 FUNC_3(VAR_1->constants, FUNC_1(VAR_2), &VAR_4);
}
