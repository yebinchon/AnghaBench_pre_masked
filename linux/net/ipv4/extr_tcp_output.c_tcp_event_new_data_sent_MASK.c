
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {unsigned int packets_out; int snd_nxt; } ;
struct sock {int tcp_rtx_queue; int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_pending; } ;
struct TYPE_2__ {int end_seq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,int *) ;
 struct inet_connection_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 int FUNC_7 (struct sock*) ;
 struct tcp_sock* FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct inet_connection_sock *VAR_4 = FUNC_4(VAR_2);
 struct tcp_sock *VAR_5 = FUNC_8(VAR_2);
 unsigned int VAR_6 = VAR_5->packets_out;

 FUNC_2(VAR_5->snd_nxt, FUNC_1(VAR_3)->end_seq);

 FUNC_3(VAR_3, &VAR_2->sk_write_queue);
 FUNC_6(&VAR_2->tcp_rtx_queue, VAR_3);

 VAR_5->packets_out += FUNC_9(VAR_3);
 if (!VAR_6 || VAR_4->icsk_pending == VAR_0)
  FUNC_7(VAR_2);

 FUNC_0(FUNC_5(VAR_2), VAR_1,
        FUNC_9(VAR_3));
}
