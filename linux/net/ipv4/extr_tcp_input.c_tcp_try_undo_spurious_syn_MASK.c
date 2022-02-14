
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ rcv_tsecr; scalar_t__ saw_tstamp; } ;
struct tcp_sock {scalar_t__ retrans_stamp; scalar_t__ undo_marker; TYPE_1__ rx_opt; } ;
struct sock {int dummy; } ;


 struct tcp_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2;





 VAR_2 = VAR_1->retrans_stamp;
 if (VAR_1->undo_marker && VAR_2 && VAR_1->rx_opt.saw_tstamp &&
     VAR_2 == VAR_1->rx_opt.rcv_tsecr)
  VAR_1->undo_marker = 0;
}
