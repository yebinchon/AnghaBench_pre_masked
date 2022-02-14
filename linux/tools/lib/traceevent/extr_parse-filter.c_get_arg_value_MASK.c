
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tep_record {int dummy; } ;
struct TYPE_4__ {unsigned long long val; int type; } ;
struct TYPE_3__ {int field; } ;
struct tep_filter_arg {int type; TYPE_2__ value; TYPE_1__ field; } ;
struct tep_event {int dummy; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 unsigned long long FUNC_0 (struct tep_event*,struct tep_filter_arg*,struct tep_record*,int*) ;
 unsigned long long FUNC_1 (struct tep_event*,int ,struct tep_record*) ;

__attribute__((used)) static unsigned long long
FUNC_2(struct tep_event *VAR_3, struct tep_filter_arg *VAR_4,
       struct tep_record *VAR_5, enum tep_errno *VAR_6)
{
 switch (VAR_4->type) {
 case 129:
  return FUNC_1(VAR_3, VAR_4->field.field, VAR_5);

 case 128:
  if (VAR_4->value.type != VAR_2) {
   if (!*VAR_6)
    *VAR_6 = VAR_1;
  }
  return VAR_4->value.val;

 case 130:
  return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

 default:
  if (!*VAR_6)
   *VAR_6 = VAR_0;
 }
 return 0;
}
