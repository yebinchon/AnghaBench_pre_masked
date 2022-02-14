
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int ecn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct tcp_sock *VAR_2)
{
 if (VAR_2->ecn_flags & VAR_0)
  VAR_2->ecn_flags |= VAR_1;
}
