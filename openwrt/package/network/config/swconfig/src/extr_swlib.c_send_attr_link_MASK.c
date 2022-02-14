
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct switch_port_link* link; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_port_link {int speed; scalar_t__ aneg; scalar_t__ duplex; } ;
struct nlattr {int dummy; } ;
struct nl_msg {int dummy; } ;


 int FUNC_0 (struct nl_msg*,int ) ;
 int FUNC_1 (struct nl_msg*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct nl_msg*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct nl_msg*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nl_msg *VAR_4, struct switch_val *VAR_5)
{
 struct switch_port_link *VAR_6 = VAR_5->value.link;
 struct nlattr *VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_0);
 if (!VAR_7)
  goto nla_put_failure;

 if (VAR_6->duplex)
  FUNC_0(VAR_4, VAR_2);
 if (VAR_6->aneg)
  FUNC_0(VAR_4, VAR_1);
 FUNC_1(VAR_4, VAR_3, VAR_6->speed);

 FUNC_2(VAR_4, VAR_7);

 return 0;

nla_put_failure:
 return -1;
}
