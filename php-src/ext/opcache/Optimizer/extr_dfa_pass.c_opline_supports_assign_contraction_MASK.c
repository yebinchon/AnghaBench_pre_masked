
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* var_info; } ;
typedef TYPE_4__ zend_ssa ;
struct TYPE_10__ {scalar_t__ var; } ;
struct TYPE_9__ {scalar_t__ var; } ;
struct TYPE_12__ {scalar_t__ opcode; scalar_t__ op1_type; scalar_t__ op2_type; scalar_t__ extended_value; TYPE_3__ op1; TYPE_2__ op2; } ;
typedef TYPE_5__ zend_op ;
typedef int zend_bool ;
typedef scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static zend_bool FUNC_0(
  zend_ssa *VAR_18, zend_op *VAR_19, int VAR_20, uint32_t VAR_21) {
 if (VAR_19->opcode == VAR_15) {

  return 0;
 }

 if (VAR_19->opcode == VAR_12 || VAR_19->opcode == VAR_13
   || VAR_19->opcode == VAR_10 || VAR_19->opcode == VAR_11) {


  uint32_t VAR_22 = VAR_18->var_info[VAR_20].type;
  uint32_t VAR_23 = VAR_7|VAR_5|VAR_8|VAR_6|VAR_4;
  return !((VAR_22 & VAR_3) & ~VAR_23);
 }

 if (VAR_19->opcode == VAR_17 || VAR_19->opcode == VAR_16) {


  return VAR_19->op1_type != VAR_1 || VAR_19->op1.var != VAR_21;
 }

 if (VAR_19->opcode == VAR_14) {

  return (VAR_19->op1_type != VAR_1 || VAR_19->op1.var != VAR_21)
   && (VAR_19->op2_type != VAR_1 || VAR_19->op2.var != VAR_21);
 }

 if (VAR_19->opcode == VAR_9
   && (VAR_19->extended_value == VAR_0 || VAR_19->extended_value == VAR_2)) {


  return VAR_19->op1_type != VAR_1 || VAR_19->op1.var != VAR_21;
 }

 return 1;
}
