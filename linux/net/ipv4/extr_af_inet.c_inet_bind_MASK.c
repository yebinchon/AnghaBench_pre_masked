
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int (* bind ) (struct sock*,struct sockaddr*,int) ;} ;


 int FUNC_0 (struct sock*,struct sockaddr*) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*,struct sockaddr*,int,int,int) ;
 int FUNC_2 (struct sock*,struct sockaddr*,int) ;

int FUNC_3(struct socket *VAR_1, struct sockaddr *VAR_2, int VAR_3)
{
 struct sock *VAR_4 = VAR_1->sk;
 int VAR_5;


 if (VAR_4->sk_prot->bind) {
  return VAR_4->sk_prot->bind(VAR_4, VAR_2, VAR_3);
 }
 if (VAR_3 < sizeof(struct sockaddr_in))
  return -VAR_0;




 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_4, VAR_2, VAR_3, 0, 1);
}
