
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int syn; scalar_t__ ece; } ;
struct tcp_sock {int ecn_flags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct tcp_sock *VAR_1, const struct tcphdr *VAR_2)
{
 if (VAR_2->ece && !VAR_2->syn && (VAR_1->ecn_flags & VAR_0))
  return 1;
 return 0;
}
