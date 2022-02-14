
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ state; struct sock* sk; } ;
struct sockaddr_dn {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct dn_scp {scalar_t__ accept_mode; int addr; int peer; } ;


 scalar_t__ VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sockaddr_dn*,int *,int) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_4, struct sockaddr *VAR_5,int VAR_6)
{
 struct sockaddr_dn *VAR_7 = (struct sockaddr_dn *)VAR_5;
 struct sock *VAR_8 = VAR_4->sk;
 struct dn_scp *VAR_9 = FUNC_0(VAR_8);

 FUNC_1(VAR_8);

 if (VAR_6) {
  if ((VAR_4->state != VAR_2 &&
       VAR_4->state != VAR_3) &&
      VAR_9->accept_mode == VAR_0) {
   FUNC_3(VAR_8);
   return -VAR_1;
  }

  FUNC_2(VAR_7, &VAR_9->peer, sizeof(struct sockaddr_dn));
 } else {
  FUNC_2(VAR_7, &VAR_9->addr, sizeof(struct sockaddr_dn));
 }

 FUNC_3(VAR_8);

 return sizeof(struct sockaddr_dn);
}
