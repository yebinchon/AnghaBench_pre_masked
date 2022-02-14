
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rcv_tsval; int rcv_tsecr; } ;
struct tcp_sock {TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;
struct lp {int remote_hz; int flag; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lp* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_2(VAR_4);
 struct lp *VAR_6 = FUNC_0(VAR_4);
 s64 VAR_7 = 0;

 VAR_6->remote_hz = FUNC_1(VAR_4);

 if (VAR_6->flag & VAR_2) {
  VAR_7 =
      VAR_5->rx_opt.rcv_tsval * (VAR_0 / VAR_6->remote_hz) -
      VAR_5->rx_opt.rcv_tsecr * (VAR_0 / VAR_3);
  if (VAR_7 < 0)
   VAR_7 = -VAR_7;
 }

 if (VAR_7 > 0)
  VAR_6->flag |= VAR_1;
 else
  VAR_6->flag &= ~VAR_1;

 return VAR_7;
}
