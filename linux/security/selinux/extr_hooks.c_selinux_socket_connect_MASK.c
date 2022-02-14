
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*,struct sockaddr*) ;
 int FUNC_1 (struct socket*,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_0,
      struct sockaddr *VAR_1, int VAR_2)
{
 int VAR_3;
 struct sock *VAR_4 = VAR_0->sk;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_4, VAR_1);
}
