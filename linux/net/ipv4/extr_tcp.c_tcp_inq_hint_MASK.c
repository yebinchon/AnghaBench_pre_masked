
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {int copied_seq; int rcv_nxt; } ;
struct sock {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_1)
{
 const struct tcp_sock *VAR_2 = FUNC_4(VAR_1);
 u32 VAR_3 = FUNC_0(VAR_2->copied_seq);
 u32 VAR_4 = FUNC_0(VAR_2->rcv_nxt);
 int VAR_5;

 VAR_5 = VAR_4 - VAR_3;
 if (FUNC_5(VAR_5 < 0 || VAR_3 != FUNC_0(VAR_2->copied_seq))) {
  FUNC_1(VAR_1);
  VAR_5 = VAR_2->rcv_nxt - VAR_2->copied_seq;
  FUNC_2(VAR_1);
 }



 if (VAR_5 == 0 && FUNC_3(VAR_1, VAR_0))
  VAR_5 = 1;
 return VAR_5;
}
