
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_4__ {int inet_num; } ;
struct TYPE_3__ {int (* disconnect ) (struct sock*,int) ;int (* pre_connect ) (struct sock*,struct sockaddr*,int) ;int (* connect ) (struct sock*,struct sockaddr*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sock*) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int) ;
 int FUNC_4 (struct sock*,struct sockaddr*,int) ;
 int FUNC_5 (struct sock*,struct sockaddr*,int) ;

int FUNC_6(struct socket *VAR_3, struct sockaddr *VAR_4,
         int VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_3->sk;
 int VAR_8;

 if (VAR_5 < sizeof(VAR_4->sa_family))
  return -VAR_2;
 if (VAR_4->sa_family == VAR_0)
  return VAR_7->sk_prot->disconnect(VAR_7, VAR_6);

 if (FUNC_0(VAR_7)) {
  VAR_8 = VAR_7->sk_prot->pre_connect(VAR_7, VAR_4, VAR_5);
  if (VAR_8)
   return VAR_8;
 }

 if (!FUNC_2(VAR_7)->inet_num && FUNC_1(VAR_7))
  return -VAR_1;
 return VAR_7->sk_prot->connect(VAR_7, VAR_4, VAR_5);
}
