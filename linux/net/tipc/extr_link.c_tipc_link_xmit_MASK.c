
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct tipc_msg {int dummy; } ;
struct TYPE_6__ {int sent_fragments; int sent_bundles; int sent_bundled; int sent_pkts; int sent_fragmented; } ;
struct sk_buff_head {int dummy; } ;
struct tipc_link {unsigned int window; unsigned int mtu; scalar_t__ snd_nxt; TYPE_3__* backlog; TYPE_2__ stats; int addr; scalar_t__ rcv_unacked; int ackers; int name; struct sk_buff_head backlogq; struct sk_buff_head transmq; TYPE_1__* bc_rcvlink; scalar_t__ rcv_nxt; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int ackers; int nxt_retr; } ;
struct TYPE_7__ {scalar_t__ len; scalar_t__ limit; struct sk_buff* target_bskb; } ;
struct TYPE_5__ {scalar_t__ rcv_nxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct tipc_link*) ;
 int VAR_5 ;
 int FUNC_8 (struct tipc_link*,struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*,scalar_t__) ;
 int FUNC_11 (struct tipc_msg*,scalar_t__) ;
 int FUNC_12 (struct tipc_msg*,scalar_t__) ;
 unsigned int FUNC_13 (struct tipc_msg*) ;
 int FUNC_14 (struct tipc_msg*) ;
 int FUNC_15 (struct tipc_msg*) ;
 int FUNC_16 (char*,unsigned int,int ,...) ;
 struct sk_buff* FUNC_17 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_18 (struct sk_buff_head*) ;
 unsigned int FUNC_19 (struct sk_buff_head*) ;
 int FUNC_20 (struct sk_buff_head*,struct sk_buff_head*) ;
 scalar_t__ FUNC_21 (struct sk_buff*,struct tipc_msg*,unsigned int) ;
 scalar_t__ FUNC_22 (struct sk_buff**,struct tipc_msg*,unsigned int,int ) ;
 scalar_t__ FUNC_23 (int) ;

int FUNC_24(struct tipc_link *VAR_6, struct sk_buff_head *VAR_7,
     struct sk_buff_head *VAR_8)
{
 struct tipc_msg *VAR_9 = FUNC_4(FUNC_18(VAR_7));
 unsigned int VAR_10 = VAR_6->window;
 int VAR_11 = FUNC_9(VAR_9);
 unsigned int VAR_12 = VAR_6->mtu;
 u16 VAR_13 = VAR_6->rcv_nxt - 1;
 u16 VAR_14 = VAR_6->snd_nxt;
 u16 VAR_15 = VAR_6->bc_rcvlink->rcv_nxt - 1;
 struct sk_buff_head *VAR_16 = &VAR_6->transmq;
 struct sk_buff_head *VAR_17 = &VAR_6->backlogq;
 struct sk_buff *VAR_18, *VAR_19, **VAR_20;
 int VAR_21 = FUNC_19(VAR_7);
 int VAR_22 = 0;

 if (FUNC_23(FUNC_13(VAR_9) > VAR_12)) {
  FUNC_16("Too large msg, purging xmit list %d %d %d %d %d!\n",
   FUNC_19(VAR_7), FUNC_15(VAR_9),
   FUNC_14(VAR_9), FUNC_13(VAR_9), VAR_12);
  FUNC_2(VAR_7);
  return -VAR_0;
 }


 if (FUNC_23(VAR_6->backlog[VAR_11].len >= VAR_6->backlog[VAR_11].limit)) {
  if (VAR_11 == VAR_4) {
   FUNC_16("%s<%s>, link overflow", VAR_5, VAR_6->name);
   return -VAR_1;
  }
  VAR_22 = FUNC_8(VAR_6, VAR_9);
 }

 if (VAR_21 > 1) {
  VAR_6->stats.sent_fragmented++;
  VAR_6->stats.sent_fragments += VAR_21;
 }


 while (FUNC_19(VAR_7)) {
  VAR_18 = FUNC_18(VAR_7);
  VAR_9 = FUNC_4(VAR_18);
  FUNC_12(VAR_9, VAR_14);
  FUNC_10(VAR_9, VAR_13);
  FUNC_11(VAR_9, VAR_15);

  if (FUNC_6(FUNC_19(VAR_16) < VAR_10)) {
   VAR_19 = FUNC_17(VAR_18, VAR_2);
   if (!VAR_19) {
    FUNC_2(VAR_7);
    return -VAR_1;
   }
   FUNC_1(VAR_7);
   FUNC_3(VAR_16, VAR_18);

   if (FUNC_7(VAR_6))
    FUNC_0(VAR_18)->nxt_retr = VAR_3;
   FUNC_3(VAR_8, VAR_19);
   FUNC_0(VAR_18)->ackers = VAR_6->ackers;
   VAR_6->rcv_unacked = 0;
   VAR_6->stats.sent_pkts++;
   VAR_14++;
   continue;
  }
  VAR_20 = &VAR_6->backlog[VAR_11].target_bskb;
  if (FUNC_21(*VAR_20, VAR_9, VAR_12)) {
   FUNC_5(FUNC_1(VAR_7));
   VAR_6->stats.sent_bundled++;
   continue;
  }
  if (FUNC_22(VAR_20, VAR_9, VAR_12, VAR_6->addr)) {
   FUNC_5(FUNC_1(VAR_7));
   FUNC_3(VAR_17, *VAR_20);
   VAR_6->backlog[VAR_11].len++;
   VAR_6->stats.sent_bundled++;
   VAR_6->stats.sent_bundles++;
   continue;
  }
  VAR_6->backlog[VAR_11].target_bskb = ((void*)0);
  VAR_6->backlog[VAR_11].len += FUNC_19(VAR_7);
  FUNC_20(VAR_7, VAR_17);
 }
 VAR_6->snd_nxt = VAR_14;
 return VAR_22;
}
