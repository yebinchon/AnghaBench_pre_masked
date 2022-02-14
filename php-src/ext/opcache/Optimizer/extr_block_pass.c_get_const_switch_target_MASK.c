
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zval ;
typedef int zend_op_array ;
struct TYPE_9__ {scalar_t__ opcode; } ;
typedef TYPE_1__ zend_op ;
struct TYPE_10__ {int* map; } ;
typedef TYPE_2__ zend_cfg ;
struct TYPE_11__ {int* successors; int successors_count; } ;
typedef TYPE_3__ zend_basic_block ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(zend_cfg *VAR_4, zend_op_array *VAR_5, zend_basic_block *VAR_6, zend_op *VAR_7, zval *VAR_8) {
 HashTable *VAR_9 = FUNC_3(FUNC_2(VAR_7));
 zval *VAR_10;
 if ((VAR_7->opcode == VAR_2 && FUNC_6(VAR_8) != VAR_0)
   || (VAR_7->opcode == VAR_3 && FUNC_6(VAR_8) != VAR_1)) {

  return VAR_6->successors[VAR_6->successors_count - 1];
 }
 if (FUNC_6(VAR_8) == VAR_0) {
  VAR_10 = FUNC_8(VAR_9, FUNC_4(VAR_8));
 } else {
  FUNC_0(FUNC_6(VAR_8) == VAR_1);
  VAR_10 = FUNC_7(VAR_9, FUNC_5(VAR_8));
 }
 if (!VAR_10) {

  return VAR_6->successors[VAR_6->successors_count - 2];
 }
 return VAR_4->map[FUNC_1(VAR_5, VAR_7, FUNC_4(VAR_10))];
}
