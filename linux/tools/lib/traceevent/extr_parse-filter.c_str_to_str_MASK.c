
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; int val; TYPE_1__* field; } ;
struct tep_filter_arg {TYPE_2__ str; } ;
struct tep_event_filter {int dummy; } ;
struct TYPE_3__ {int name; } ;






 int FUNC_0 (char**,char*,int ,char*,int ) ;

__attribute__((used)) static char *FUNC_1(struct tep_event_filter *VAR_0, struct tep_filter_arg *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);

 switch (VAR_1->str.type) {
 case 131:
  VAR_3 = "==";

 case 130:
  if (!VAR_3)
   VAR_3 = "!=";

 case 128:
  if (!VAR_3)
   VAR_3 = "=~";

 case 129:
  if (!VAR_3)
   VAR_3 = "!~";

  FUNC_0(&VAR_2, "%d %s \"%d\"",
    VAR_1->str.field->name, VAR_3, VAR_1->str.val);
  break;

 default:

  break;
 }
 return VAR_2;
}
