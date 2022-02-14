
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int right; int left; } ;
struct tep_filter_arg {TYPE_1__ num; } ;
struct tep_event_filter {int dummy; } ;
 char* FUNC_0 (struct tep_event_filter*,int ) ;
 int FUNC_1 (char**,char*,char*,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(struct tep_event_filter *VAR_0, struct tep_filter_arg *VAR_1)
{
 char *VAR_2;
 char *VAR_3;
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);

 VAR_2 = FUNC_0(VAR_0, VAR_1->num.left);
 VAR_3 = FUNC_0(VAR_0, VAR_1->num.right);
 if (!VAR_2 || !VAR_3)
  goto out;

 switch (VAR_1->num.type) {
 case 133:
  VAR_5 = "==";

 case 128:
  if (!VAR_5)
   VAR_5 = "!=";

 case 131:
  if (!VAR_5)
   VAR_5 = ">";

 case 129:
  if (!VAR_5)
   VAR_5 = "<";

 case 132:
  if (!VAR_5)
   VAR_5 = ">=";

 case 130:
  if (!VAR_5)
   VAR_5 = "<=";

  FUNC_1(&VAR_4, "%s %s %s", VAR_2, VAR_5, VAR_3);
  break;

 default:

  break;
 }

out:
 FUNC_2(VAR_2);
 FUNC_2(VAR_3);
 return VAR_4;
}
