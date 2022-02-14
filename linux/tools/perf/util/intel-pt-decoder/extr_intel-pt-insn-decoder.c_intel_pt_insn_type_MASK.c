
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum intel_pt_insn_op { ____Placeholder_intel_pt_insn_op } intel_pt_insn_op ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(enum intel_pt_insn_op VAR_6)
{
 switch (VAR_6) {
 case 131:
  return 0;
 case 137:
  return VAR_0 | VAR_1;
 case 130:
  return VAR_0 | VAR_4;
 case 134:
  return VAR_0 | VAR_2;
 case 133:
  return VAR_0;
 case 132:
  return VAR_0 | VAR_2;
 case 135:
  return VAR_0 | VAR_4 |
         VAR_3;
 case 136:
  return VAR_0 | VAR_1 |
         VAR_3;
 case 129:
  return VAR_0 | VAR_1 |
         VAR_5;
 case 128:
  return VAR_0 | VAR_4 |
         VAR_5;
 default:
  return 0;
 }
}
