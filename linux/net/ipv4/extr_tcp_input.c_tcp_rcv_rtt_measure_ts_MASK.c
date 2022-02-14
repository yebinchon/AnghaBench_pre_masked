
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ rcv_tsecr; } ;
struct tcp_sock {scalar_t__ rcv_rtt_last_tsecr; TYPE_2__ rx_opt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {scalar_t__ end_seq; scalar_t__ seq; } ;
struct TYPE_5__ {scalar_t__ rcv_mss; } ;
struct TYPE_7__ {TYPE_1__ icsk_ack; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct sk_buff const*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct tcp_sock*,int,int ) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*) ;

__attribute__((used)) static inline void FUNC_6(struct sock *VAR_3,
       const struct sk_buff *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_4(VAR_3);

 if (VAR_5->rx_opt.rcv_tsecr == VAR_5->rcv_rtt_last_tsecr)
  return;
 VAR_5->rcv_rtt_last_tsecr = VAR_5->rx_opt.rcv_tsecr;

 if (FUNC_0(VAR_4)->end_seq -
     FUNC_0(VAR_4)->seq >= FUNC_1(VAR_3)->icsk_ack.rcv_mss) {
  u32 VAR_6 = FUNC_5(VAR_5) - VAR_5->rx_opt.rcv_tsecr;
  u32 VAR_7;

  if (FUNC_2(VAR_6 < VAR_0 / (VAR_2 / VAR_1))) {
   if (!VAR_6)
    VAR_6 = 1;
   VAR_7 = VAR_6 * (VAR_2 / VAR_1);
   FUNC_3(VAR_5, VAR_7, 0);
  }
 }
}
