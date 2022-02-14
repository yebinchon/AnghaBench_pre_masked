
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; struct sock* sk; } ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct sock*) ;
 int FUNC_1 (char*,struct socket*,struct sock*) ;
 int VAR_1 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_2)
{
 struct sock *VAR_3 = VAR_2->sk;

 FUNC_1("sock=%p sk=%p\n", VAR_2, VAR_3);

 if (!VAR_3)
  return 0;

 if (VAR_2->type == VAR_0)
  FUNC_0(&VAR_1, VAR_3);

 FUNC_2(VAR_3);
 FUNC_3(VAR_3);

 return 0;
}
