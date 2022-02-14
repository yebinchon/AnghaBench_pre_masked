
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int icsk_rto; } ;


 int FUNC_0 (struct tcp_sock const*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 const struct tcp_sock *VAR_1 = FUNC_3(VAR_0);
 FUNC_1(VAR_0)->icsk_rto = FUNC_0(VAR_1);
 FUNC_2(VAR_0);
}
