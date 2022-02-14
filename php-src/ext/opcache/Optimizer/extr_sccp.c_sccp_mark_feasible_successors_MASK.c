
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zval ;
typedef int zend_ssa_op ;
struct TYPE_14__ {int* map; } ;
struct TYPE_15__ {TYPE_2__ cfg; } ;
typedef TYPE_3__ zend_ssa ;
typedef int zend_op_array ;
struct TYPE_13__ {int constant; } ;
struct TYPE_16__ {int opcode; int extended_value; TYPE_1__ op2; } ;
typedef TYPE_4__ zend_op ;
struct TYPE_17__ {int* successors; int successors_count; } ;
typedef TYPE_5__ zend_basic_block ;
struct TYPE_18__ {TYPE_3__* ssa; int * op_array; } ;
typedef TYPE_6__ scdf_ctx ;
typedef int sccp_ctx ;
typedef int HashTable ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_6 ;
 size_t FUNC_4 (int *,TYPE_4__*,int ) ;


 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int * FUNC_12 (int *,TYPE_4__*,int *) ;
 int FUNC_13 (TYPE_6__*,int,int) ;
 int * FUNC_14 (int *,int ) ;
 int * FUNC_15 (int *,int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(
  scdf_ctx *VAR_7,
  int VAR_8, zend_basic_block *VAR_9,
  zend_op *VAR_10, zend_ssa_op *VAR_11) {
 sccp_ctx *VAR_12 = (sccp_ctx *) VAR_7;
 zval *VAR_13, VAR_14;
 int VAR_15;


 switch (VAR_10->opcode) {
  case 142:
  case 141:
  case 139:
  case 138:
   FUNC_13(VAR_7, VAR_8, VAR_9->successors[0]);
   FUNC_13(VAR_7, VAR_8, VAR_9->successors[1]);
   return;
 }

 VAR_13 = FUNC_12(VAR_12, VAR_10, VAR_11);


 if (!VAR_13 || FUNC_1(VAR_13)) {
  for (VAR_15 = 0; VAR_15 < VAR_9->successors_count; VAR_15++) {
   FUNC_13(VAR_7, VAR_8, VAR_9->successors[VAR_15]);
  }
  return;
 }


 if (FUNC_3(VAR_13)) {
  return;
 }

 switch (VAR_10->opcode) {
  case 133:
  case 132:
  case 131:
  {
   if (FUNC_11(&VAR_14, VAR_13) == VAR_0) {
    FUNC_13(VAR_7, VAR_8, VAR_9->successors[0]);
    FUNC_13(VAR_7, VAR_8, VAR_9->successors[1]);
    return;
   }
   VAR_15 = FUNC_9(VAR_14) == VAR_6;
   break;
  }
  case 135:
  case 134:
  case 130:
  {
   if (FUNC_11(&VAR_14, VAR_13) == VAR_0) {
    FUNC_13(VAR_7, VAR_8, VAR_9->successors[0]);
    FUNC_13(VAR_7, VAR_8, VAR_9->successors[1]);
    return;
   }
   VAR_15 = FUNC_9(VAR_14) == VAR_2;
   break;
  }
  case 140:
   VAR_15 = (FUNC_10(VAR_13) == VAR_4);
   break;
  case 137:
  case 136:


   if (FUNC_10(VAR_13) != VAR_1 ||
     (FUNC_2(VAR_13) && FUNC_16(FUNC_6(VAR_13)) == 0)) {
    FUNC_13(VAR_7, VAR_8, VAR_9->successors[0]);
    FUNC_13(VAR_7, VAR_8, VAR_9->successors[1]);
    return;
   }
   VAR_15 = FUNC_16(FUNC_6(VAR_13)) != 0;
   break;
  case 129:
   if (FUNC_10(VAR_13) == VAR_3) {
    zend_op_array *VAR_16 = VAR_7->op_array;
    zend_ssa *VAR_17 = VAR_7->ssa;
    HashTable *VAR_18 = FUNC_5(FUNC_0(VAR_16, VAR_10->op2.constant));
    zval *VAR_19 = FUNC_15(VAR_18, FUNC_7(VAR_13));
    int VAR_20;

    if (VAR_19) {
     VAR_20 = VAR_17->cfg.map[FUNC_4(VAR_16, VAR_10, FUNC_7(VAR_19))];
    } else {
     VAR_20 = VAR_17->cfg.map[FUNC_4(VAR_16, VAR_10, VAR_10->extended_value)];
    }
    FUNC_13(VAR_7, VAR_8, VAR_20);
    return;
   }
   VAR_15 = 0;
   break;
  case 128:
   if (FUNC_10(VAR_13) == VAR_5) {
    zend_op_array *VAR_21 = VAR_7->op_array;
    zend_ssa *VAR_22 = VAR_7->ssa;
    HashTable *VAR_23 = FUNC_5(FUNC_0(VAR_21, VAR_10->op2.constant));
    zval *VAR_24 = FUNC_14(VAR_23, FUNC_8(VAR_13));
    int VAR_25;

    if (VAR_24) {
     VAR_25 = VAR_22->cfg.map[FUNC_4(VAR_21, VAR_10, FUNC_7(VAR_24))];
    } else {
     VAR_25 = VAR_22->cfg.map[FUNC_4(VAR_21, VAR_10, VAR_10->extended_value)];
    }
    FUNC_13(VAR_7, VAR_8, VAR_25);
    return;
   }
   VAR_15 = 0;
   break;
  default:
   for (VAR_15 = 0; VAR_15 < VAR_9->successors_count; VAR_15++) {
    FUNC_13(VAR_7, VAR_8, VAR_9->successors[VAR_15]);
   }
   return;
 }
 FUNC_13(VAR_7, VAR_8, VAR_9->successors[VAR_15]);
}
