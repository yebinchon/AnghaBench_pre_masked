
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {size_t last_var; TYPE_4__* opcodes; } ;
typedef TYPE_3__ zend_op_array ;
struct TYPE_12__ {size_t var; } ;
struct TYPE_11__ {size_t var; } ;
struct TYPE_14__ {int opcode; int op1_type; int op2_type; TYPE_2__ op2; TYPE_1__ op1; } ;
typedef TYPE_4__ zend_op ;
typedef int (* zend_needs_live_range_cb ) (TYPE_3__*,TYPE_4__*) ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int *,size_t) ;


 int VAR_2 ;







 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;



 int FUNC_2 (TYPE_3__*,size_t,size_t,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(
  zend_op_array *VAR_9, uint32_t VAR_10, uint32_t VAR_11, uint32_t VAR_12,
  zend_needs_live_range_cb VAR_13) {
 zend_op *VAR_14 = &VAR_9->opcodes[VAR_11], *VAR_15 = VAR_14;
 zend_op *VAR_16 = &VAR_9->opcodes[VAR_12];
 uint32_t VAR_17;

 switch (VAR_14->opcode) {

  case 153:
  case 152:
  case 129:
   FUNC_0(0);
   return;

  case 131:
  case 132:
  case 150:
  case 149:

  case 142:
  case 147:

  case 143:
   return;
  case 151:
   VAR_17 = VAR_7;
   VAR_11++;
   break;
  case 128:
   VAR_17 = VAR_6;

   VAR_14--;
   break;
  case 141:
  case 140:
   VAR_17 = VAR_4;
   VAR_11++;
   break;





  case 130:
  {
   int VAR_18 = 0;
   uint32_t VAR_19 = VAR_11;

   while (VAR_14 + 1 < VAR_16) {
    VAR_14++;
    VAR_11++;
    if (VAR_14->opcode == VAR_2) {
     if (VAR_18 == 0) {
      break;
     }
     VAR_18--;
    } else {
     switch (VAR_14->opcode) {
      case 138:
      case 137:
      case 135:
      case 139:
      case 133:
      case 136:
      case 134:
      case 130:
       VAR_18++;
       break;
      case 145:
      case 144:
      case 146:
       VAR_18--;
       break;
     }
    }
   }
   FUNC_2(VAR_9, VAR_10, VAR_5, VAR_19 + 1, VAR_11 + 1);
   if (VAR_11 + 1 == VAR_12) {

    return;
   }

  default:
   VAR_11++;
   VAR_17 = VAR_8;



   if (VAR_13 && !VAR_13(VAR_9, VAR_15)) {
    return;
   }
   break;
  }
  case 148:
  {



   uint32_t VAR_20 =
    (uint32_t) (intptr_t) FUNC_1(((void*)0), VAR_9->last_var + VAR_10);
   zend_op *VAR_21 = VAR_16;

   if (VAR_13 && !VAR_13(VAR_9, VAR_15)) {
    return;
   }

   while ((VAR_21-1)->opcode == VAR_3) {
    VAR_21--;
   }

   VAR_17 = VAR_8;
   VAR_11 = VAR_21 - VAR_9->opcodes;
   if (VAR_11 != VAR_12) {
    FUNC_2(VAR_9, VAR_10, VAR_17, VAR_11, VAR_12);
   }

   do {
    VAR_16--;
   } while (!(
    ((VAR_16->op1_type & (VAR_0|VAR_1)) && VAR_16->op1.var == VAR_20) ||
    ((VAR_16->op2_type & (VAR_0|VAR_1)) && VAR_16->op2.var == VAR_20)
   ));

   VAR_11 = VAR_14 + 1 - VAR_9->opcodes;
   VAR_12 = VAR_16 - VAR_9->opcodes;
   FUNC_2(VAR_9, VAR_10, VAR_17, VAR_11, VAR_12);
   return;
  }
 }

 FUNC_2(VAR_9, VAR_10, VAR_17, VAR_11, VAR_12);
}
