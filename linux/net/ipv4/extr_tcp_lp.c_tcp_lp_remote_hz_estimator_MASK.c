
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ rcv_tsval; scalar_t__ rcv_tsecr; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
struct lp {int remote_hz; scalar_t__ remote_ref_time; scalar_t__ local_ref_time; int flag; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp* FUNC_0 (struct sock*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static u32 FUNC_2(struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_1(VAR_2);
 struct lp *VAR_4 = FUNC_0(VAR_2);
 s64 VAR_5 = VAR_4->remote_hz << 6;
 s64 VAR_6 = 0;



 if (VAR_4->remote_ref_time == 0 || VAR_4->local_ref_time == 0)
  goto out;


 if (VAR_3->rx_opt.rcv_tsval == VAR_4->remote_ref_time ||
     VAR_3->rx_opt.rcv_tsecr == VAR_4->local_ref_time)
  goto out;

 VAR_6 = VAR_1 *
     (VAR_3->rx_opt.rcv_tsval - VAR_4->remote_ref_time) /
     (VAR_3->rx_opt.rcv_tsecr - VAR_4->local_ref_time);
 if (VAR_6 < 0)
  VAR_6 = -VAR_6;

 if (VAR_5 > 0) {
  VAR_6 -= VAR_5 >> 6;
  VAR_5 += VAR_6;
 } else
  VAR_5 = VAR_6 << 6;

 out:

 if ((VAR_5 >> 6) > 0)
  VAR_4->flag |= VAR_0;
 else
  VAR_4->flag &= ~VAR_0;


 VAR_4->remote_ref_time = VAR_3->rx_opt.rcv_tsval;
 VAR_4->local_ref_time = VAR_3->rx_opt.rcv_tsecr;

 return VAR_5 >> 6;
}
