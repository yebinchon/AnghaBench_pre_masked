
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int delivered_mstamp; } ;
struct sock {int dummy; } ;
struct bbr {int cycle_idx; int cycle_mstamp; } ;


 int VAR_0 ;
 struct bbr* FUNC_0 (struct sock*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_1(VAR_1);
 struct bbr *VAR_3 = FUNC_0(VAR_1);

 VAR_3->cycle_idx = (VAR_3->cycle_idx + 1) & (VAR_0 - 1);
 VAR_3->cycle_mstamp = VAR_2->delivered_mstamp;
}
