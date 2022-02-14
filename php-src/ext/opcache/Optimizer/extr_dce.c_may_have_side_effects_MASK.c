
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zval ;
struct TYPE_14__ {size_t op1_def; size_t op2_use; int op1_use; } ;
typedef TYPE_3__ zend_ssa_op ;
struct TYPE_15__ {TYPE_1__* vars; } ;
typedef TYPE_4__ zend_ssa ;
struct TYPE_16__ {TYPE_2__* static_variables; } ;
typedef TYPE_5__ zend_op_array ;
struct TYPE_17__ {int opcode; int extended_value; int op1_type; int op2_type; } ;
typedef TYPE_6__ zend_op ;
typedef int zend_bool ;
typedef int uint32_t ;
struct TYPE_13__ {scalar_t__ arData; } ;
struct TYPE_12__ {int escape_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int ,size_t) ;

__attribute__((used)) static inline zend_bool FUNC_4(
  zend_op_array *VAR_7, zend_ssa *VAR_8,
  const zend_op *VAR_9, const zend_ssa_op *VAR_10,
  zend_bool VAR_11) {
 switch (VAR_9->opcode) {
  case 155:
  case 169:
  case 167:
  case 145:
  case 181:
  case 132:
  case 196:
  case 219:
  case 135:
  case 156:
  case 150:
  case 204:
  case 206:
  case 203:
  case 198:
  case 184:
  case 195:
  case 157:
  case 207:
  case 209:
  case 208:
  case 205:
  case 139:
  case 137:
  case 170:
  case 168:
  case 166:
  case 165:
  case 202:
  case 201:
  case 140:
  case 142:
  case 176:
  case 218:
  case 138:
  case 136:
  case 197:
  case 178:
  case 172:
  case 173:
  case 183:
  case 174:
  case 171:
  case 182:
  case 175:
  case 179:
  case 180:

   return 0;
  case 141:

   return 1;
  case 164:
  case 161:
  case 163:
  case 160:
  case 159:
  case 162:
  case 158:
  case 199:
  case 217:

   return 1;
  case 211:
  case 189:
  case 190:
  case 177:
  case 134:
  case 185:
  case 188:
  case 187:
  case 186:
  case 133:
  case 129:
  case 128:

   return 1;
  case 194:
  case 193:
  case 192:
  case 191:

   return 1;
  case 144:
  case 143:


   return 1;
  case 212:
   return 1;
  case 216:
  {
   if (FUNC_3(VAR_8, VAR_10->op1_use, VAR_10->op1_def)) {
    return 1;
   }
   if (!VAR_11) {
    if (VAR_9->op2_type != VAR_1
     && (FUNC_1() & VAR_5)
     && VAR_8->vars[VAR_10->op2_use].escape_state != VAR_0) {

     return 1;
    }
   }
   return 0;
  }
  case 130:
   return 1;
  case 131:
  {
   uint32_t VAR_12 = FUNC_0();
   if (VAR_12 & VAR_3) {




    return 1;
   }
   return 0;
  }
  case 147:
  case 152:
  case 149:
  case 154:
   return FUNC_3(VAR_8, VAR_10->op1_use, VAR_10->op1_def);
  case 213:
   return FUNC_3(VAR_8, VAR_10->op1_use, VAR_10->op1_def)
    || VAR_8->vars[VAR_10->op1_def].escape_state != VAR_0;
  case 215:
  case 214:
   if (FUNC_3(VAR_8, VAR_10->op1_use, VAR_10->op1_def)
    || VAR_8->vars[VAR_10->op1_def].escape_state != VAR_0) {
    return 1;
   }
   if (!VAR_11) {
    VAR_9++;
    VAR_10++;
    if (VAR_9->op1_type != VAR_1
     && (FUNC_0() & VAR_5)) {

     return 1;
    }
   }
   return 0;
  case 146:
  case 148:
  case 151:
  case 153:
   if (FUNC_3(VAR_8, VAR_10->op1_use, VAR_10->op1_def)
    || VAR_8->vars[VAR_10->op1_def].escape_state != VAR_0) {
    return 1;
   }
   return 0;
  case 210:
   if (VAR_7->static_variables
    && (VAR_9->extended_value & VAR_6) != 0) {
    zval *VAR_13 =
     (zval*)((char*)VAR_7->static_variables->arData +
      (VAR_9->extended_value & ~VAR_6));
    if (FUNC_2(VAR_13) == VAR_2) {

     return 1;
    }
   }
   return 0;
  case 200:
   return (FUNC_0() & VAR_4) != 0;
  default:

   return 1;
 }
}
