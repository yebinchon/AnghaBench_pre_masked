
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct request_sock {int dummy; } ;
struct inet_request_sock {int snd_wscale; scalar_t__ ecn_ok; scalar_t__ sack_ok; scalar_t__ wscale_ok; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inet_request_sock* FUNC_0 (struct request_sock*) ;
 int FUNC_1 () ;

u64 FUNC_2(struct request_sock *VAR_7)
{
 struct inet_request_sock *VAR_8;
 u32 VAR_9, VAR_10 = FUNC_1();
 u32 VAR_11 = 0;

 VAR_8 = FUNC_0(VAR_7);

 VAR_11 = VAR_8->wscale_ok ? VAR_8->snd_wscale : VAR_6;
 if (VAR_8->sack_ok)
  VAR_11 |= VAR_5;
 if (VAR_8->ecn_ok)
  VAR_11 |= VAR_4;

 VAR_9 = VAR_10 & ~VAR_3;
 VAR_9 |= VAR_11;
 if (VAR_9 > VAR_10) {
  VAR_9 >>= VAR_2;
  VAR_9--;
  VAR_9 <<= VAR_2;
  VAR_9 |= VAR_11;
 }
 return (u64)VAR_9 * (VAR_0 / VAR_1);
}
