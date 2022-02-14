
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rcv_tsecr; } ;
struct tcp_sock {unsigned int snd_cwnd; TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
struct lp {int inference; int last_drop; int flag; int sowd; int owd_min; int owd_max; int owd_max_rsv; int remote_hz; } ;
struct ack_sample {scalar_t__ rtt_us; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp* FUNC_0 (struct sock*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (char*,int,unsigned int,int ,int,int,int) ;
 int FUNC_3 (struct sock*,scalar_t__) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2, const struct ack_sample *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_4(VAR_2);
 struct lp *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6 = FUNC_5(VAR_4);
 u32 VAR_7;

 if (VAR_3->rtt_us > 0)
  FUNC_3(VAR_2, VAR_3->rtt_us);


 VAR_7 = VAR_6 - VAR_4->rx_opt.rcv_tsecr;
 if ((s32)VAR_7 > 0)
  VAR_5->inference = 3 * VAR_7;


 if (VAR_5->last_drop && (VAR_6 - VAR_5->last_drop < VAR_5->inference))
  VAR_5->flag |= VAR_0;
 else
  VAR_5->flag &= ~VAR_0;


 if (VAR_5->sowd >> 3 <
     VAR_5->owd_min + 15 * (VAR_5->owd_max - VAR_5->owd_min) / 100)
  VAR_5->flag |= VAR_1;
 else
  VAR_5->flag &= ~VAR_1;

 FUNC_2("TCP-LP: %05o|%5u|%5u|%15u|%15u|%15u\n", VAR_5->flag,
   VAR_4->snd_cwnd, VAR_5->remote_hz, VAR_5->owd_min, VAR_5->owd_max,
   VAR_5->sowd >> 3);

 if (VAR_5->flag & VAR_1)
  return;




 VAR_5->owd_min = VAR_5->sowd >> 3;
 VAR_5->owd_max = VAR_5->sowd >> 2;
 VAR_5->owd_max_rsv = VAR_5->sowd >> 2;



 if (VAR_5->flag & VAR_0)
  VAR_4->snd_cwnd = 1U;



 else
  VAR_4->snd_cwnd = FUNC_1(VAR_4->snd_cwnd >> 1U, 1U);


 VAR_5->last_drop = VAR_6;
}
