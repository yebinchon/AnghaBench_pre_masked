
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union tcp_md5_addr {int dummy; } tcp_md5_addr ;
typedef scalar_t__ u32 ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int rsk_rcv_wnd; int ts_recent; } ;
struct TYPE_8__ {int rcv_wscale; scalar_t__ no_srccheck; } ;
struct TYPE_7__ {int tos; int saddr; } ;
struct TYPE_6__ {scalar_t__ ts_off; int rcv_nxt; scalar_t__ snt_isn; } ;
struct TYPE_5__ {scalar_t__ snd_nxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_0 (struct request_sock*) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sock const*,union tcp_md5_addr*,int ) ;
 TYPE_2__* FUNC_3 (struct request_sock*) ;
 TYPE_1__* FUNC_4 (struct sock const*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct sock const*,struct sk_buff*,scalar_t__,int ,int,scalar_t__,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(const struct sock *VAR_3, struct sk_buff *VAR_4,
      struct request_sock *VAR_5)
{



 u32 VAR_6 = (VAR_3->sk_state == VAR_2) ? FUNC_3(VAR_5)->snt_isn + 1 :
          FUNC_4(VAR_3)->snd_nxt;






 FUNC_6(VAR_3, VAR_4, VAR_6,
   FUNC_3(VAR_5)->rcv_nxt,
   VAR_5->rsk_rcv_wnd >> FUNC_0(VAR_5)->rcv_wscale,
   FUNC_5() + FUNC_3(VAR_5)->ts_off,
   VAR_5->ts_recent,
   0,
   FUNC_2(VAR_3, (union tcp_md5_addr *)&FUNC_1(VAR_4)->saddr,
       VAR_0),
   FUNC_0(VAR_5)->no_srccheck ? VAR_1 : 0,
   FUNC_1(VAR_4)->tos);
}
