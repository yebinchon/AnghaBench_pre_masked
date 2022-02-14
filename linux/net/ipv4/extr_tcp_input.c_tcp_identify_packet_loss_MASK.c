
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ retrans_out; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (struct tcp_sock*) ;
 int FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, int *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_5(VAR_2);

 if (FUNC_4(VAR_2))
  return;

 if (FUNC_6(FUNC_1(VAR_4))) {
  FUNC_2(VAR_2, *VAR_3 & VAR_1);
 } else if (FUNC_0(VAR_2)) {
  u32 VAR_5 = VAR_4->retrans_out;

  FUNC_3(VAR_2);
  if (VAR_5 > VAR_4->retrans_out)
   *VAR_3 |= VAR_0;
 }
}
