
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ retrans_stamp; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ icsk_ca_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2, int VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_3(VAR_2);

 FUNC_5(VAR_4);

 if (!FUNC_1(VAR_2))
  VAR_4->retrans_stamp = 0;

 if (VAR_3 & VAR_0)
  FUNC_2(VAR_2);

 if (FUNC_0(VAR_2)->icsk_ca_state != VAR_1) {
  FUNC_4(VAR_2);
 }
}
