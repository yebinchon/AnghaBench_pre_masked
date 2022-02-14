
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {int snd_cwnd; int snd_cwnd_stamp; scalar_t__ snd_cwnd_used; int snd_ssthresh; } ;
struct sock {TYPE_1__* sk_socket; } ;
struct TYPE_4__ {scalar_t__ icsk_ca_state; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct tcp_sock*,int ) ;
 int VAR_2 ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_5(VAR_3);

 if (FUNC_1(VAR_3)->icsk_ca_state == VAR_1 &&
     VAR_3->sk_socket && !FUNC_6(VAR_0, &VAR_3->sk_socket->flags)) {

  u32 VAR_5 = FUNC_4(VAR_4, FUNC_0(VAR_3));
  u32 VAR_6 = FUNC_2(VAR_4->snd_cwnd_used, VAR_5);
  if (VAR_6 < VAR_4->snd_cwnd) {
   VAR_4->snd_ssthresh = FUNC_3(VAR_3);
   VAR_4->snd_cwnd = (VAR_4->snd_cwnd + VAR_6) >> 1;
  }
  VAR_4->snd_cwnd_used = 0;
 }
 VAR_4->snd_cwnd_stamp = VAR_2;
}
