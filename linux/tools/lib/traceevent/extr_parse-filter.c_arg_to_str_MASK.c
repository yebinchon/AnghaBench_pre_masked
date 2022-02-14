
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
struct tep_filter_arg {int type; TYPE_1__ boolean; } ;
struct tep_event_filter {int dummy; } ;
 int FUNC_0 (char**,char*) ;
 char* FUNC_1 (struct tep_event_filter*,struct tep_filter_arg*) ;
 char* FUNC_2 (struct tep_event_filter*,struct tep_filter_arg*) ;
 char* FUNC_3 (struct tep_event_filter*,struct tep_filter_arg*) ;
 char* FUNC_4 (struct tep_event_filter*,struct tep_filter_arg*) ;
 char* FUNC_5 (struct tep_event_filter*,struct tep_filter_arg*) ;
 char* FUNC_6 (struct tep_event_filter*,struct tep_filter_arg*) ;

__attribute__((used)) static char *FUNC_7(struct tep_event_filter *VAR_0, struct tep_filter_arg *VAR_1)
{
 char *VAR_2 = ((void*)0);

 switch (VAR_1->type) {
 case 134:
  FUNC_0(&VAR_2, VAR_1->boolean.value ? "TRUE" : "FALSE");
  return VAR_2;

 case 130:
  return FUNC_4(VAR_0, VAR_1);

 case 131:
  return FUNC_3(VAR_0, VAR_1);

 case 129:
  return FUNC_5(VAR_0, VAR_1);

 case 128:
  return FUNC_6(VAR_0, VAR_1);

 case 132:
  return FUNC_2(VAR_0, VAR_1);

 case 133:
  return FUNC_1(VAR_0, VAR_1);

 default:

  return ((void*)0);
 }

}
