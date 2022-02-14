
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_nl_compat_msg {int cmd; } ;
struct tipc_link_config {int value; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4,
    struct tipc_nl_compat_msg *VAR_5,
    struct tipc_link_config *VAR_6)
{
 switch (VAR_5->cmd) {
 case 130:
  return FUNC_0(VAR_4, VAR_1, FUNC_1(VAR_6->value));
 case 129:
  return FUNC_0(VAR_4, VAR_2, FUNC_1(VAR_6->value));
 case 128:
  return FUNC_0(VAR_4, VAR_3, FUNC_1(VAR_6->value));
 }

 return -VAR_0;
}
