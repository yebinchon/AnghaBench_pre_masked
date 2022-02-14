
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ snd_cwnd; int delivered; } ;
struct sock {int dummy; } ;
struct rate_sample {scalar_t__ losses; } ;
struct bbr {scalar_t__ prev_ca_state; int packet_conservation; scalar_t__ prior_cwnd; int next_rtt_delivered; } ;
struct TYPE_2__ {scalar_t__ icsk_ca_state; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 struct bbr* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static bool FUNC_6(
 struct sock *VAR_2, const struct rate_sample *VAR_3, u32 VAR_4, u32 *VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_5(VAR_2);
 struct bbr *VAR_7 = FUNC_1(VAR_2);
 u8 VAR_8 = VAR_7->prev_ca_state, VAR_9 = FUNC_0(VAR_2)->icsk_ca_state;
 u32 VAR_10 = VAR_6->snd_cwnd;





 if (VAR_3->losses > 0)
  VAR_10 = FUNC_3(VAR_1, VAR_10 - VAR_3->losses, 1);

 if (VAR_9 == VAR_0 && VAR_8 != VAR_0) {

  VAR_7->packet_conservation = 1;
  VAR_7->next_rtt_delivered = VAR_6->delivered;

  VAR_10 = FUNC_4(VAR_6) + VAR_4;
 } else if (VAR_8 >= VAR_0 && VAR_9 < VAR_0) {

  VAR_10 = FUNC_2(VAR_10, VAR_7->prior_cwnd);
  VAR_7->packet_conservation = 0;
 }
 VAR_7->prev_ca_state = VAR_9;

 if (VAR_7->packet_conservation) {
  *VAR_5 = FUNC_2(VAR_10, FUNC_4(VAR_6) + VAR_4);
  return 1;
 }
 *VAR_5 = VAR_10;
 return 0;
}
