
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_12__ {struct rb_node* rb_node; } ;
struct TYPE_9__ {int num_sacks; } ;
struct tcp_sock {struct sk_buff* ooo_last_skb; TYPE_4__ out_of_order_queue; TYPE_2__* selective_acks; TYPE_1__ rx_opt; int rcv_ooopack; scalar_t__ pred_flags; } ;
struct sock {int dummy; } ;
struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct sk_buff {struct rb_node rbnode; int truesize; } ;
struct TYPE_13__ {void* seq; void* end_seq; } ;
struct TYPE_11__ {int gso_segs; } ;
struct TYPE_10__ {void* end_seq; void* start_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 TYPE_7__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (void*,void*) ;
 scalar_t__ FUNC_4 (void*,void*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int ,int,int ) ;
 int FUNC_8 (struct rb_node*,TYPE_4__*) ;
 int FUNC_9 (struct rb_node*,TYPE_4__*) ;
 int FUNC_10 (struct rb_node*,struct rb_node*,struct rb_node**) ;
 int FUNC_11 (struct rb_node*,struct rb_node*,TYPE_4__*) ;
 struct sk_buff* FUNC_12 (struct rb_node*) ;
 int FUNC_13 (struct sk_buff*) ;
 struct sk_buff* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,struct sock*) ;
 TYPE_3__* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*,struct sk_buff*) ;
 int FUNC_19 (struct sock*,void*,void*) ;
 int FUNC_20 (struct sock*,void*,void*) ;
 int FUNC_21 (struct sock*,struct sk_buff*) ;
 int FUNC_22 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_23 (struct tcp_sock*) ;
 scalar_t__ FUNC_24 (struct sock*,struct sk_buff*,struct sk_buff*,int*) ;
 int FUNC_25 (struct sock*,void*,void*) ;
 struct tcp_sock* FUNC_26 (struct sock*) ;
 int FUNC_27 (struct sock*,struct sk_buff*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_28 (int ) ;

__attribute__((used)) static void FUNC_29(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_26(VAR_4);
 struct rb_node **VAR_7, *VAR_8;
 struct sk_buff *VAR_9;
 u32 VAR_10, VAR_11;
 bool VAR_12;

 FUNC_21(VAR_4, VAR_5);

 if (FUNC_28(FUNC_27(VAR_4, VAR_5, VAR_5->truesize))) {
  FUNC_0(FUNC_17(VAR_4), VAR_0);
  FUNC_18(VAR_4, VAR_5);
  return;
 }


 VAR_6->pred_flags = 0;
 FUNC_5(VAR_4);

 VAR_6->rcv_ooopack += FUNC_7(VAR_3, 1, FUNC_16(VAR_5)->gso_segs);
 FUNC_0(FUNC_17(VAR_4), VAR_2);
 VAR_10 = FUNC_2(VAR_5)->seq;
 VAR_11 = FUNC_2(VAR_5)->end_seq;

 VAR_7 = &VAR_6->out_of_order_queue.rb_node;
 if (FUNC_1(&VAR_6->out_of_order_queue)) {

  if (FUNC_23(VAR_6)) {
   VAR_6->rx_opt.num_sacks = 1;
   VAR_6->selective_acks[0].start_seq = VAR_10;
   VAR_6->selective_acks[0].end_seq = VAR_11;
  }
  FUNC_10(&VAR_5->rbnode, ((void*)0), VAR_7);
  FUNC_9(&VAR_5->rbnode, &VAR_6->out_of_order_queue);
  VAR_6->ooo_last_skb = VAR_5;
  goto end;
 }




 if (FUNC_24(VAR_4, VAR_6->ooo_last_skb,
     VAR_5, &VAR_12)) {
coalesce_done:
  FUNC_22(VAR_4, VAR_5);
  FUNC_6(VAR_5, VAR_12);
  VAR_5 = ((void*)0);
  goto add_sack;
 }

 if (!FUNC_4(VAR_10, FUNC_2(VAR_6->ooo_last_skb)->end_seq)) {
  VAR_8 = &VAR_6->ooo_last_skb->rbnode;
  VAR_7 = &VAR_8->rb_right;
  goto insert;
 }


 VAR_8 = ((void*)0);
 while (*VAR_7) {
  VAR_8 = *VAR_7;
  VAR_9 = FUNC_12(VAR_8);
  if (FUNC_4(VAR_10, FUNC_2(VAR_9)->seq)) {
   VAR_7 = &VAR_8->rb_left;
   continue;
  }
  if (FUNC_4(VAR_10, FUNC_2(VAR_9)->end_seq)) {
   if (!FUNC_3(VAR_11, FUNC_2(VAR_9)->end_seq)) {

    FUNC_0(FUNC_17(VAR_4),
           VAR_1);
    FUNC_18(VAR_4, VAR_5);
    VAR_5 = ((void*)0);
    FUNC_20(VAR_4, VAR_10, VAR_11);
    goto add_sack;
   }
   if (FUNC_3(VAR_10, FUNC_2(VAR_9)->seq)) {

    FUNC_20(VAR_4, VAR_10, FUNC_2(VAR_9)->end_seq);
   } else {



    FUNC_11(&VAR_9->rbnode, &VAR_5->rbnode,
      &VAR_6->out_of_order_queue);
    FUNC_19(VAR_4,
       FUNC_2(VAR_9)->seq,
       FUNC_2(VAR_9)->end_seq);
    FUNC_0(FUNC_17(VAR_4),
           VAR_1);
    FUNC_18(VAR_4, VAR_9);
    goto merge_right;
   }
  } else if (FUNC_24(VAR_4, VAR_9,
      VAR_5, &VAR_12)) {
   goto coalesce_done;
  }
  VAR_7 = &VAR_8->rb_right;
 }
insert:

 FUNC_10(&VAR_5->rbnode, VAR_8, VAR_7);
 FUNC_9(&VAR_5->rbnode, &VAR_6->out_of_order_queue);

merge_right:

 while ((VAR_9 = FUNC_14(VAR_5)) != ((void*)0)) {
  if (!FUNC_3(VAR_11, FUNC_2(VAR_9)->seq))
   break;
  if (FUNC_4(VAR_11, FUNC_2(VAR_9)->end_seq)) {
   FUNC_19(VAR_4, FUNC_2(VAR_9)->seq,
      VAR_11);
   break;
  }
  FUNC_8(&VAR_9->rbnode, &VAR_6->out_of_order_queue);
  FUNC_19(VAR_4, FUNC_2(VAR_9)->seq,
     FUNC_2(VAR_9)->end_seq);
  FUNC_0(FUNC_17(VAR_4), VAR_1);
  FUNC_18(VAR_4, VAR_9);
 }

 if (!VAR_9)
  VAR_6->ooo_last_skb = VAR_5;

add_sack:
 if (FUNC_23(VAR_6))
  FUNC_25(VAR_4, VAR_10, VAR_11);
end:
 if (VAR_5) {
  FUNC_22(VAR_4, VAR_5);
  FUNC_13(VAR_5);
  FUNC_15(VAR_5, VAR_4);
 }
}
