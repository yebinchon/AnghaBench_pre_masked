
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int * ops; int type; } ;
struct sock {int sk_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct socket*) ;

__attribute__((used)) static void FUNC_1(struct socket *VAR_1, struct sock *VAR_2)
{
 FUNC_0(VAR_2, VAR_1);
 VAR_2->sk_type = VAR_1->type;
 VAR_1->ops = &VAR_0;
}
