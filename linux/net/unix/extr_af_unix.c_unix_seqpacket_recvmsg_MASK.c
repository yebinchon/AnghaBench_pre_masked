
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct socket*,struct msghdr*,size_t,int) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_2, struct msghdr *VAR_3,
      size_t VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_2->sk;

 if (VAR_6->sk_state != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
