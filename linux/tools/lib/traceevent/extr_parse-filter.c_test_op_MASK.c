
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_record {int dummy; } ;
struct TYPE_2__ {int type; int right; int left; } ;
struct tep_filter_arg {TYPE_1__ op; } ;
struct tep_event {int dummy; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int VAR_0 ;



 int FUNC_0 (struct tep_event*,int ,struct tep_record*,int*) ;

__attribute__((used)) static int FUNC_1(struct tep_event *VAR_1, struct tep_filter_arg *VAR_2,
     struct tep_record *VAR_3, enum tep_errno *VAR_4)
{
 switch (VAR_2->op.type) {
 case 130:
  return FUNC_0(VAR_1, VAR_2->op.left, VAR_3, VAR_4) &&
   FUNC_0(VAR_1, VAR_2->op.right, VAR_3, VAR_4);

 case 128:
  return FUNC_0(VAR_1, VAR_2->op.left, VAR_3, VAR_4) ||
   FUNC_0(VAR_1, VAR_2->op.right, VAR_3, VAR_4);

 case 129:
  return !FUNC_0(VAR_1, VAR_2->op.right, VAR_3, VAR_4);

 default:
  if (!*VAR_4)
   *VAR_4 = VAR_0;
  return 0;
 }
}
