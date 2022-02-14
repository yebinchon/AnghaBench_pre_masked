
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int sacked_out; int reordering; } ;
struct sock {int dummy; } ;


 scalar_t__ FUNC_0 (struct tcp_sock*) ;
 int FUNC_1 (struct sock*,int,int) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, int VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_2)) {
  int VAR_3 = VAR_2->sacked_out - VAR_2->reordering;
  if (VAR_3 >= 0)
   FUNC_1(VAR_0, VAR_3, 0);
  else if (VAR_1)
   FUNC_1(VAR_0, 1, 1);
 }
}
