
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_node {int link_cnt; int keepalive_intv; int timer; int net; struct tipc_link_entry* links; } ;
struct tipc_link_entry {int maddr; int lock; int link; } ;
struct timer_list {int dummy; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff_head*) ;
 struct tipc_node* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 struct tipc_node* VAR_3 ;
 int FUNC_4 (struct tipc_node*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int ,int,struct sk_buff_head*,int *) ;
 int FUNC_8 (int ,struct sk_buff_head*) ;
 int FUNC_9 (struct tipc_node*,int ) ;
 scalar_t__ FUNC_10 (struct tipc_node*) ;
 int FUNC_11 (struct tipc_node*,int,int) ;
 int FUNC_12 (struct tipc_node*) ;
 int FUNC_13 (struct tipc_node*) ;
 int FUNC_14 (struct tipc_node*) ;
 int FUNC_15 (struct tipc_node*,int,char*) ;

__attribute__((used)) static void FUNC_16(struct timer_list *VAR_5)
{
 struct tipc_node *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);
 struct tipc_link_entry *VAR_7;
 struct sk_buff_head VAR_8;
 int VAR_9 = VAR_6->link_cnt;
 int VAR_10;
 int VAR_11 = 0;

 FUNC_15(VAR_6, 0, " ");
 if (!FUNC_4(VAR_6) && FUNC_10(VAR_6)) {

  FUNC_12(VAR_6);
  return;
 }

 FUNC_0(&VAR_8);




 FUNC_13(VAR_6);
 VAR_6->keepalive_intv = 10000;
 FUNC_14(VAR_6);
 for (VAR_10 = 0; VAR_9 && (VAR_10 < VAR_0); VAR_10++) {
  FUNC_13(VAR_6);
  VAR_7 = &VAR_6->links[VAR_10];
  if (VAR_7->link) {
   FUNC_5(&VAR_7->lock);

   FUNC_9(VAR_6, VAR_7->link);
   VAR_11 = FUNC_8(VAR_7->link, &VAR_8);
   FUNC_6(&VAR_7->lock);
   VAR_9--;
  }
  FUNC_14(VAR_6);
  FUNC_7(VAR_6->net, VAR_10, &VAR_8, &VAR_7->maddr);
  if (VAR_11 & VAR_1)
   FUNC_11(VAR_6, VAR_10, 0);
 }
 FUNC_2(&VAR_6->timer, VAR_2 + FUNC_3(VAR_6->keepalive_intv));
}
