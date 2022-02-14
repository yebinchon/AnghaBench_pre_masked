
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int state; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; TYPE_1__* sk_prot; } ;
struct TYPE_2__ {struct sock* (* accept ) (struct sock*,int,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct socket*) ;
 struct sock* FUNC_3 (struct sock*,int,int*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_3, struct socket *VAR_4,
       int VAR_5, bool VAR_6)
{
 struct sock *VAR_7 = VAR_3->sk;
 struct sock *VAR_8;
 int VAR_9;

 if (FUNC_4(VAR_7->sk_state != VAR_2))
  return -VAR_0;

 VAR_8 = VAR_7->sk_prot->accept(VAR_7, VAR_5, &VAR_9, VAR_6);
 if (!VAR_8)
  return VAR_9;

 FUNC_0(VAR_8);
 FUNC_2(VAR_8, VAR_4);
 VAR_4->state = VAR_1;
 FUNC_1(VAR_8);
 return 0;
}
