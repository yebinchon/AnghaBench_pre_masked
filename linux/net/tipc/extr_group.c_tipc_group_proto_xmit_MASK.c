
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_msg {int dummy; } ;
struct tipc_member {scalar_t__ state; int advertised; int window; int bc_rcv_nxt; int port; int node; } ;
struct tipc_group {int bc_snd_nxt; int portid; int net; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tipc_msg*,int) ;
 int FUNC_3 (struct tipc_msg*,int) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 struct sk_buff* FUNC_7 (int ,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct tipc_group *VAR_12, struct tipc_member *VAR_13,
      int VAR_14, struct sk_buff_head *VAR_15)
{
 struct tipc_msg *VAR_16;
 struct sk_buff *VAR_17;
 int VAR_18 = 0;

 VAR_17 = FUNC_7(VAR_2, VAR_14, VAR_8, 0,
         VAR_13->node, FUNC_8(VAR_12->net),
         VAR_13->port, VAR_12->portid, 0);
 if (!VAR_17)
  return;

 if (VAR_13->state == VAR_9)
  VAR_18 = VAR_0 - VAR_13->advertised;
 else if (VAR_13->state == VAR_10 || VAR_13->state == VAR_11)
  VAR_18 = VAR_1 - VAR_13->advertised;

 VAR_16 = FUNC_1(VAR_17);

 if (VAR_14 == VAR_5) {
  FUNC_5(VAR_16, VAR_12->bc_snd_nxt);
  FUNC_2(VAR_16, VAR_18);
  VAR_13->advertised += VAR_18;
 } else if (VAR_14 == VAR_6) {
  FUNC_5(VAR_16, VAR_12->bc_snd_nxt);
 } else if (VAR_14 == VAR_4) {
  FUNC_2(VAR_16, VAR_18);
  VAR_13->advertised += VAR_18;
 } else if (VAR_14 == VAR_3) {
  FUNC_4(VAR_16, VAR_13->bc_rcv_nxt);
 } else if (VAR_14 == VAR_7) {
  FUNC_6(VAR_16, VAR_13->window);
 }
 FUNC_3(VAR_16, 1);
 FUNC_0(VAR_15, VAR_17);
}
