
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct tipc_msg {int dummy; } ;
struct TYPE_7__ {int sent_pkts; } ;
struct sk_buff_head {int dummy; } ;
struct tipc_link {scalar_t__ window; scalar_t__ snd_nxt; TYPE_3__ stats; scalar_t__ rcv_unacked; int ackers; struct sk_buff_head transmq; TYPE_2__* backlog; int backlogq; TYPE_1__* bc_rcvlink; scalar_t__ rcv_nxt; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int ackers; int nxt_retr; } ;
struct TYPE_6__ {struct sk_buff* target_bskb; int len; } ;
struct TYPE_5__ {scalar_t__ rcv_nxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct tipc_link*) ;
 size_t FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,scalar_t__) ;
 int FUNC_7 (struct tipc_msg*,scalar_t__) ;
 int FUNC_8 (struct tipc_msg*,scalar_t__) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct sk_buff_head*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct tipc_link *VAR_2,
          struct sk_buff_head *VAR_3)
{
 struct sk_buff *VAR_4, *VAR_5;
 struct tipc_msg *VAR_6;
 u16 VAR_7 = VAR_2->snd_nxt;
 u16 VAR_8 = VAR_2->rcv_nxt - 1;
 u16 VAR_9 = VAR_2->bc_rcvlink->rcv_nxt - 1;
 u32 VAR_10;

 while (FUNC_11(&VAR_2->transmq) < VAR_2->window) {
  VAR_4 = FUNC_10(&VAR_2->backlogq);
  if (!VAR_4)
   break;
  VAR_5 = FUNC_9(VAR_4, VAR_0);
  if (!VAR_5)
   break;
  FUNC_1(&VAR_2->backlogq);
  VAR_6 = FUNC_3(VAR_4);
  VAR_10 = FUNC_5(VAR_6);
  VAR_2->backlog[VAR_10].len--;
  if (FUNC_12(VAR_4 == VAR_2->backlog[VAR_10].target_bskb))
   VAR_2->backlog[VAR_10].target_bskb = ((void*)0);
  FUNC_2(&VAR_2->transmq, VAR_4);

  if (FUNC_4(VAR_2))
   FUNC_0(VAR_4)->nxt_retr = VAR_1;

  FUNC_2(VAR_3, VAR_5);
  FUNC_0(VAR_4)->ackers = VAR_2->ackers;
  FUNC_8(VAR_6, VAR_7);
  FUNC_6(VAR_6, VAR_8);
  FUNC_7(VAR_6, VAR_9);
  VAR_2->rcv_unacked = 0;
  VAR_2->stats.sent_pkts++;
  VAR_7++;
 }
 VAR_2->snd_nxt = VAR_7;
}
