
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ reordering; scalar_t__ lost_out; } ;
struct sock {int dummy; } ;


 scalar_t__ FUNC_0 (struct tcp_sock*) ;
 int FUNC_1 (struct sock*) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static bool FUNC_3(struct sock *VAR_0, int VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_2(VAR_0);


 if (VAR_2->lost_out)
  return 1;


 if (!FUNC_1(VAR_0) && FUNC_0(VAR_2) > VAR_2->reordering)
  return 1;

 return 0;
}
