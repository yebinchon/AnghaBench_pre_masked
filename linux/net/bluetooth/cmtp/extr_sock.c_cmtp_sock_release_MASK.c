
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;


 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int FUNC_1 (int *,struct sock*) ;
 int VAR_0 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_1)
{
 struct sock *VAR_2 = VAR_1->sk;

 FUNC_0("sock %p sk %p", VAR_1, VAR_2);

 if (!VAR_2)
  return 0;

 FUNC_1(&VAR_0, VAR_2);

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);

 return 0;
}
