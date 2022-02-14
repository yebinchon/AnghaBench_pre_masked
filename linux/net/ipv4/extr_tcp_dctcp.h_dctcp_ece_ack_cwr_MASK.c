
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int ecn_flags; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 struct tcp_sock* FUNC_0 (struct sock*) ;

__attribute__((used)) static inline void FUNC_1(struct sock *VAR_1, u32 VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 == 1)
  VAR_3->ecn_flags |= VAR_0;
 else
  VAR_3->ecn_flags &= ~VAR_0;
}
