
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_sco {int sco_bdaddr; } ;
struct sockaddr {int sa_family; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int src; int dst; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_1, struct sockaddr *VAR_2,
       int VAR_3)
{
 struct sockaddr_sco *VAR_4 = (struct sockaddr_sco *) VAR_2;
 struct sock *VAR_5 = VAR_1->sk;

 FUNC_0("sock %p, sk %p", VAR_1, VAR_5);

 VAR_2->sa_family = VAR_0;

 if (VAR_3)
  FUNC_1(&VAR_4->sco_bdaddr, &FUNC_2(VAR_5)->dst);
 else
  FUNC_1(&VAR_4->sco_bdaddr, &FUNC_2(VAR_5)->src);

 return sizeof(struct sockaddr_sco);
}
