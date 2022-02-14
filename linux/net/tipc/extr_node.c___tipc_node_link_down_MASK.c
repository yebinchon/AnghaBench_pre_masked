
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {int* active_links; struct tipc_link_entry* links; scalar_t__ sync_point; int net; int addr; int link_id; int action_flags; int working_links; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_link_entry {struct tipc_media_addr maddr; struct tipc_link* link; int inputq; } ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct tipc_node*) ;
 int FUNC_1 (struct tipc_node*,int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct tipc_link*,struct sk_buff_head*) ;
 int FUNC_6 (struct tipc_link*,int ) ;
 int FUNC_7 (struct tipc_link*) ;
 scalar_t__ FUNC_8 (struct tipc_link*) ;
 int FUNC_9 (struct tipc_link*) ;
 int FUNC_10 (struct tipc_link*) ;
 scalar_t__ FUNC_11 (struct tipc_link*) ;
 int FUNC_12 (struct tipc_link*) ;
 int FUNC_13 (struct tipc_link*) ;
 scalar_t__ FUNC_14 (struct tipc_link*) ;
 int FUNC_15 (struct tipc_link*) ;
 int FUNC_16 (struct tipc_link*,struct tipc_link*,int ,struct sk_buff_head*) ;
 int FUNC_17 (struct tipc_node*,int ) ;
 int FUNC_18 (struct tipc_link*,int ,char*) ;

__attribute__((used)) static void FUNC_19(struct tipc_node *VAR_13, int *VAR_14,
      struct sk_buff_head *VAR_15,
      struct tipc_media_addr **VAR_16)
{
 struct tipc_link_entry *VAR_17 = &VAR_13->links[*VAR_14];
 int *VAR_18 = &VAR_13->active_links[0];
 int *VAR_19 = &VAR_13->active_links[1];
 int VAR_20, VAR_21 = 0, VAR_22;
 struct tipc_link *VAR_23, *VAR_24, *VAR_25;

 VAR_23 = VAR_13->links[*VAR_14].link;
 if (!VAR_23 || FUNC_8(VAR_23))
  return;

 VAR_13->working_links--;
 VAR_13->action_flags |= VAR_11;
 VAR_13->link_id = FUNC_7(VAR_23);

 FUNC_4(VAR_13->net, *VAR_14, VAR_13->addr);

 FUNC_2("Lost link <%s> on network plane %c\n",
   FUNC_10(VAR_23), FUNC_12(VAR_23));


 *VAR_18 = VAR_1;
 *VAR_19 = VAR_1;
 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++) {
  VAR_24 = VAR_13->links[VAR_20].link;
  if (!VAR_24 || !FUNC_9(VAR_24))
   continue;
  if (VAR_24 == VAR_23)
   continue;
  VAR_22 = FUNC_13(VAR_24);
  if (VAR_22 < VAR_21)
   continue;
  if (VAR_22 > VAR_21) {
   VAR_21 = VAR_22;
   *VAR_18 = VAR_20;
   *VAR_19 = VAR_20;
   continue;
  }
  *VAR_19 = VAR_20;
 }

 if (!FUNC_0(VAR_13)) {
  if (FUNC_11(VAR_23))
   FUNC_17(VAR_13, VAR_8);
  FUNC_17(VAR_13, VAR_9);
  FUNC_18(VAR_23, VAR_10, "link down!");
  FUNC_6(VAR_23, VAR_3);
  FUNC_15(VAR_23);
  FUNC_5(VAR_23, VAR_15);
  *VAR_16 = &VAR_13->links[*VAR_14].maddr;
  FUNC_1(VAR_13, &VAR_17->inputq);
  FUNC_3(VAR_13->net, *VAR_14);
  return;
 }
 FUNC_3(VAR_13->net, *VAR_14);


 *VAR_14 = VAR_13->active_links[0];
 VAR_25 = VAR_13->links[*VAR_14].link;
 FUNC_6(VAR_25, VAR_4);
 FUNC_17(VAR_13, VAR_7);
 VAR_13->sync_point = FUNC_14(VAR_25) + (VAR_12 / 2 - 1);
 FUNC_16(VAR_23, VAR_25, VAR_0, VAR_15);
 FUNC_18(VAR_23, VAR_10, "link down -> failover!");
 FUNC_15(VAR_23);
 FUNC_6(VAR_23, VAR_3);
 FUNC_6(VAR_23, VAR_2);
 FUNC_17(VAR_13, VAR_6);
 *VAR_16 = &VAR_13->links[*VAR_14].maddr;
}
