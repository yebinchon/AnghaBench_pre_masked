
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ rcv_nxt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {scalar_t__ end_seq; scalar_t__ seq; } ;
struct TYPE_5__ {scalar_t__ sysctl_tcp_dsack; } ;
struct TYPE_6__ {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct sock*,int ) ;
 scalar_t__ FUNC_7 (struct tcp_sock*) ;
 int FUNC_8 (struct sock*,struct sk_buff const*) ;
 int FUNC_9 (struct sock*) ;
 struct tcp_sock* FUNC_10 (struct sock*) ;

__attribute__((used)) static void FUNC_11(struct sock *VAR_2, const struct sk_buff *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_10(VAR_2);

 if (FUNC_1(VAR_3)->end_seq != FUNC_1(VAR_3)->seq &&
     FUNC_3(FUNC_1(VAR_3)->seq, VAR_4->rcv_nxt)) {
  FUNC_0(FUNC_4(VAR_2), VAR_0);
  FUNC_6(VAR_2, VAR_1);

  if (FUNC_7(VAR_4) && FUNC_4(VAR_2)->ipv4.sysctl_tcp_dsack) {
   u32 VAR_5 = FUNC_1(VAR_3)->end_seq;

   FUNC_8(VAR_2, VAR_3);
   if (FUNC_2(FUNC_1(VAR_3)->end_seq, VAR_4->rcv_nxt))
    VAR_5 = VAR_4->rcv_nxt;
   FUNC_5(VAR_2, FUNC_1(VAR_3)->seq, VAR_5);
  }
 }

 FUNC_9(VAR_2);
}
