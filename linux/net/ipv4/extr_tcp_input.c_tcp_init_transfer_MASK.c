
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int total_retrans; int snd_cwnd; int snd_cwnd_stamp; scalar_t__ undo_marker; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {TYPE_1__* icsk_af_ops; } ;
struct TYPE_2__ {int (* rebuild_header ) (struct sock*) ;} ;


 int FUNC_0 (struct sock*) ;
 struct inet_connection_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int,int ,int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct tcp_sock*,int ) ;
 int FUNC_7 (struct sock*) ;
 int VAR_0 ;
 int FUNC_8 (struct sock*) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;

void FUNC_10(struct sock *VAR_1, int VAR_2)
{
 struct inet_connection_sock *VAR_3 = FUNC_1(VAR_1);
 struct tcp_sock *VAR_4 = FUNC_9(VAR_1);

 FUNC_8(VAR_1);
 VAR_3->icsk_af_ops->rebuild_header(VAR_1);
 FUNC_7(VAR_1);







 if (VAR_4->total_retrans > 1 && VAR_4->undo_marker)
  VAR_4->snd_cwnd = 1;
 else
  VAR_4->snd_cwnd = FUNC_6(VAR_4, FUNC_0(VAR_1));
 VAR_4->snd_cwnd_stamp = VAR_0;

 FUNC_3(VAR_1, VAR_2, 0, ((void*)0));
 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
}
