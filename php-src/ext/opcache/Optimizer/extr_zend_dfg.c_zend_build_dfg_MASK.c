
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int fn_flags; TYPE_5__* opcodes; } ;
typedef TYPE_4__ zend_op_array ;
struct TYPE_12__ {int var; } ;
struct TYPE_14__ {int var; } ;
struct TYPE_13__ {int var; } ;
struct TYPE_16__ {scalar_t__ opcode; int op1_type; int op2_type; int extended_value; int result_type; TYPE_1__ result; TYPE_3__ op2; TYPE_2__ op1; } ;
typedef TYPE_5__ zend_op ;
struct TYPE_17__ {int size; int out; int in; int use; int def; int tmp; } ;
typedef TYPE_6__ zend_dfg ;
struct TYPE_18__ {int blocks_count; int* predecessors; TYPE_8__* blocks; } ;
typedef TYPE_7__ zend_cfg ;
typedef int zend_bitset ;
struct TYPE_19__ {int flags; int start; int len; int successors_count; int* successors; size_t predecessor_offset; int predecessors_count; } ;
typedef TYPE_8__ zend_basic_block ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ,int,int,int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;

 int FUNC_5 (int,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;





 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_13 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int ,int ,int ,int ,int) ;

int FUNC_18(const zend_op_array *VAR_14, const zend_cfg *VAR_15, zend_dfg *VAR_16, uint32_t VAR_17)
{
 int VAR_18;
 zend_basic_block *VAR_19 = VAR_15->blocks;
 int VAR_20 = VAR_15->blocks_count;
 zend_bitset VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 int VAR_26;
 uint32_t VAR_27;
 int VAR_28;

 VAR_18 = VAR_16->size;
 VAR_21 = VAR_16->tmp;
 VAR_22 = VAR_16->def;
 VAR_23 = VAR_16->use;
 VAR_24 = VAR_16->in;
 VAR_25 = VAR_16->out;


 for (VAR_28 = 0; VAR_28 < VAR_20; VAR_28++) {
  zend_op *VAR_29, *VAR_30;
  if ((VAR_19[VAR_28].flags & VAR_7) == 0) {
   continue;
  }

  VAR_29 = VAR_14->opcodes + VAR_19[VAR_28].start;
  VAR_30 = VAR_29 + VAR_19[VAR_28].len;
  for (; VAR_29 < VAR_30; VAR_29++) {
   if (VAR_29->opcode != VAR_10) {
    zend_op *VAR_31 = VAR_29 + 1;
    if (VAR_31 < VAR_30 && VAR_31->opcode == VAR_10) {
     if (VAR_31->op1_type & (VAR_0|VAR_2|VAR_1)) {
      VAR_27 = FUNC_4(VAR_31->op1.var);
      if (VAR_31->op1_type == VAR_0 && (VAR_29->opcode == 167
        || VAR_29->opcode == VAR_6)) {
       FUNC_3(VAR_23, VAR_18, VAR_28, VAR_27);
       FUNC_3(VAR_22, VAR_18, VAR_28, VAR_27);
      } else {
       if (!FUNC_2(VAR_22, VAR_18, VAR_28, VAR_27)) {
        FUNC_3(VAR_23, VAR_18, VAR_28, VAR_27);
       }
      }
     }
     if (VAR_31->op2_type & (VAR_0|VAR_2|VAR_1)) {
      VAR_27 = FUNC_4(VAR_31->op2.var);
      if (!FUNC_2(VAR_22, VAR_18, VAR_28, VAR_27)) {
       FUNC_3(VAR_23, VAR_18, VAR_28, VAR_27);
      }
     }
    }
    if (VAR_29->op1_type == VAR_0) {
     VAR_27 = FUNC_4(VAR_29->op1.var);
     switch (VAR_29->opcode) {
     case 173:
     case 149:
      if ((VAR_17 & VAR_11)
        || (VAR_29->extended_value & VAR_5)) {
       goto op1_def;
      }
      goto op1_use;
     case 151:
     case 136:
     case 160:
     case 139:
     case 148:
     case 159:
      if (VAR_17 & VAR_11) {
       goto op1_def;
      }
      goto op1_use;
     case 128:
      if ((VAR_17 & VAR_11)
        || (VAR_14->fn_flags & VAR_4)) {
       goto op1_def;
      }
      goto op1_use;
     case 132:
     case 172:
     case 165:
     case 167:
     case 163:
     case 161:
     case 135:
     case 138:
     case 137:
     case 134:
     case 133:
     case 150:
     case 166:
     case 170:
     case 168:
     case 164:
     case 141:
     case 143:
     case 145:
     case 147:
     case 171:
     case 169:
     case 131:
     case 130:
     case 155:
     case 157:
     case 158:
     case 156:
     case 154:
     case 129:
     case 140:
     case 142:
     case 144:
     case 146:
op1_def:


      FUNC_3(VAR_23, VAR_18, VAR_28, VAR_27);
      FUNC_3(VAR_22, VAR_18, VAR_28, VAR_27);
      break;
     default:
op1_use:
      if (!FUNC_2(VAR_22, VAR_18, VAR_28, VAR_27)) {
       FUNC_3(VAR_23, VAR_18, VAR_28, VAR_27);
      }
     }
    } else if (VAR_29->op1_type & (VAR_2|VAR_1)) {
     VAR_27 = FUNC_4(VAR_29->op1.var);
     if (!FUNC_2(VAR_22, VAR_18, VAR_28, VAR_27)) {
      FUNC_3(VAR_23, VAR_18, VAR_28, VAR_27);
     }
     if (VAR_29->opcode == 129) {
      FUNC_3(VAR_22, VAR_18, VAR_28, VAR_27);
     }
    }
    if (VAR_29->op2_type == VAR_0) {
     VAR_27 = FUNC_4(VAR_29->op2.var);
     switch (VAR_29->opcode) {
      case 172:
       if (VAR_17 & VAR_11) {
        goto op2_def;
       }
       goto op2_use;
      case 162:
       if ((VAR_17 & VAR_11) || (VAR_29->extended_value & VAR_8)) {
        goto op2_def;
       }
       goto op2_use;
      case 165:
      case 153:
      case 152:
op2_def:

       FUNC_3(VAR_23, VAR_18, VAR_28, VAR_27);
       FUNC_3(VAR_22, VAR_18, VAR_28, VAR_27);
       break;
      default:
op2_use:
       if (!FUNC_2(VAR_22, VAR_18, VAR_28, VAR_27)) {
        FUNC_3(VAR_23, VAR_18, VAR_28, VAR_27);
       }
       break;
     }
    } else if (VAR_29->op2_type & (VAR_2|VAR_1)) {
     VAR_27 = FUNC_4(VAR_29->op2.var);
     if (VAR_29->opcode == 153 || VAR_29->opcode == 152) {
      FUNC_3(VAR_22, VAR_18, VAR_28, VAR_27);
     } else {
      if (!FUNC_2(VAR_22, VAR_18, VAR_28, VAR_27)) {
       FUNC_3(VAR_23, VAR_18, VAR_28, VAR_27);
      }
     }
    }
    if (VAR_29->result_type & (VAR_0|VAR_2|VAR_1)) {
     VAR_27 = FUNC_4(VAR_29->result.var);
     if ((VAR_17 & VAR_12)
      && VAR_29->result_type == VAR_0) {
      FUNC_3(VAR_23, VAR_18, VAR_28, VAR_27);
     }
     FUNC_3(VAR_22, VAR_18, VAR_28, VAR_27);
    }
   }
  }
 }


 {
  uint32_t VAR_32 = FUNC_15(VAR_20);
  zend_bitset VAR_33;
  FUNC_0(VAR_13);
  VAR_33 = FUNC_5(VAR_32, VAR_13);
  FUNC_7(VAR_33, 0, VAR_32 * VAR_9);
  for (VAR_28 = 0; VAR_28 < VAR_20; VAR_28++) {
   FUNC_13(VAR_33, VAR_28);
  }
  while (!FUNC_10(VAR_33, VAR_32)) {


   VAR_28 = FUNC_14(VAR_33, VAR_32);
   FUNC_12(VAR_33, VAR_28);

   if ((VAR_19[VAR_28].flags & VAR_7) == 0) {
    continue;
   }
   if (VAR_19[VAR_28].successors_count != 0) {
    FUNC_9(FUNC_1(VAR_25, VAR_18, VAR_28), FUNC_1(VAR_24, VAR_18, VAR_19[VAR_28].successors[0]), VAR_18);
    for (VAR_26 = 1; VAR_26 < VAR_19[VAR_28].successors_count; VAR_26++) {
     FUNC_16(FUNC_1(VAR_25, VAR_18, VAR_28), FUNC_1(VAR_24, VAR_18, VAR_19[VAR_28].successors[VAR_26]), VAR_18);
    }
   } else {
    FUNC_8(FUNC_1(VAR_25, VAR_18, VAR_28), VAR_18);
   }
   FUNC_17(VAR_21, FUNC_1(VAR_23, VAR_18, VAR_28), FUNC_1(VAR_25, VAR_18, VAR_28), FUNC_1(VAR_22, VAR_18, VAR_28), VAR_18);
   if (!FUNC_11(FUNC_1(VAR_24, VAR_18, VAR_28), VAR_21, VAR_18)) {
    FUNC_9(FUNC_1(VAR_24, VAR_18, VAR_28), VAR_21, VAR_18);


    {
     int *VAR_34 = &VAR_15->predecessors[VAR_19[VAR_28].predecessor_offset];
     for (VAR_26 = 0; VAR_26 < VAR_19[VAR_28].predecessors_count; VAR_26++) {
      FUNC_13(VAR_33, VAR_34[VAR_26]);
     }
    }
   }
  }

  FUNC_6(VAR_33, VAR_13);
 }

 return VAR_3;
}
