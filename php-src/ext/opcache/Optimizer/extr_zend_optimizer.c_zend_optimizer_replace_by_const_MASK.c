
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int zval ;
typedef scalar_t__ zend_uchar ;
struct TYPE_16__ {int last; int fn_flags; int arg_info; TYPE_4__* opcodes; } ;
typedef TYPE_3__ zend_op_array ;
struct TYPE_15__ {scalar_t__ var; } ;
struct TYPE_14__ {scalar_t__ var; void* constant; } ;
struct TYPE_17__ {scalar_t__ op1_type; int opcode; scalar_t__ op2_type; TYPE_2__ op2; TYPE_1__ op1; int extended_value; } ;
typedef TYPE_4__ zend_op ;
struct TYPE_18__ {int type; } ;
typedef TYPE_5__ zend_arg_info ;
typedef scalar_t__ uint32_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;



 void* VAR_8 ;
 void* VAR_9 ;







 int FUNC_2 (int ,int ) ;

 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

int FUNC_12(zend_op_array *VAR_10,
                                    zend_op *VAR_11,
                                    zend_uchar VAR_12,
                                    uint32_t VAR_13,
                                    zval *VAR_14)
{
 zend_op *VAR_15 = VAR_10->opcodes + VAR_10->last;

 while (VAR_11 < VAR_15) {
  if (VAR_11->op1_type == VAR_12 &&
   VAR_11->op1.var == VAR_13) {
   switch (VAR_11->opcode) {
    case 141:
    case 143:
    case 144:
    case 142:
    case 139:
    case 146:
    case 131:
    case 138:
     return 0;
    case 135:
     VAR_11->extended_value = 0;
     VAR_11->opcode = VAR_8;
     break;
    case 134:
    case 137:
     VAR_11->extended_value = 0;
     VAR_11->opcode = VAR_9;
     break;
    case 133:
     return 0;
    case 132:
     VAR_11->opcode = VAR_8;
     break;
    case 136:
     VAR_11->opcode = VAR_9;
     break;






    case 140: {
     zend_op *VAR_16 = VAR_11;

     do {
      if (VAR_16->opcode == 140 &&
       VAR_16->op1_type == VAR_12 &&
       VAR_16->op1.var == VAR_13) {
       zval VAR_17;
       FUNC_3(&VAR_17, VAR_14);
       if (FUNC_5(VAR_17) == VAR_1) {
        FUNC_10(FUNC_4(VAR_17));
       }
       VAR_16->op1.constant = FUNC_7(VAR_10, &VAR_17);
       VAR_16->op1_type = VAR_0;
      }
      VAR_16++;
     } while (VAR_16->opcode != VAR_3 || VAR_16->op1_type != VAR_12 || VAR_16->op1.var != VAR_13);

     FUNC_1(VAR_16->opcode == VAR_3 && VAR_16->op1_type == VAR_12 && VAR_16->op1.var == VAR_13);
     FUNC_0(VAR_16);
     FUNC_11(VAR_14);
     return 1;
    }
    case 130:
    case 129:
    case 145: {
     zend_op *VAR_18 = VAR_10->opcodes + VAR_10->last;
     while (VAR_11 < VAR_18) {
      if (VAR_11->op1_type == VAR_12 && VAR_11->op1.var == VAR_13) {
       if (VAR_11->opcode == 145
         || VAR_11->opcode == 130
         || VAR_11->opcode == 129) {
        zval VAR_19;

        if (VAR_11->opcode == 145) {
         VAR_11->opcode = VAR_6;
        }
        FUNC_3(&VAR_19, VAR_14);
        if (FUNC_5(VAR_19) == VAR_1) {
         FUNC_10(FUNC_4(VAR_19));
        }
        VAR_11->op1.constant = FUNC_7(VAR_10, &VAR_19);
        VAR_11->op1_type = VAR_0;
       } else if (VAR_11->opcode == VAR_3) {
        if (VAR_11->extended_value == VAR_5) {

         FUNC_0(VAR_11);
         break;
        }

        FUNC_1(VAR_11->extended_value == VAR_4);
        FUNC_0(VAR_11);
       } else {
        FUNC_1(0);
       }
      }
      VAR_11++;
     }
     FUNC_11(VAR_14);
     return 1;
    }
    case 128: {
     zend_arg_info *VAR_20 = VAR_10->arg_info - 1;
     if (!FUNC_2(VAR_20->type, FUNC_6(VAR_14))
      || (VAR_10->fn_flags & VAR_2)) {
      return 0;
     }
     FUNC_0(VAR_11);


     do {
      ++VAR_11;
     } while (VAR_11->opcode != VAR_7 && VAR_11->opcode != 138);
     FUNC_1(VAR_11->op1.var == VAR_13);

     break;
      }
    default:
     break;
   }
   return FUNC_8(VAR_10, VAR_11, VAR_14);
  }

  if (VAR_11->op2_type == VAR_12 &&
   VAR_11->op2.var == VAR_13) {
   return FUNC_9(VAR_10, VAR_11, VAR_14);
  }
  VAR_11++;
 }

 return 1;
}
