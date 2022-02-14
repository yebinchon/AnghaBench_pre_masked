
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link; } ;
struct tipc_node {TYPE_2__* links; TYPE_1__ bc_entry; int net; } ;
struct tipc_msg {int dummy; } ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct TYPE_4__ {struct tipc_link* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tipc_msg*) ;
 int FUNC_1 (int ,int ,struct tipc_msg*) ;
 int FUNC_2 (struct tipc_link*,struct sk_buff_head*) ;
 int FUNC_3 (struct tipc_node*) ;
 int FUNC_4 (struct tipc_node*) ;
 int FUNC_5 (struct tipc_node*) ;

__attribute__((used)) static void FUNC_6(struct tipc_node *VAR_2, struct tipc_msg *VAR_3,
      int VAR_4, struct sk_buff_head *VAR_5)
{
 struct tipc_link *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2->net, VAR_2->bc_entry.link, VAR_3);

 if (VAR_7 & VAR_0) {
  FUNC_5(VAR_2);
  return;
 }

 if (!(VAR_7 & VAR_1))
  return;


 if (FUNC_0(VAR_3))
  return;


 FUNC_3(VAR_2);
 VAR_6 = VAR_2->links[VAR_4].link;
 if (VAR_6)
  FUNC_2(VAR_6, VAR_5);
 FUNC_4(VAR_2);
}
