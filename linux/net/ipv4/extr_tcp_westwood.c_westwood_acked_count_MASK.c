
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct westwood {scalar_t__ cumul_ack; scalar_t__ snd_una; scalar_t__ accounted; } ;
struct tcp_sock {scalar_t__ snd_una; scalar_t__ mss_cache; } ;
struct sock {int dummy; } ;


 struct westwood* FUNC_0 (struct sock*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static inline u32 FUNC_2(struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_1(VAR_0);
 struct westwood *VAR_2 = FUNC_0(VAR_0);

 VAR_2->cumul_ack = VAR_1->snd_una - VAR_2->snd_una;




 if (!VAR_2->cumul_ack) {
  VAR_2->accounted += VAR_1->mss_cache;
  VAR_2->cumul_ack = VAR_1->mss_cache;
 }

 if (VAR_2->cumul_ack > VAR_1->mss_cache) {

  if (VAR_2->accounted >= VAR_2->cumul_ack) {
   VAR_2->accounted -= VAR_2->cumul_ack;
   VAR_2->cumul_ack = VAR_1->mss_cache;
  } else {
   VAR_2->cumul_ack -= VAR_2->accounted;
   VAR_2->accounted = 0;
  }
 }

 VAR_2->snd_una = VAR_1->snd_una;

 return VAR_2->cumul_ack;
}
