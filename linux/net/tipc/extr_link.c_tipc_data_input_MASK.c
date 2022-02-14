
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_msg {int dummy; } ;
struct tipc_link {struct sk_buff_head* namedq; TYPE_1__* bc_rcvlink; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int state; struct sk_buff_head* inputq; } ;





 int VAR_0 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct tipc_link *VAR_1, struct sk_buff *VAR_2,
       struct sk_buff_head *VAR_3)
{
 struct sk_buff_head *VAR_4 = VAR_1->bc_rcvlink->inputq;
 struct tipc_msg *VAR_5 = FUNC_0(VAR_2);

 switch (FUNC_4(VAR_5)) {
 case 130:
 case 129:
 case 131:
 case 132:
  if (FUNC_7(FUNC_2(VAR_5) || FUNC_3(VAR_5))) {
   FUNC_6(VAR_4, VAR_2);
   return 1;
  }

 case 137:
  FUNC_6(VAR_3, VAR_2);
  return 1;
 case 136:
  FUNC_6(VAR_4, VAR_2);
  return 1;
 case 133:
  VAR_1->bc_rcvlink->state = VAR_0;
  FUNC_6(VAR_1->namedq, VAR_2);
  return 1;
 case 135:
 case 128:
 case 134:
 case 138:
  return 0;
 default:
  FUNC_5("Dropping received illegal msg type\n");
  FUNC_1(VAR_2);
  return 1;
 };
}
