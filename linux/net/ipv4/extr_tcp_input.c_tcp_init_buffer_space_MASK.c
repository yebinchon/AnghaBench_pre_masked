
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int seq; int time; int space; } ;
struct tcp_sock {int advmss; int window_clamp; int snd_cwnd_stamp; int rcv_ssthresh; int copied_seq; TYPE_2__ rcvq_space; int tcp_mstamp; int rcv_wnd; } ;
struct sock {int sk_userlocks; } ;
struct TYPE_4__ {int sysctl_tcp_app_win; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_3__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int VAR_2 ;
 int FUNC_5 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int VAR_3 ;

void FUNC_8(struct sock *VAR_4)
{
 int VAR_5 = FUNC_3(VAR_4)->ipv4.sysctl_tcp_app_win;
 struct tcp_sock *VAR_6 = FUNC_6(VAR_4);
 int VAR_7;

 if (!(VAR_4->sk_userlocks & VAR_0))
  FUNC_7(VAR_4);

 VAR_6->rcvq_space.space = FUNC_2(VAR_3, VAR_6->rcv_wnd, VAR_1 * VAR_6->advmss);
 FUNC_5(VAR_6);
 VAR_6->rcvq_space.time = VAR_6->tcp_mstamp;
 VAR_6->rcvq_space.seq = VAR_6->copied_seq;

 VAR_7 = FUNC_4(VAR_4);

 if (VAR_6->window_clamp >= VAR_7) {
  VAR_6->window_clamp = VAR_7;

  if (VAR_5 && VAR_7 > 4 * VAR_6->advmss)
   VAR_6->window_clamp = FUNC_0(VAR_7 -
            (VAR_7 >> VAR_5),
            4 * VAR_6->advmss);
 }


 if (VAR_5 &&
     VAR_6->window_clamp > 2 * VAR_6->advmss &&
     VAR_6->window_clamp + VAR_6->advmss > VAR_7)
  VAR_6->window_clamp = FUNC_0(2 * VAR_6->advmss, VAR_7 - VAR_6->advmss);

 VAR_6->rcv_ssthresh = FUNC_1(VAR_6->rcv_ssthresh, VAR_6->window_clamp);
 VAR_6->snd_cwnd_stamp = VAR_2;
}
