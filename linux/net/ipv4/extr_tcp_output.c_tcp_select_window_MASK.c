
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {int rcv_wscale; } ;
struct tcp_sock {scalar_t__ rcv_wnd; scalar_t__ pred_flags; TYPE_2__ rx_opt; int rcv_nxt; int rcv_wup; } ;
struct sock {int dummy; } ;
struct TYPE_5__ {scalar_t__ sysctl_tcp_workaround_signed_windows; } ;
struct TYPE_7__ {TYPE_1__ ipv4; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned int) ;
 TYPE_3__* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static u16 FUNC_7(struct sock *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_6(VAR_4);
 u32 VAR_6 = VAR_5->rcv_wnd;
 u32 VAR_7 = FUNC_5(VAR_5);
 u32 VAR_8 = FUNC_2(VAR_4);


 if (VAR_8 < VAR_7) {







  if (VAR_8 == 0)
   FUNC_1(FUNC_4(VAR_4),
          VAR_2);
  VAR_8 = FUNC_0(VAR_7, 1 << VAR_5->rx_opt.rcv_wscale);
 }
 VAR_5->rcv_wnd = VAR_8;
 VAR_5->rcv_wup = VAR_5->rcv_nxt;




 if (!VAR_5->rx_opt.rcv_wscale &&
     FUNC_4(VAR_4)->ipv4.sysctl_tcp_workaround_signed_windows)
  VAR_8 = FUNC_3(VAR_8, VAR_3);
 else
  VAR_8 = FUNC_3(VAR_8, (65535U << VAR_5->rx_opt.rcv_wscale));


 VAR_8 >>= VAR_5->rx_opt.rcv_wscale;


 if (VAR_8 == 0) {
  VAR_5->pred_flags = 0;
  if (VAR_6)
   FUNC_1(FUNC_4(VAR_4),
          VAR_1);
 } else if (VAR_6 == 0) {
  FUNC_1(FUNC_4(VAR_4), VAR_0);
 }

 return VAR_8;
}
