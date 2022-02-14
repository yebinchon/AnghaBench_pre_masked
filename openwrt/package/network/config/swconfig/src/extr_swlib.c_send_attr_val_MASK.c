
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s; int i; } ;
struct switch_val {TYPE_1__ value; struct switch_attr* attr; } ;
struct switch_attr {int type; } ;
struct nl_msg {int dummy; } ;


 int FUNC_0 (struct nl_msg*,int ,int ) ;
 int FUNC_1 (struct nl_msg*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ FUNC_2 (struct nl_msg*,void*) ;
 int FUNC_3 (struct nl_msg*,struct switch_val*) ;
 int FUNC_4 (struct nl_msg*,struct switch_val*) ;

__attribute__((used)) static int
FUNC_5(struct nl_msg *VAR_2, void *VAR_3)
{
 struct switch_val *VAR_4 = VAR_3;
 struct switch_attr *VAR_5 = VAR_4->attr;

 if (FUNC_2(VAR_2, VAR_3))
  goto nla_put_failure;

 switch(VAR_5->type) {
 case 130:
  break;
 case 132:
  FUNC_1(VAR_2, VAR_0, VAR_4->value.i);
  break;
 case 128:
  if (!VAR_4->value.s)
   goto nla_put_failure;
  FUNC_0(VAR_2, VAR_1, VAR_4->value.s);
  break;
 case 129:
  if (FUNC_4(VAR_2, VAR_4) < 0)
   goto nla_put_failure;
  break;
 case 131:
  if (FUNC_3(VAR_2, VAR_4))
   goto nla_put_failure;
  break;
 default:
  goto nla_put_failure;
 }
 return 0;

nla_put_failure:
 return -1;
}
