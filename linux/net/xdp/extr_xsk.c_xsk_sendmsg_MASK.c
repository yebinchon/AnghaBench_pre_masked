
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_sock {int dummy; } ;
struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct msghdr {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int) ;
 struct xdp_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct xdp_sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_3, struct msghdr *VAR_4, size_t VAR_5)
{
 bool VAR_6 = !(VAR_4->msg_flags & VAR_2);
 struct sock *VAR_7 = VAR_3->sk;
 struct xdp_sock *VAR_8 = FUNC_2(VAR_7);

 if (FUNC_1(!FUNC_3(VAR_8)))
  return -VAR_0;
 if (FUNC_1(VAR_6))
  return -VAR_1;

 return FUNC_0(VAR_7);
}
