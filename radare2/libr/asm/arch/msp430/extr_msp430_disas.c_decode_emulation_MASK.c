
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int ut16 ;
struct msp430_cmd {char* instr; char* operands; int opcode; int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 char** VAR_16 ;
 int FUNC_6 (struct msp430_cmd*) ;
 int FUNC_7 (struct msp430_cmd*) ;
 int FUNC_8 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_9(ut16 VAR_17, struct msp430_cmd *VAR_18)
{
 int VAR_19 = -1;
 ut8 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_20 = FUNC_1(VAR_17);
 VAR_21 = FUNC_0(VAR_17);
 VAR_22 = FUNC_4(VAR_17);
 VAR_23 = FUNC_3(VAR_17);
 VAR_24 = FUNC_2(VAR_17);
 VAR_25 = FUNC_5(VAR_17);

 if (VAR_25 == VAR_1 && VAR_20 == 0 && VAR_22 == VAR_9) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "adc.b" : "adc");
  FUNC_8(VAR_18->operands, sizeof (VAR_18->operands), "%s", VAR_16[VAR_23]);
 } else if (VAR_25 == VAR_6 && VAR_20 == 0 && VAR_22 == VAR_9) {
  if (VAR_21 == 0 && VAR_23 == VAR_9) {
   FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "nop");
   VAR_18->operands[0] = '\0';
  } else {
   FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "clr.b" : "clr");
   FUNC_6(VAR_18);
  }
 } else if (VAR_25 == VAR_6 && VAR_20 == 3 && VAR_22 == VAR_11) {
  if (VAR_23 == VAR_8) {
   FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "ret");
          VAR_18->type = VAR_7;
   VAR_18->opcode = VAR_10;
   VAR_18->operands[0] = '\0';
  } else {
   FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "pop.b" : "pop");
   FUNC_6(VAR_18);
  }
 } else if (VAR_25 == VAR_6 && VAR_21 == 0 && VAR_23 == VAR_8) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", "br");
  FUNC_7(VAR_18);
 } else if (VAR_25 == VAR_2 && VAR_20 == 2 && VAR_22 == VAR_12 && VAR_23 == VAR_12 && VAR_21 == 0) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", "clrn");
  VAR_18->operands[0] = '\0';
 } else if (VAR_25 == VAR_2 && VAR_20 == 2 && VAR_22 == VAR_9 && VAR_23 == VAR_12 && VAR_21 == 0) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", "clrz");
  VAR_18->operands[0] = '\0';
 } else if (VAR_25 == VAR_2 && VAR_20 == 3 && VAR_22 == VAR_12 && VAR_23 == VAR_12 && VAR_21 == 0) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", "dint");
  VAR_18->operands[0] = '\0';
 } else if (VAR_25 == VAR_3 && VAR_20 == 3 && VAR_22 == VAR_12 && VAR_23 == VAR_12 && VAR_21 == 0) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", "eint");
  VAR_18->operands[0] = '\0';
 } else if (VAR_25 == VAR_5 && VAR_20 == 0 && VAR_22 == VAR_9) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "dadc.b" : "dadc");
  FUNC_6(VAR_18);
 } else if (VAR_25 == VAR_13 && VAR_20 == 1 && VAR_22 == VAR_9) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "dec.b" : "dec");
  FUNC_6(VAR_18);
 } else if (VAR_25 == VAR_13 && VAR_20 == 2 && VAR_22 == VAR_9) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "decd.b" : "decd");
  FUNC_6(VAR_18);
 } else if (VAR_25 == VAR_0 && VAR_20 == 1 && VAR_22 == VAR_9) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "inc.b" : "inc");
  FUNC_6(VAR_18);
 } else if (VAR_25 == VAR_0 && VAR_20 == 2 && VAR_22 == VAR_9) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "incd.b" : "incd");
  FUNC_6(VAR_18);
 } else if (VAR_25 == VAR_15 && VAR_20 == 3 && VAR_22 == VAR_9) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "inv.b" : "inv");
  FUNC_6(VAR_18);
 } else if (VAR_25 == VAR_0 && VAR_22 == VAR_23) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "rla.b" : "rla");
  FUNC_7(VAR_18);
 } else if (VAR_25 == VAR_1 && VAR_22 == VAR_23) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "rlc.b" : "rlc");
  FUNC_7(VAR_18);
 } else if (VAR_25 == VAR_14 && VAR_20 == 0 && VAR_22 == VAR_9) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "sbc.b" : "sbc");
  FUNC_6(VAR_18);
 } else if (VAR_25 == VAR_3 && VAR_20 == 1 && VAR_22 == VAR_9 && VAR_23 == VAR_12 && VAR_21 == 0) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "setc");
  VAR_18->operands[0] = '\0';
 } else if (VAR_25 == VAR_3 && VAR_20 == 2 && VAR_22 == VAR_12 && VAR_23 == VAR_12 && VAR_21 == 0) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "setn");
  VAR_18->operands[0] = '\0';
 } else if (VAR_25 == VAR_3 && VAR_20 == 2 && VAR_22 == VAR_9 && VAR_23 == VAR_12 && VAR_21 == 0) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "setz");
  VAR_18->operands[0] = '\0';
 } else if (VAR_25 == VAR_4 && VAR_20 == 0 && VAR_22 == VAR_9) {
  FUNC_8(VAR_18->instr, sizeof (VAR_18->instr), "%s", VAR_24 ? "tst.b" : "tst");
  FUNC_6(VAR_18);
 }

 return VAR_19;
}
