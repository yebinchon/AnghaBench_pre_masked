
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int cwr; int ece; } ;
struct tcp_sock {int ecn_flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct tcp_sock *VAR_1, const struct tcphdr *VAR_2)
{
 if ((VAR_1->ecn_flags & VAR_0) && (!VAR_2->ece || !VAR_2->cwr))
  VAR_1->ecn_flags &= ~VAR_0;
}
