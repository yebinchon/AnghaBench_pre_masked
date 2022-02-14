
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_ssa ;
struct TYPE_5__ {int num_args; TYPE_1__* arg_info; int caller_op_array; } ;
typedef TYPE_2__ zend_call_info ;
typedef int uint32_t ;
struct TYPE_4__ {int opline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int const*,int ) ;

__attribute__((used)) static uint32_t FUNC_1(const zend_call_info *VAR_10, const zend_ssa *VAR_11)
{
 if (VAR_10->num_args == 2 || VAR_10->num_args == 3) {

  uint32_t VAR_12 = FUNC_0(VAR_10->caller_op_array, VAR_11, VAR_10->arg_info[0].opline);
  uint32_t VAR_13 = FUNC_0(VAR_10->caller_op_array, VAR_11, VAR_10->arg_info[1].opline);
  uint32_t VAR_14 = 0;
  uint32_t VAR_15 = VAR_8 | VAR_7 | VAR_1 | VAR_2;

  if (VAR_10->num_args == 3) {
   VAR_14 = FUNC_0(VAR_10->caller_op_array, VAR_11, VAR_10->arg_info[2].opline);
  }
  if ((VAR_12 & VAR_9) && (VAR_13 & VAR_9)) {
   VAR_15 |= VAR_4 | VAR_3 | VAR_5;
  }
  if ((VAR_12 & (VAR_6|VAR_9))
    || (VAR_13 & (VAR_6|VAR_9))
    || (VAR_14 & (VAR_6|VAR_9))) {
   VAR_15 |= VAR_3;
  }
  if ((VAR_12 & (VAR_0-(VAR_9|VAR_6))) && (VAR_13 & (VAR_0-(VAR_9|VAR_6)))) {
   if ((VAR_14 & VAR_0) != VAR_6) {
    VAR_15 |= VAR_4;
   }
  }
  return VAR_15;
 } else {

  return VAR_8 | VAR_7 | VAR_1 | VAR_2 | VAR_4 | VAR_3 | VAR_5;
 }
}
