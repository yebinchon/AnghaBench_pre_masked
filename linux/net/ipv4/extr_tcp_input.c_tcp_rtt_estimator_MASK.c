
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int srtt_us; int mdev_us; int mdev_max_us; int rttvar_us; int snd_nxt; int rtt_seq; int snd_una; } ;
struct sock {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 void* FUNC_1 (unsigned int,int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, long VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_4(VAR_0);
 long VAR_3 = VAR_1;
 u32 VAR_4 = VAR_2->srtt_us;
 if (VAR_4 != 0) {
  VAR_3 -= (VAR_4 >> 3);
  VAR_4 += VAR_3;
  if (VAR_3 < 0) {
   VAR_3 = -VAR_3;
   VAR_3 -= (VAR_2->mdev_us >> 2);
   if (VAR_3 > 0)
    VAR_3 >>= 3;
  } else {
   VAR_3 -= (VAR_2->mdev_us >> 2);
  }
  VAR_2->mdev_us += VAR_3;
  if (VAR_2->mdev_us > VAR_2->mdev_max_us) {
   VAR_2->mdev_max_us = VAR_2->mdev_us;
   if (VAR_2->mdev_max_us > VAR_2->rttvar_us)
    VAR_2->rttvar_us = VAR_2->mdev_max_us;
  }
  if (FUNC_0(VAR_2->snd_una, VAR_2->rtt_seq)) {
   if (VAR_2->mdev_max_us < VAR_2->rttvar_us)
    VAR_2->rttvar_us -= (VAR_2->rttvar_us - VAR_2->mdev_max_us) >> 2;
   VAR_2->rtt_seq = VAR_2->snd_nxt;
   VAR_2->mdev_max_us = FUNC_3(VAR_0);

   FUNC_2(VAR_0);
  }
 } else {

  VAR_4 = VAR_3 << 3;
  VAR_2->mdev_us = VAR_3 << 1;
  VAR_2->rttvar_us = FUNC_1(VAR_2->mdev_us, FUNC_3(VAR_0));
  VAR_2->mdev_max_us = VAR_2->rttvar_us;
  VAR_2->rtt_seq = VAR_2->snd_nxt;

  FUNC_2(VAR_0);
 }
 VAR_2->srtt_us = FUNC_1(1U, VAR_4);
}
