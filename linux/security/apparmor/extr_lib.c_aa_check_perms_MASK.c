
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct common_audit_data {int dummy; } ;
struct aa_profile {int label; } ;
struct aa_perms {int allow; int deny; int audit; int kill; int complain; int hide; int quiet; } ;
struct TYPE_2__ {int request; int denied; int error; int * label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct common_audit_data*,void (*) (struct audit_buffer*,void*)) ;
 TYPE_1__* FUNC_1 (struct common_audit_data*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct aa_profile *VAR_6, struct aa_perms *VAR_7,
     u32 VAR_8, struct common_audit_data *VAR_9,
     void (*VAR_10)(struct audit_buffer *, void *))
{
 int VAR_11, VAR_12;
 u32 VAR_13 = VAR_8 & (~VAR_7->allow | VAR_7->deny);

 if (FUNC_2(!VAR_13)) {

  VAR_8 &= VAR_7->audit;
  if (!VAR_8 || !VAR_9)
   return 0;

  VAR_11 = VAR_1;
  VAR_12 = 0;
 } else {
  VAR_12 = -VAR_4;

  if (VAR_13 & VAR_7->kill)
   VAR_11 = VAR_3;
  else if (VAR_13 == (VAR_13 & VAR_7->complain))
   VAR_11 = VAR_0;
  else
   VAR_11 = VAR_2;

  if (VAR_13 == (VAR_13 & VAR_7->hide))
   VAR_12 = -VAR_5;

  VAR_13 &= ~VAR_7->quiet;
  if (!VAR_9 || !VAR_13)
   return VAR_12;
 }

 if (VAR_9) {
  FUNC_1(VAR_9)->label = &VAR_6->label;
  FUNC_1(VAR_9)->request = VAR_8;
  FUNC_1(VAR_9)->denied = VAR_13;
  FUNC_1(VAR_9)->error = VAR_12;
  FUNC_0(VAR_11, VAR_9, VAR_10);
 }

 if (VAR_11 == VAR_0)
  VAR_12 = 0;

 return VAR_12;
}
