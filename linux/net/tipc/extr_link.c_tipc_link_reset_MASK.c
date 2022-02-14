
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff_head {int lock; } ;
struct tipc_link {int in_session; int snd_nxt; int rcv_nxt; int snd_nxt_state; int rcv_nxt_state; int bc_peer_is_up; int mon_state; scalar_t__ rst_cnt; scalar_t__ silent_intv_cnt; scalar_t__ acked; scalar_t__ rcv_unacked; int * failover_reasm_skb; int * reasm_tnlmsg; int * reasm_buf; TYPE_1__* backlog; int failover_deferdq; int backlogq; int deferdq; int transmq; struct sk_buff_head* inputq; struct sk_buff_head wakeupq; int advertised_mtu; int mtu; int session; int peer_session; } ;
struct TYPE_2__ {int * target_bskb; scalar_t__ len; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tipc_link*) ;

void FUNC_8(struct tipc_link *VAR_1)
{
 struct sk_buff_head VAR_2;
 u32 VAR_3;

 FUNC_0(&VAR_2);

 VAR_1->in_session = 0;

 VAR_1->peer_session--;
 VAR_1->session++;
 VAR_1->mtu = VAR_1->advertised_mtu;

 FUNC_5(&VAR_1->wakeupq.lock);
 FUNC_4(&VAR_1->wakeupq, &VAR_2);
 FUNC_6(&VAR_1->wakeupq.lock);

 FUNC_5(&VAR_1->inputq->lock);
 FUNC_4(&VAR_2, VAR_1->inputq);
 FUNC_6(&VAR_1->inputq->lock);

 FUNC_1(&VAR_1->transmq);
 FUNC_1(&VAR_1->deferdq);
 FUNC_1(&VAR_1->backlogq);
 FUNC_1(&VAR_1->failover_deferdq);
 for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++) {
  VAR_1->backlog[VAR_3].len = 0;
  VAR_1->backlog[VAR_3].target_bskb = ((void*)0);
 }
 FUNC_2(VAR_1->reasm_buf);
 FUNC_2(VAR_1->reasm_tnlmsg);
 FUNC_2(VAR_1->failover_reasm_skb);
 VAR_1->reasm_buf = ((void*)0);
 VAR_1->reasm_tnlmsg = ((void*)0);
 VAR_1->failover_reasm_skb = ((void*)0);
 VAR_1->rcv_unacked = 0;
 VAR_1->snd_nxt = 1;
 VAR_1->rcv_nxt = 1;
 VAR_1->snd_nxt_state = 1;
 VAR_1->rcv_nxt_state = 1;
 VAR_1->acked = 0;
 VAR_1->silent_intv_cnt = 0;
 VAR_1->rst_cnt = 0;
 VAR_1->bc_peer_is_up = 0;
 FUNC_3(&VAR_1->mon_state, 0, sizeof(VAR_1->mon_state));
 FUNC_7(VAR_1);
}
