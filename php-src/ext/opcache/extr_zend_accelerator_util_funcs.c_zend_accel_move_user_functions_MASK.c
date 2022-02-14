
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_15__ {int * filename; } ;
struct TYPE_19__ {int nNumUsed; int * pDestructor; TYPE_6__* arData; } ;
struct TYPE_17__ {TYPE_1__ main_op_array; TYPE_5__ function_table; } ;
typedef TYPE_3__ zend_script ;
struct TYPE_16__ {int * filename; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_2__ op_array; } ;
typedef TYPE_4__ zend_function ;
typedef int uint32_t ;
typedef int * dtor_func_t ;
struct TYPE_20__ {int key; int val; } ;
typedef TYPE_5__ HashTable ;
typedef TYPE_6__ Bucket ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_5__*,int,int ) ;

void FUNC_7(HashTable *VAR_2, uint32_t VAR_3, zend_script *VAR_4)
{
 Bucket *VAR_5, *VAR_6;
 HashTable *VAR_7;
 zend_string *VAR_8;
 dtor_func_t VAR_9;
 zend_function *VAR_10;

 if (!VAR_3) {
  return;
 }

 VAR_7 = &VAR_4->function_table;
 VAR_8 = VAR_4->main_op_array.filename;
 VAR_9 = VAR_2->pDestructor;
 VAR_2->pDestructor = ((void*)0);
 FUNC_6(VAR_7, VAR_3, 0);
 VAR_6 = VAR_2->arData + VAR_2->nNumUsed;
 VAR_5 = VAR_6 - VAR_3;
 for (; VAR_5 != VAR_6; VAR_5++) {
  if (FUNC_1(FUNC_3(VAR_5->val) == VAR_0)) continue;
  VAR_10 = FUNC_2(VAR_5->val);
  if (FUNC_0(VAR_10->type == VAR_1)
   && FUNC_0(VAR_10->op_array.filename == VAR_8)) {
   FUNC_4(VAR_7, VAR_5->key, VAR_10);
   FUNC_5(VAR_2, VAR_5);
  }
 }
 VAR_2->pDestructor = VAR_9;
}
