
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct tipc_msg {int dummy; } ;
struct TYPE_2__ {int recv_nacks; } ;
struct tipc_link {int nack_state; int rcv_nxt; TYPE_1__ stats; int bc_sndlink; int net; int bc_peer_is_up; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_link*,scalar_t__,struct sk_buff_head*) ;
 int FUNC_9 (int ,struct tipc_link*,scalar_t__,scalar_t__,struct sk_buff_head*) ;
 int FUNC_10 (struct tipc_link*) ;
 scalar_t__ FUNC_11 (int ) ;

int FUNC_12(struct tipc_link *VAR_2, struct sk_buff *VAR_3,
     struct sk_buff_head *VAR_4)
{
 struct tipc_msg *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6 = FUNC_6(VAR_5);
 int VAR_7 = FUNC_7(VAR_5);
 u16 VAR_8 = FUNC_4(VAR_5);
 u16 VAR_9 = VAR_8 + 1;
 u16 VAR_10 = FUNC_5(VAR_5);
 u16 VAR_11 = VAR_10 + 1;
 int VAR_12 = 0;

 FUNC_1(VAR_3);

 if (!FUNC_10(VAR_2) || !VAR_2->bc_peer_is_up)
  return 0;

 if (VAR_7 != VAR_1)
  return 0;

 if (VAR_6 == FUNC_11(VAR_2->net)) {
  FUNC_8(VAR_2, VAR_8, VAR_4);
  VAR_12 = FUNC_9(VAR_2->bc_sndlink, VAR_2, VAR_9, VAR_10, VAR_4);
  VAR_2->stats.recv_nacks++;
  return VAR_12;
 }


 if (FUNC_3(VAR_11, VAR_2->rcv_nxt) && !FUNC_2(VAR_2->rcv_nxt, VAR_9))
  VAR_2->nack_state = VAR_0;

 return 0;
}
