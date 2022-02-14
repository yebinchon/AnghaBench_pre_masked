
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {unsigned int sk_wmem_queued; int (* sk_write_space ) (struct sock*) ;int sk_write_queue; } ;
struct sk_buff {struct sk_buff* next; } ;
struct kcm_tx_msg {int sent; unsigned short frag_offset; unsigned short fragidx; struct sk_buff* frag_skb; } ;
struct kcm_sock {int tx_wait_more; struct kcm_psock* tx_psock; struct sock sk; } ;
struct TYPE_5__ {int tx_msgs; int tx_bytes; } ;
struct kcm_psock {TYPE_2__ stats; TYPE_1__* sk; scalar_t__ tx_stopped; } ;
typedef int skb_frag_t ;
struct TYPE_6__ {unsigned short nr_frags; struct sk_buff* frag_list; int * frags; } ;
struct TYPE_4__ {int sk_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct kcm_psock*,int,int) ;
 int FUNC_4 (struct kcm_sock*) ;
 struct kcm_tx_msg* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,scalar_t__,unsigned short,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct kcm_psock* FUNC_8 (struct kcm_sock*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 unsigned short FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 struct sk_buff* FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 TYPE_3__* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sock*) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct kcm_sock*) ;

__attribute__((used)) static int FUNC_20(struct kcm_sock *VAR_4)
{
 struct sock *VAR_5 = &VAR_4->sk;
 struct kcm_psock *VAR_6;
 struct sk_buff *VAR_7, *VAR_8;
 struct kcm_tx_msg *VAR_9;
 unsigned short VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13 = 0;
 int VAR_14 = 0;

 VAR_4->tx_wait_more = 0;
 VAR_6 = VAR_4->tx_psock;
 if (FUNC_18(VAR_6 && VAR_6->tx_stopped)) {



  FUNC_19(VAR_4);
  FUNC_4(VAR_4);
  if (FUNC_15(&VAR_5->sk_write_queue))
   return 0;

  FUNC_5(FUNC_14(&VAR_5->sk_write_queue))->sent = 0;

 } else if (FUNC_15(&VAR_5->sk_write_queue)) {
  return 0;
 }

 VAR_8 = FUNC_14(&VAR_5->sk_write_queue);
 VAR_9 = FUNC_5(VAR_8);

 if (VAR_9->sent) {

  if (FUNC_2(!VAR_6)) {
   VAR_14 = -VAR_1;
   goto out;
  }
  VAR_12 = VAR_9->sent;
  VAR_11 = VAR_9->frag_offset;
  VAR_10 = VAR_9->fragidx;
  VAR_7 = VAR_9->frag_skb;

  goto do_frag;
 }

try_again:
 VAR_6 = FUNC_8(VAR_4);
 if (!VAR_6)
  goto out;

 do {
  VAR_7 = VAR_8;
  VAR_9 = FUNC_5(VAR_8);
  VAR_12 = 0;

do_frag_list:
  if (FUNC_2(!FUNC_16(VAR_7)->nr_frags)) {
   VAR_14 = -VAR_1;
   goto out;
  }

  for (VAR_10 = 0; VAR_10 < FUNC_16(VAR_7)->nr_frags;
       VAR_10++) {
   skb_frag_t *VAR_15;

   VAR_11 = 0;
do_frag:
   VAR_15 = &FUNC_16(VAR_7)->frags[VAR_10];
   if (FUNC_2(!FUNC_12(VAR_15))) {
    VAR_14 = -VAR_1;
    goto out;
   }

   VAR_14 = FUNC_6(VAR_6->sk->sk_socket,
           FUNC_11(VAR_15),
           FUNC_10(VAR_15) + VAR_11,
           FUNC_12(VAR_15) - VAR_11,
           VAR_3);
   if (VAR_14 <= 0) {
    if (VAR_14 == -VAR_0) {



     VAR_9->sent = VAR_12;
     VAR_9->frag_offset = VAR_11;
     VAR_9->fragidx = VAR_10;
     VAR_9->frag_skb = VAR_7;

     VAR_14 = 0;
     goto out;
    }






    FUNC_3(VAR_6, VAR_14 ? -VAR_14 : VAR_2,
         1);
    FUNC_19(VAR_4);

    VAR_9->sent = 0;
    FUNC_4(VAR_4);
    VAR_14 = 0;

    goto try_again;
   }

   VAR_12 += VAR_14;
   VAR_11 += VAR_14;
   FUNC_0(VAR_6->stats.tx_bytes, VAR_14);
   if (VAR_11 < FUNC_12(VAR_15)) {

    goto do_frag;
   }
  }

  if (VAR_7 == VAR_8) {
   if (FUNC_13(VAR_7)) {
    VAR_7 = FUNC_16(VAR_7)->frag_list;
    goto do_frag_list;
   }
  } else if (VAR_7->next) {
   VAR_7 = VAR_7->next;
   goto do_frag_list;
  }


  FUNC_9(&VAR_5->sk_write_queue);
  FUNC_7(VAR_8);
  VAR_5->sk_wmem_queued -= VAR_12;
  VAR_13 += VAR_12;
  FUNC_1(VAR_6->stats.tx_msgs);
 } while ((VAR_8 = FUNC_14(&VAR_5->sk_write_queue)));
out:
 if (!VAR_8) {

  FUNC_2(!FUNC_15(&VAR_5->sk_write_queue));
  FUNC_19(VAR_4);
 }


 VAR_5->sk_write_space(VAR_5);

 return VAR_13 ? : VAR_14;
}
