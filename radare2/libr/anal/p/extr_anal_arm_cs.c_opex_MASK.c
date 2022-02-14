
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int st32 ;
typedef int csh ;
struct TYPE_11__ {TYPE_1__* detail; } ;
typedef TYPE_4__ cs_insn ;
struct TYPE_10__ {int type; int value; } ;
struct TYPE_9__ {int base; int index; int scale; int disp; } ;
struct TYPE_12__ {int type; int reg; int fp; int vector_index; scalar_t__ subtracted; TYPE_3__ shift; int setend; int imm; TYPE_2__ mem; } ;
typedef TYPE_5__ cs_arm_op ;
struct TYPE_13__ {int op_count; int vector_size; scalar_t__ vector_data; int cps_mode; int cps_flag; scalar_t__ cc; int mem_barrier; scalar_t__ writeback; scalar_t__ update_flags; scalar_t__ usermode; TYPE_5__* operands; } ;
typedef TYPE_6__ cs_arm ;
struct TYPE_8__ {TYPE_6__ arm; } ;
typedef int RStrBuf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(RStrBuf *VAR_8, csh VAR_9, cs_insn *VAR_10) {
 int VAR_11;
 FUNC_4 (VAR_8);
 FUNC_2 (VAR_8, "{");
 cs_arm *VAR_12 = &VAR_10->detail->arm;
 FUNC_2 (VAR_8, "\"operands\":[");
 for (VAR_11 = 0; VAR_11 < VAR_12->op_count; VAR_11++) {
  cs_arm_op *VAR_13 = &VAR_12->operands[VAR_11];
  if (VAR_11 > 0) {
   FUNC_2 (VAR_8, ",");
  }
  FUNC_2 (VAR_8, "{");
  switch (VAR_13->type) {
  case 142:
   FUNC_2 (VAR_8, "\"type\":\"reg\"");
   FUNC_3 (VAR_8, ",\"value\":\"%s\"", FUNC_1 (VAR_9, VAR_13->reg));
   break;
  case 145:
   FUNC_2 (VAR_8, "\"type\":\"imm\"");
   FUNC_3 (VAR_8, ",\"value\":%d", (st32)VAR_13->imm);
   break;
  case 144:
   FUNC_2 (VAR_8, "\"type\":\"mem\"");
   if (VAR_13->mem.base != VAR_5) {
    FUNC_3 (VAR_8, ",\"base\":\"%s\"", FUNC_1 (VAR_9, VAR_13->mem.base));
   }
   if (VAR_13->mem.index != VAR_5) {
    FUNC_3 (VAR_8, ",\"index\":\"%s\"", FUNC_1 (VAR_9, VAR_13->mem.index));
   }
   FUNC_3 (VAR_8, ",\"scale\":%d", VAR_13->mem.scale);
   FUNC_3 (VAR_8, ",\"disp\":%d", VAR_13->mem.disp);
   break;
  case 146:
   FUNC_2 (VAR_8, "\"type\":\"fp\"");
   FUNC_3 (VAR_8, ",\"value\":%lf", VAR_13->fp);
   break;
  case 147:
   FUNC_2 (VAR_8, "\"type\":\"cimm\"");
   FUNC_3 (VAR_8, ",\"value\":%d", (st32)VAR_13->imm);
   break;
  case 143:
   FUNC_2 (VAR_8, "\"type\":\"pimm\"");
   FUNC_3 (VAR_8, ",\"value\":%d", (st32)VAR_13->imm);
   break;
  case 141:
   FUNC_2 (VAR_8, "\"type\":\"setend\"");
   switch (VAR_13->setend) {
   case 139:
    FUNC_2 (VAR_8, ",\"value\":\"be\"");
    break;
   case 138:
    FUNC_2 (VAR_8, ",\"value\":\"le\"");
    break;
   default:
    FUNC_2 (VAR_8, ",\"value\":\"invalid\"");
    break;
   }
   break;
  case 140:
   FUNC_2 (VAR_8, "\"type\":\"sysreg\"");
   FUNC_3 (VAR_8, ",\"value\":\"%s\"", FUNC_1 (VAR_9, VAR_13->reg));
   break;
  default:
   FUNC_2 (VAR_8, ",\"type\":\"invalid\"");
   break;
  }
  if (VAR_13->shift.type != VAR_6) {
   FUNC_2 (VAR_8, ",\"shift\":{");
   switch (VAR_13->shift.type) {
   case 137:
   case 135:
   case 133:
   case 131:
   case 129:
    FUNC_3 (VAR_8, "\"type\":\"%s\"", FUNC_5 (VAR_13->shift.type));
    FUNC_3 (VAR_8, ",\"value\":\"%u\"", VAR_13->shift.value);
    break;
   case 136:
   case 134:
   case 132:
   case 130:
   case 128:
    FUNC_3 (VAR_8, "\"type\":\"%s\"", FUNC_5 (VAR_13->shift.type));
    FUNC_3 (VAR_8, ",\"value\":\"%d\"", FUNC_1 (VAR_9, VAR_13->shift.value));
    break;
   default:
    break;
   }
   FUNC_2 (VAR_8, "}");
  }
  if (VAR_13->vector_index != -1) {
   FUNC_3 (VAR_8, ",\"vector_index\":\"%d\"", VAR_13->vector_index);
  }
  if (VAR_13->subtracted) {
   FUNC_2 (VAR_8, ",\"subtracted\":true");
  }
  FUNC_2 (VAR_8, "}");
 }
 FUNC_2 (VAR_8, "]");
 if (VAR_12->usermode) {
  FUNC_2 (VAR_8, ",\"usermode\":true");
 }
 if (VAR_12->update_flags) {
  FUNC_2 (VAR_8, ",\"update_flags\":true");
 }
 if (VAR_12->writeback) {
  FUNC_2 (VAR_8, ",\"writeback\":true");
 }
 if (VAR_12->vector_size) {
  FUNC_3 (VAR_8, ",\"vector_size\":%d", VAR_12->vector_size);
 }
 if (VAR_12->vector_data != VAR_7) {
  FUNC_3 (VAR_8, ",\"vector_data\":\"%s\"", FUNC_6 (VAR_12->vector_data));
 }
 if (VAR_12->cps_mode != VAR_3) {
  FUNC_3 (VAR_8, ",\"cps_mode\":%d", VAR_12->cps_mode);
 }
 if (VAR_12->cps_flag != VAR_2) {
  FUNC_3 (VAR_8, ",\"cps_flag\":%d", VAR_12->cps_flag);
 }
 if (VAR_12->cc != VAR_1 && VAR_12->cc != VAR_0) {
  FUNC_3 (VAR_8, ",\"cc\":\"%s\"", FUNC_0 (VAR_12->cc));
 }
 if (VAR_12->mem_barrier != VAR_4) {
  FUNC_3 (VAR_8, ",\"mem_barrier\":%d", VAR_12->mem_barrier - 1);
 }
 FUNC_2 (VAR_8, "}");
}
