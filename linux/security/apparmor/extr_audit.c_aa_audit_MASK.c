
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tsk; } ;
struct common_audit_data {scalar_t__ type; TYPE_1__ u; } ;
struct aa_profile {int label; } ;
struct TYPE_4__ {int error; int type; int * label; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct aa_profile*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct aa_profile*) ;
 scalar_t__ FUNC_3 (struct aa_profile*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int,struct common_audit_data*,void (*) (struct audit_buffer*,void*)) ;
 TYPE_2__* FUNC_5 (struct common_audit_data*) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int *,scalar_t__) ;

int FUNC_9(int VAR_10, struct aa_profile *VAR_11, struct common_audit_data *VAR_12,
      void (*VAR_13) (struct audit_buffer *, void *))
{
 FUNC_0(!VAR_11);

 if (VAR_10 == VAR_3) {
  if (FUNC_7(!FUNC_5(VAR_12)->error)) {
   if (FUNC_1(VAR_11) != VAR_0)
    return 0;
   VAR_10 = VAR_2;
  } else if (FUNC_2(VAR_11))
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_4;
 }
 if (FUNC_1(VAR_11) == VAR_6 ||
     (VAR_10 == VAR_4 &&
      FUNC_1(VAR_11) == VAR_6))
  return FUNC_5(VAR_12)->error;

 if (FUNC_3(VAR_11) && VAR_10 == VAR_4)
  VAR_10 = VAR_5;

 FUNC_5(VAR_12)->label = &VAR_11->label;

 FUNC_4(VAR_10, VAR_12, VAR_13);

 if (FUNC_5(VAR_12)->type == VAR_5)
  (void)FUNC_8(VAR_8, ((void*)0),
   VAR_12->type == VAR_7 && VAR_12->u.tsk ?
        VAR_12->u.tsk : VAR_9);

 if (FUNC_5(VAR_12)->type == VAR_1)
  return FUNC_6(FUNC_5(VAR_12)->error);

 return FUNC_5(VAR_12)->error;
}
