
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_6__ {int dsack; } ;
struct tcp_sock {TYPE_2__* duplicate_sack; TYPE_1__ rx_opt; int rcv_nxt; } ;
struct sock {int dummy; } ;
struct TYPE_8__ {scalar_t__ sysctl_tcp_dsack; } ;
struct TYPE_9__ {TYPE_3__ ipv4; } ;
struct TYPE_7__ {void* end_seq; void* start_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 TYPE_4__* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_4(VAR_2);

 if (FUNC_3(VAR_5) && FUNC_2(VAR_2)->ipv4.sysctl_tcp_dsack) {
  int VAR_6;

  if (FUNC_1(VAR_3, VAR_5->rcv_nxt))
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_0;

  FUNC_0(FUNC_2(VAR_2), VAR_6);

  VAR_5->rx_opt.dsack = 1;
  VAR_5->duplicate_sack[0].start_seq = VAR_3;
  VAR_5->duplicate_sack[0].end_seq = VAR_4;
 }
}
