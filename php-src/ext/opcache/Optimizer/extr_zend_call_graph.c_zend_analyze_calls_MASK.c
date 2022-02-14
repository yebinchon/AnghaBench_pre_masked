
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int zend_send_arg_info ;
typedef int zend_script ;
struct TYPE_19__ {int last; TYPE_4__* opcodes; } ;
typedef TYPE_3__ zend_op_array ;
struct TYPE_17__ {size_t num; } ;
struct TYPE_20__ {int opcode; int extended_value; TYPE_1__ op2; } ;
typedef TYPE_4__ zend_op ;
struct TYPE_21__ {int op_array; int type; } ;
typedef TYPE_5__ zend_function ;
struct TYPE_22__ {int flags; TYPE_7__* caller_info; TYPE_7__* callee_info; } ;
typedef TYPE_6__ zend_func_info ;
struct TYPE_23__ {int num_args; TYPE_2__* arg_info; TYPE_4__* caller_call_opline; struct TYPE_23__* next_caller; struct TYPE_23__* next_callee; TYPE_5__* callee_func; TYPE_4__* caller_init_opline; TYPE_3__* caller_op_array; } ;
typedef TYPE_7__ zend_call_info ;
typedef int zend_arena ;
typedef size_t uint32_t ;
struct TYPE_18__ {TYPE_4__* opline; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;




 int VAR_2 ;
 TYPE_6__* FUNC_1 (int *) ;







 int VAR_3 ;
 TYPE_7__** FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_7__**,int ) ;
 int VAR_4 ;
 TYPE_7__* FUNC_4 (int **,int,int) ;
 TYPE_5__* FUNC_5 (int *,TYPE_3__*,TYPE_4__*) ;

int FUNC_6(zend_arena **VAR_5, zend_script *VAR_6, uint32_t VAR_7, zend_op_array *VAR_8, zend_func_info *VAR_9)
{
 zend_op *VAR_10 = VAR_8->opcodes;
 zend_op *VAR_11 = VAR_10 + VAR_8->last;
 zend_function *VAR_12;
 zend_call_info *VAR_13;
 int VAR_14 = 0;
 zend_call_info **VAR_15;
 FUNC_0(VAR_4);

 VAR_15 = FUNC_2((VAR_8->last / 2) * sizeof(zend_call_info*), VAR_4);
 VAR_13 = ((void*)0);
 while (VAR_10 != VAR_11) {
  switch (VAR_10->opcode) {
   case 145:
   case 143:
   case 141:
    VAR_15[VAR_14] = VAR_13;
    VAR_12 = FUNC_5(
     VAR_6, VAR_8, VAR_10);
    if (VAR_12) {
     VAR_13 = FUNC_4(VAR_5, 1, sizeof(zend_call_info) + (sizeof(zend_send_arg_info) * ((int)VAR_10->extended_value - 1)));
     VAR_13->caller_op_array = VAR_8;
     VAR_13->caller_init_opline = VAR_10;
     VAR_13->caller_call_opline = ((void*)0);
     VAR_13->callee_func = VAR_12;
     VAR_13->num_args = VAR_10->extended_value;
     VAR_13->next_callee = VAR_9->callee_info;
     VAR_9->callee_info = VAR_13;

     if (VAR_7 & VAR_1) {
      VAR_13->next_caller = ((void*)0);
     } else if (VAR_12->type == VAR_3) {
      VAR_13->next_caller = ((void*)0);
     } else {
      zend_func_info *VAR_16 = FUNC_1(&VAR_12->op_array);
      if (VAR_16) {
       VAR_13->next_caller = VAR_16->caller_info;
       VAR_16->caller_info = VAR_13;
      } else {
       VAR_13->next_caller = ((void*)0);
      }
     }
    } else {
     VAR_13 = ((void*)0);
    }
    VAR_14++;
    break;
   case 144:
   case 142:
   case 146:
   case 139:
   case 140:
    VAR_15[VAR_14] = VAR_13;
    VAR_13 = ((void*)0);
    VAR_14++;
    break;
   case 150:
   case 148:
   case 147:
   case 149:
    VAR_9->flags |= VAR_2;
    if (VAR_13) {
     VAR_13->caller_call_opline = VAR_10;
    }
    VAR_14--;
    VAR_13 = VAR_15[VAR_14];
    break;
   case 133:
   case 131:
   case 132:
   case 130:
   case 137:
   case 136:
   case 129:
   case 128:
   case 134:
    if (VAR_13) {
     uint32_t VAR_17 = VAR_10->op2.num;

     if (VAR_17 > 0) {
      VAR_17--;
     }
     VAR_13->arg_info[VAR_17].opline = VAR_10;
    }
    break;
   case 138:
   case 135:

    if (VAR_13) {
     VAR_13->num_args = -1;
    }
    break;
  }
  VAR_10++;
 }
 FUNC_3(VAR_15, VAR_4);
 return VAR_0;
}
