
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int op1_def; } ;
typedef TYPE_1__ zend_ssa_op ;
struct TYPE_8__ {int fn_flags; } ;
typedef TYPE_2__ zend_op_array ;
struct TYPE_9__ {int opcode; int extended_value; } ;
typedef TYPE_3__ zend_op ;
typedef int zend_bool ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int ) ;
 int const VAR_2 ;
__attribute__((used)) static zend_bool FUNC_1(
  const zend_op_array *VAR_3, zend_op *VAR_4, zend_ssa_op *VAR_5) {
 switch (VAR_4->opcode) {
  case 142:
  case 144:
  case 141:
  case 143:
  case 146:
  case 148:
  case 145:
  case 147:
  case 173:
  case 166:
  case 172:
  case 170:
  case 168:
  case 167:
  case 171:
  case 169:
  case 165:
  case 159:
  case 161:
  case 160:
  case 162:
  case 154:
  case 156:
  case 155:
  case 157:
  case 158:
  case 131:
  case 130:
  case 136:
  case 133:
  case 137:
  case 135:
  case 138:
  case 134:
  case 153:
   return 0;

  case 140:
  case 139:
  case 163:
  case 164:
  case 150:
  case 132:
  case 151:
   return 0;
  case 152:
  case 174:
   return !(VAR_4->extended_value & VAR_1);
  case 128:
   return !(VAR_3->fn_flags & VAR_0);
  case 129:

   return 0;
  case 149:
   return (VAR_4 - 1)->opcode != 168 &&
    (VAR_4 - 1)->opcode != VAR_2;
  default:
   if (VAR_5->op1_def != -1) {
    FUNC_0(0);
    return 0;
   }
 }

 return 1;
}
