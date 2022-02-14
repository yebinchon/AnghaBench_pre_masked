
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {int dummy; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_2__ {int (* bind ) (struct sock*,struct sockaddr*,int) ;} ;


 int FUNC_0 (struct sock*,struct sockaddr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sock*,struct sockaddr*,int,int,int) ;
 int FUNC_2 (struct sock*,struct sockaddr*,int) ;

int FUNC_3(struct socket *VAR_2, struct sockaddr *VAR_3, int VAR_4)
{
 struct sock *VAR_5 = VAR_2->sk;
 int VAR_6 = 0;


 if (VAR_5->sk_prot->bind)
  return VAR_5->sk_prot->bind(VAR_5, VAR_3, VAR_4);

 if (VAR_4 < VAR_1)
  return -VAR_0;




 VAR_6 = FUNC_0(VAR_5, VAR_3);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_5, VAR_3, VAR_4, 0, 1);
}
