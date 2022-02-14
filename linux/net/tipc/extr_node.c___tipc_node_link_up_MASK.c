
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_node {int* active_links; int net; int action_flags; int addr; TYPE_1__* links; int link_id; int working_links; } ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct TYPE_2__ {scalar_t__ mtu; struct tipc_link* link; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tipc_link* FUNC_0 (struct tipc_node*,int ) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int ,struct tipc_link*,struct sk_buff_head*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct tipc_link*,struct sk_buff_head*) ;
 int FUNC_6 (struct tipc_link*,int ) ;
 int FUNC_7 (struct tipc_link*) ;
 scalar_t__ FUNC_8 (struct tipc_link*) ;
 scalar_t__ FUNC_9 (struct tipc_link*) ;
 int FUNC_10 (struct tipc_link*) ;
 int FUNC_11 (struct tipc_link*) ;
 scalar_t__ FUNC_12 (struct tipc_link*) ;
 int FUNC_13 (struct tipc_link*,int) ;
 int FUNC_14 (struct tipc_link*,struct tipc_link*,int ,struct sk_buff_head*) ;
 int FUNC_15 (struct tipc_node*,int ) ;
 int FUNC_16 (struct tipc_node*,int,char*) ;

__attribute__((used)) static void FUNC_17(struct tipc_node *VAR_6, int VAR_7,
    struct sk_buff_head *VAR_8)
{
 int *VAR_9 = &VAR_6->active_links[0];
 int *VAR_10 = &VAR_6->active_links[1];
 struct tipc_link *VAR_11 = FUNC_0(VAR_6, 0);
 struct tipc_link *VAR_12 = VAR_6->links[VAR_7].link;

 if (!VAR_12 || FUNC_8(VAR_12))
  return;

 FUNC_6(VAR_12, VAR_1);
 if (!FUNC_8(VAR_12))
  return;

 VAR_6->working_links++;
 VAR_6->action_flags |= VAR_4;
 VAR_6->link_id = FUNC_7(VAR_12);


 VAR_6->links[VAR_7].mtu = FUNC_9(VAR_12) - VAR_0;

 FUNC_4(VAR_6->net, VAR_7, VAR_6->addr);
 FUNC_3(VAR_6->net, VAR_7);

 FUNC_1("Established link <%s> on network plane %c\n",
   FUNC_10(VAR_12), FUNC_11(VAR_12));
 FUNC_16(VAR_6, 1, " ");


 FUNC_5(VAR_12, VAR_8);


 if (!VAR_11) {
  *VAR_9 = VAR_7;
  *VAR_10 = VAR_7;
  FUNC_15(VAR_6, VAR_2);
  VAR_6->action_flags |= VAR_5;
  FUNC_13(VAR_12, 1);
  FUNC_2(VAR_6->net, VAR_12, VAR_8);
  return;
 }


 if (FUNC_12(VAR_12) > FUNC_12(VAR_11)) {
  FUNC_1("Old link <%s> becomes standby\n", FUNC_10(VAR_11));
  *VAR_9 = VAR_7;
  *VAR_10 = VAR_7;
  FUNC_13(VAR_12, 1);
  FUNC_13(VAR_11, 0);
 } else if (FUNC_12(VAR_12) == FUNC_12(VAR_11)) {
  FUNC_13(VAR_12, 1);
  *VAR_10 = VAR_7;
 } else {
  FUNC_1("New link <%s> is standby\n", FUNC_10(VAR_12));
 }


 FUNC_14(VAR_11, VAR_12, VAR_3, VAR_8);
}
