
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int zval ;
struct TYPE_18__ {int function_name; } ;
struct TYPE_17__ {int filename; scalar_t__ last; TYPE_1__* opcodes; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_3__ common; TYPE_2__ op_array; } ;
typedef TYPE_4__ zend_function ;
struct TYPE_21__ {int key; int val; } ;
struct TYPE_20__ {int nNumUsed; scalar_t__ nInternalPointer; TYPE_6__* arData; } ;
struct TYPE_16__ {int lineno; } ;
typedef TYPE_5__ HashTable ;
typedef int CG ;
typedef TYPE_6__ Bucket ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__* FUNC_4 (int) ;
 TYPE_4__* FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*,int,TYPE_4__*) ;
 int FUNC_9 (int ,char*,scalar_t__*,...) ;
 int FUNC_10 (TYPE_5__*,int,int ) ;
 int * FUNC_11 (TYPE_5__*,int,int) ;
 int * FUNC_12 (TYPE_5__*,int,int *) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(HashTable *VAR_3, HashTable *VAR_4)
{
 zend_function *VAR_5, *VAR_6;
 Bucket *VAR_7, *VAR_8;
 zval *VAR_9;

 FUNC_10(VAR_3, VAR_3->nNumUsed + VAR_4->nNumUsed, 0);
 VAR_7 = VAR_4->arData;
 VAR_8 = VAR_7 + VAR_4->nNumUsed;
 for (; VAR_7 != VAR_8; VAR_7++) {
  FUNC_2(FUNC_7(VAR_7->val) != VAR_1);
  FUNC_2(VAR_7->key);
  VAR_9 = FUNC_11(VAR_3, VAR_7->key, 1);
  if (FUNC_1(VAR_9 != ((void*)0))) {
   if (FUNC_0(FUNC_3(VAR_7->key) > 0) && FUNC_0(FUNC_4(VAR_7->key)[0] == 0)) {

    VAR_9 = FUNC_12(VAR_3, VAR_7->key, &VAR_7->val);
   } else {
    goto failure;
   }
  } else {
   FUNC_8(VAR_3, VAR_7->key, FUNC_5(VAR_7->val));
  }
 }
 VAR_3->nInternalPointer = 0;
 return;

failure:
 VAR_5 = FUNC_5(VAR_7->val);
 VAR_6 = FUNC_6(VAR_9);
 CG(VAR_10) = 1;
 FUNC_13(VAR_5->op_array.filename);
 CG(VAR_11) = VAR_5->op_array.opcodes[0].lineno;
 if (VAR_6->type == VAR_2
  && VAR_6->op_array.last > 0) {
  FUNC_9(VAR_0, "Cannot redeclare %s() (previously declared in %s:%d)",
       FUNC_4(VAR_5->common.function_name),
       FUNC_4(VAR_6->op_array.filename),
       (int)VAR_6->op_array.opcodes[0].lineno);
 } else {
  FUNC_9(VAR_0, "Cannot redeclare %s()", FUNC_4(VAR_5->common.function_name));
 }
}
