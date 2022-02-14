
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tep_record {int dummy; } ;
struct TYPE_2__ {int value; } ;
struct tep_filter_arg {int type; TYPE_1__ boolean; } ;
struct tep_event {int dummy; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int VAR_0 ;







 int FUNC_0 (struct tep_event*,struct tep_filter_arg*,struct tep_record*,int*) ;
 int FUNC_1 (struct tep_event*,struct tep_filter_arg*,struct tep_record*,int*) ;
 int FUNC_2 (struct tep_event*,struct tep_filter_arg*,struct tep_record*,int*) ;
 int FUNC_3 (struct tep_event*,struct tep_filter_arg*,struct tep_record*,int*) ;

__attribute__((used)) static int FUNC_4(struct tep_event *VAR_1, struct tep_filter_arg *VAR_2,
         struct tep_record *VAR_3, enum tep_errno *VAR_4)
{
 if (*VAR_4) {



  return 0;
 }

 switch (VAR_2->type) {
 case 134:

  return VAR_2->boolean.value;

 case 130:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);

 case 131:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 case 129:
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);

 case 133:
 case 128:
 case 132:




  return !!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 default:
  if (!*VAR_4)
   *VAR_4 = VAR_0;
  return 0;
 }
}
