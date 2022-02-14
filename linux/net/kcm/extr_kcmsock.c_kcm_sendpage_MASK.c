
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {size_t sk_wmem_queued; int (* sk_write_space ) (struct sock*) ;int sk_write_queue; int sk_allocation; TYPE_1__* sk_socket; scalar_t__ sk_err; } ;
struct sk_buff {size_t len; size_t data_len; size_t truesize; int ip_summed; struct sk_buff* next; } ;
struct page {int dummy; } ;
struct TYPE_6__ {int tx_bytes; int tx_msgs; } ;
struct kcm_sock {int tx_wait_more; TYPE_2__ stats; struct sk_buff* seq_skb; int sk; } ;
typedef size_t ssize_t ;
struct TYPE_8__ {struct sk_buff* last_skb; } ;
struct TYPE_7__ {int nr_frags; int tx_flags; struct sk_buff* frag_list; int * frags; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct kcm_sock*) ;
 struct kcm_sock* FUNC_6 (struct sock*) ;
 TYPE_4__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct kcm_sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,struct sock*) ;
 int FUNC_15 (struct sock*,size_t) ;
 int FUNC_16 (struct sock*,int,int) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*,long*) ;
 scalar_t__ FUNC_19 (struct sk_buff*,int,struct page*,int) ;
 int FUNC_20 (struct sk_buff*,int,struct page*,int,size_t) ;
 int FUNC_21 (int *,size_t) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 TYPE_3__* FUNC_24 (struct sk_buff*) ;
 long FUNC_25 (struct sock*,int) ;
 int FUNC_26 (struct sock*) ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static ssize_t FUNC_28(struct socket *VAR_11, struct page *VAR_12,
       int VAR_13, size_t VAR_14, int VAR_15)

{
 struct sock *VAR_16 = VAR_11->sk;
 struct kcm_sock *VAR_17 = FUNC_6(VAR_16);
 struct sk_buff *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
 long VAR_20 = FUNC_25(VAR_16, VAR_15 & VAR_5);
 bool VAR_21;
 int VAR_22 = 0;
 int VAR_23;

 if (VAR_15 & VAR_7)
  VAR_15 |= VAR_6;


 VAR_21 = !(VAR_15 & VAR_6);

 FUNC_9(VAR_16);

 FUNC_14(VAR_9, VAR_16);

 VAR_22 = -VAR_2;
 if (VAR_16->sk_err)
  goto out_error;

 if (VAR_17->seq_skb) {

  VAR_19 = VAR_17->seq_skb;
  VAR_18 = FUNC_7(VAR_19)->last_skb;
  VAR_23 = FUNC_24(VAR_18)->nr_frags;

  if (FUNC_19(VAR_18, VAR_23, VAR_12, VAR_13)) {
   FUNC_21(&FUNC_24(VAR_18)->frags[VAR_23 - 1], VAR_14);
   FUNC_24(VAR_18)->tx_flags |= VAR_8;
   goto coalesced;
  }

  if (VAR_23 >= VAR_3) {
   struct sk_buff *VAR_24;

   VAR_24 = FUNC_3(0, VAR_16->sk_allocation);
   while (!VAR_24) {
    FUNC_5(VAR_17);
    VAR_22 = FUNC_18(VAR_16, &VAR_20);
    if (VAR_22)
     goto out_error;
   }

   if (VAR_19 == VAR_18)
    FUNC_24(VAR_19)->frag_list = VAR_24;
   else
    VAR_18->next = VAR_24;

   VAR_18 = VAR_24;
   VAR_18->ip_summed = VAR_0;
   VAR_23 = 0;
  }
 } else {

  if (!FUNC_17(VAR_16)) {
   FUNC_5(VAR_17);
   FUNC_13(VAR_10, &VAR_16->sk_socket->flags);
   VAR_22 = FUNC_18(VAR_16, &VAR_20);
   if (VAR_22)
    goto out_error;
  }

  VAR_19 = FUNC_3(0, VAR_16->sk_allocation);
  while (!VAR_19) {
   FUNC_5(VAR_17);
   VAR_22 = FUNC_18(VAR_16, &VAR_20);
   if (VAR_22)
    goto out_error;
  }

  VAR_18 = VAR_19;
  VAR_23 = 0;
 }

 FUNC_4(VAR_12);
 FUNC_20(VAR_18, VAR_23, VAR_12, VAR_13, VAR_14);
 FUNC_24(VAR_18)->tx_flags |= VAR_8;

coalesced:
 VAR_18->len += VAR_14;
 VAR_18->data_len += VAR_14;
 VAR_18->truesize += VAR_14;
 VAR_16->sk_wmem_queued += VAR_14;
 FUNC_15(VAR_16, VAR_14);

 if (VAR_19 != VAR_18) {
  VAR_19->len += VAR_14;
  VAR_19->data_len += VAR_14;
  VAR_19->truesize += VAR_14;
 }

 if (VAR_21) {
  bool VAR_25 = FUNC_22(&VAR_16->sk_write_queue);


  FUNC_2(&VAR_16->sk_write_queue, VAR_19);
  VAR_17->seq_skb = ((void*)0);
  FUNC_1(VAR_17->stats.tx_msgs);

  if (VAR_15 & VAR_4) {
   VAR_17->tx_wait_more = 1;
  } else if (VAR_17->tx_wait_more || VAR_25) {
   VAR_22 = FUNC_8(VAR_17);
   if (VAR_22 < 0) {





    FUNC_10("KCM: Hard failure on kcm_write_msgs\n");
    FUNC_12(&VAR_17->sk, -VAR_22);
   }
  }
 } else {

  VAR_17->seq_skb = VAR_19;
  FUNC_7(VAR_19)->last_skb = VAR_18;
 }

 FUNC_0(VAR_17->stats.tx_bytes, VAR_14);

 FUNC_11(VAR_16);
 return VAR_14;

out_error:
 FUNC_5(VAR_17);

 VAR_22 = FUNC_16(VAR_16, VAR_15, VAR_22);


 if (FUNC_27(FUNC_23(&VAR_16->sk_write_queue) == 0 && VAR_22 == -VAR_1))
  VAR_16->sk_write_space(VAR_16);

 FUNC_11(VAR_16);
 return VAR_22;
}
