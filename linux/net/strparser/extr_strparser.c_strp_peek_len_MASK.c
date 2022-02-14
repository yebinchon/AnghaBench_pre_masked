
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strparser {TYPE_1__* sk; } ;
struct socket {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* peek_len ) (struct socket*) ;} ;
struct TYPE_3__ {struct socket* sk_socket; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*) ;

__attribute__((used)) static inline int FUNC_1(struct strparser *VAR_1)
{
 if (VAR_1->sk) {
  struct socket *VAR_2 = VAR_1->sk->sk_socket;

  return VAR_2->ops->peek_len(VAR_2);
 }





 return VAR_0;
}
