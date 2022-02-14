
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_pn {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct sock {int dummy; } ;
struct pn_sock {int sobject; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr*,int ,int) ;
 struct pn_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sockaddr_pn*,int ) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_1, struct sockaddr *VAR_2,
    int VAR_3)
{
 struct sock *VAR_4 = VAR_1->sk;
 struct pn_sock *VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_2, 0, sizeof(struct sockaddr_pn));
 VAR_2->sa_family = VAR_0;
 if (!VAR_3)
  FUNC_2((struct sockaddr_pn *)VAR_2,
     VAR_5->sobject);

 return sizeof(struct sockaddr_pn);
}
