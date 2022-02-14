
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ type; int fn_flags; scalar_t__ required_num_args; size_t num_args; TYPE_3__* arg_info; TYPE_4__* scope; } ;
struct TYPE_14__ {TYPE_1__ common; } ;
typedef TYPE_2__ zend_function ;
struct TYPE_15__ {int type; } ;
typedef TYPE_3__ zend_arg_info ;
typedef size_t uint32_t ;
typedef scalar_t__ inheritance_status ;
struct TYPE_16__ {int ce_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_2__ const*,TYPE_3__*,TYPE_2__ const*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,TYPE_4__*,int ) ;

__attribute__((used)) static inheritance_status FUNC_5(
  const zend_function *VAR_11, const zend_function *VAR_12)
{
 uint32_t VAR_13, VAR_14;
 inheritance_status VAR_15, VAR_16;





 if (!VAR_12->common.arg_info && VAR_12->common.type != VAR_10) {
  return VAR_1;
 }




 FUNC_2(!((VAR_11->common.fn_flags & VAR_4)
  && ((VAR_12->common.scope->ce_flags & VAR_6) == 0
   && (VAR_12->common.fn_flags & VAR_3) == 0)));


 FUNC_2(!(VAR_12->common.fn_flags & VAR_7));


 if (VAR_12->common.required_num_args < VAR_11->common.required_num_args
  || VAR_12->common.num_args > VAR_11->common.num_args) {
  return VAR_0;
 }


 if ((VAR_12->common.fn_flags & VAR_8)
  && !(VAR_11->common.fn_flags & VAR_8)) {
  return VAR_0;
 }

 if ((VAR_12->common.fn_flags & VAR_9)
  && !(VAR_11->common.fn_flags & VAR_9)) {
  return VAR_0;
 }





 VAR_14 = VAR_12->common.num_args;
 if (VAR_12->common.fn_flags & VAR_9) {
  VAR_14++;
        if (VAR_11->common.num_args >= VAR_12->common.num_args) {
   VAR_14 = VAR_11->common.num_args;
   if (VAR_11->common.fn_flags & VAR_9) {
    VAR_14++;
   }
  }
 }

 VAR_15 = VAR_1;
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  zend_arg_info *VAR_17 = &VAR_11->common.arg_info[VAR_13];

  zend_arg_info *VAR_18;
  if (VAR_13 < VAR_12->common.num_args) {
   VAR_18 = &VAR_12->common.arg_info[VAR_13];
  } else {
   VAR_18 = &VAR_12->common.arg_info[VAR_12->common.num_args];
  }

  VAR_16 = FUNC_3(VAR_11, VAR_17, VAR_12, VAR_18);

  if (FUNC_0(VAR_16 != VAR_1)) {
   if (FUNC_0(VAR_16 == VAR_0)) {
    return VAR_0;
   }
   FUNC_2(VAR_16 == VAR_2);
   VAR_15 = VAR_2;
  }


  if (FUNC_1(VAR_17) != FUNC_1(VAR_18)) {
   return VAR_0;
  }
 }



 if (VAR_12->common.fn_flags & VAR_5) {

  if (!(VAR_11->common.fn_flags & VAR_5)) {
   return VAR_0;
  }

  VAR_16 = FUNC_4(
   VAR_11->common.scope, VAR_11->common.arg_info[-1].type,
   VAR_12->common.scope, VAR_12->common.arg_info[-1].type);

  if (FUNC_0(VAR_16 != VAR_1)) {
   if (FUNC_0(VAR_16 == VAR_0)) {
    return VAR_0;
   }
   FUNC_2(VAR_16 == VAR_2);
   VAR_15 = VAR_2;
  }
 }

 return VAR_15;
}
