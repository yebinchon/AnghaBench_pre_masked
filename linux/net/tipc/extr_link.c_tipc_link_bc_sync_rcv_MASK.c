
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tipc_msg {int dummy; } ;
struct TYPE_2__ {int recv_nacks; } ;
struct tipc_link {int bc_peer_is_up; scalar_t__ rcv_nxt; scalar_t__ window; int peer_caps; scalar_t__ nack_state; scalar_t__ snd_nxt; TYPE_1__ stats; struct tipc_link* bc_sndlink; } ;
struct sk_buff_head {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct tipc_link*) ;
 int FUNC_1 (struct tipc_link*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_link*,struct tipc_link*,scalar_t__,scalar_t__,struct sk_buff_head*) ;
 int FUNC_9 (struct tipc_link*,int,scalar_t__,struct sk_buff_head*) ;

int FUNC_10(struct tipc_link *VAR_6, struct tipc_msg *VAR_7,
     struct sk_buff_head *VAR_8)
{
 struct tipc_link *VAR_9 = VAR_6->bc_sndlink;
 u16 VAR_10 = FUNC_5(VAR_7);
 u16 VAR_11 = FUNC_6(VAR_7) + 1;
 u16 VAR_12 = VAR_11 + FUNC_4(VAR_7) - 1;
 int VAR_13 = 0;

 if (!FUNC_1(VAR_6))
  return VAR_13;

 if (!FUNC_7(VAR_7))
  return VAR_13;


 if (FUNC_3(VAR_7))
  VAR_6->bc_peer_is_up = 1;

 if (!VAR_6->bc_peer_is_up)
  return VAR_13;

 VAR_6->stats.recv_nacks++;


 if (FUNC_2(VAR_10, VAR_6->rcv_nxt + VAR_6->window))
  return VAR_13;

 VAR_13 = FUNC_8(VAR_9, VAR_6, VAR_11, VAR_12, VAR_8);

 VAR_6->snd_nxt = VAR_10;
 if (FUNC_0(VAR_6))
  VAR_13 |= VAR_4;


 if (VAR_6->peer_caps & VAR_3)
  return VAR_13;



 if (!FUNC_2(VAR_10, VAR_6->rcv_nxt)) {
  VAR_6->nack_state = VAR_0;
  return 0;
 }


 if (VAR_6->nack_state == VAR_1) {
  VAR_6->nack_state = VAR_2;
  return 0;
 }


 if (VAR_6->nack_state == VAR_0) {
  VAR_6->nack_state = VAR_2;
  if ((VAR_10 - VAR_6->rcv_nxt) < VAR_5)
   return 0;
 }


 FUNC_9(VAR_6, 1, VAR_10, VAR_8);
 VAR_6->nack_state = VAR_1;
 return 0;
}
