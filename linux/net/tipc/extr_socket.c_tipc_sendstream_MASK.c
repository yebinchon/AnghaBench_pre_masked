
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct msghdr {int dummy; } ;


 int FUNC_0 (struct socket*,struct msghdr*,size_t) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_0, struct msghdr *VAR_1, size_t VAR_2)
{
 struct sock *VAR_3 = VAR_0->sk;
 int VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_3);

 return VAR_4;
}
