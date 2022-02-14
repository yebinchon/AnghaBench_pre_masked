
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {int net; int addr; int link_cnt; struct tipc_link_entry* links; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_link_entry {int inputq; struct tipc_link* link; } ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct tipc_node*,int*,struct sk_buff_head*,struct tipc_media_addr**) ;
 int FUNC_2 (struct tipc_link*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (int ,int,struct sk_buff_head*,struct tipc_media_addr*) ;
 int FUNC_5 (struct tipc_link*,int ) ;
 int FUNC_6 (struct tipc_link*) ;
 int FUNC_7 (struct tipc_link*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct tipc_node*) ;
 int FUNC_10 (struct tipc_node*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct tipc_node*,int,char*) ;

__attribute__((used)) static void FUNC_13(struct tipc_node *VAR_1, int VAR_2, bool VAR_3)
{
 struct tipc_link_entry *VAR_4 = &VAR_1->links[VAR_2];
 struct tipc_media_addr *VAR_5 = ((void*)0);
 struct tipc_link *VAR_6 = VAR_4->link;
 int VAR_7 = VAR_2;
 struct sk_buff_head VAR_8;

 if (!VAR_6)
  return;

 FUNC_0(&VAR_8);

 FUNC_9(VAR_1);
 if (!FUNC_6(VAR_6)) {
  FUNC_1(VAR_1, &VAR_2, &VAR_8, &VAR_5);
 } else {

  FUNC_7(VAR_6);
  FUNC_5(VAR_6, VAR_0);
 }
 if (VAR_3) {
  FUNC_2(VAR_6);
  VAR_4->link = ((void*)0);
  VAR_1->link_cnt--;
 }
 FUNC_12(VAR_1, 1, "node link down or deleted!");
 FUNC_10(VAR_1);
 if (VAR_3)
  FUNC_8(VAR_1->net, VAR_1->addr, VAR_7);
 if (!FUNC_3(&VAR_8))
  FUNC_4(VAR_1->net, VAR_2, &VAR_8, VAR_5);
 FUNC_11(VAR_1->net, &VAR_4->inputq);
}
