
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ snd_cwnd; } ;
struct sock {int dummy; } ;
struct bictcp {int delay_min; scalar_t__ epoch_start; } ;
struct ack_sample {int rtt_us; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sock*,int) ;
 struct bictcp* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct tcp_sock const*) ;
 scalar_t__ VAR_4 ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_5, const struct ack_sample *VAR_6)
{
 const struct tcp_sock *VAR_7 = FUNC_3(VAR_5);
 struct bictcp *VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9;


 if (VAR_6->rtt_us < 0)
  return;


 if (VAR_8->epoch_start && (s32)(VAR_4 - VAR_8->epoch_start) < VAR_0)
  return;

 VAR_9 = (VAR_6->rtt_us << 3) / VAR_1;
 if (VAR_9 == 0)
  VAR_9 = 1;


 if (VAR_8->delay_min == 0 || VAR_8->delay_min > VAR_9)
  VAR_8->delay_min = VAR_9;


 if (VAR_2 && FUNC_2(VAR_7) &&
     VAR_7->snd_cwnd >= VAR_3)
  FUNC_0(VAR_5, VAR_9);
}
