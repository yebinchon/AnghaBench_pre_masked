
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_write_queue; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;

 if (!VAR_1)
  return 0;

 FUNC_0(VAR_1);

 FUNC_2(VAR_1);
 VAR_0->sk = ((void*)0);
 FUNC_1(&VAR_1->sk_write_queue);

 FUNC_4();
 FUNC_3(VAR_1);

 return 0;
}
