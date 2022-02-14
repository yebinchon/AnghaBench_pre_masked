
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rcv_wscale; scalar_t__ wscale_ok; } ;
struct tcp_sock {int snd_nxt; TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (int,int) ;
 struct tcp_sock* FUNC_1 (struct sock const*) ;
 int FUNC_2 (struct tcp_sock const*) ;

__attribute__((used)) static inline __u32 FUNC_3(const struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_0(FUNC_2(VAR_1), VAR_1->snd_nxt) ||
     (VAR_1->rx_opt.wscale_ok &&
      ((VAR_1->snd_nxt - FUNC_2(VAR_1)) < (1 << VAR_1->rx_opt.rcv_wscale))))
  return VAR_1->snd_nxt;
 else
  return FUNC_2(VAR_1);
}
