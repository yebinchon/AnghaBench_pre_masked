
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int write_seq; scalar_t__ snd_nxt; } ;
struct sock {int sk_allocation; int tcp_rtx_queue; } ;
struct sk_buff {int truesize; int tcp_tsorted_anchor; } ;
struct TYPE_2__ {int tcp_flags; int end_seq; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct sock*,int ,int ) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sock*,int ) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sk_buff*,int ,int) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 struct tcp_sock* FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (struct sock*) ;
 scalar_t__ FUNC_13 (struct sock*) ;
 struct sk_buff* FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (int) ;

void FUNC_16(struct sock *VAR_4)
{
 struct sk_buff *VAR_5, *VAR_6 = FUNC_14(VAR_4);
 struct tcp_sock *VAR_7 = FUNC_11(VAR_4);






 if (!VAR_6 && FUNC_12(VAR_4))
  VAR_6 = FUNC_6(&VAR_4->tcp_rtx_queue);

 if (VAR_6) {
  FUNC_1(VAR_6)->tcp_flags |= VAR_2;
  FUNC_1(VAR_6)->end_seq++;
  VAR_7->write_seq++;
  if (FUNC_13(VAR_4)) {






   FUNC_2(VAR_7->snd_nxt, VAR_7->snd_nxt + 1);
   return;
  }
 } else {
  VAR_5 = FUNC_4(VAR_0, VAR_4->sk_allocation);
  if (FUNC_15(!VAR_5))
   return;

  FUNC_0(&VAR_5->tcp_tsorted_anchor);
  FUNC_7(VAR_5, VAR_0);
  FUNC_5(VAR_4, VAR_5->truesize);

  FUNC_9(VAR_5, VAR_7->write_seq,
         VAR_1 | VAR_2);
  FUNC_10(VAR_4, VAR_5);
 }
 FUNC_3(VAR_4, FUNC_8(VAR_4), VAR_3);
}
