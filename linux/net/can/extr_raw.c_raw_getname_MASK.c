
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_can {int can_ifindex; int can_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct raw_sock {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_can*,int ,int) ;
 struct raw_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_2, struct sockaddr *VAR_3,
         int VAR_4)
{
 struct sockaddr_can *VAR_5 = (struct sockaddr_can *)VAR_3;
 struct sock *VAR_6 = VAR_2->sk;
 struct raw_sock *VAR_7 = FUNC_1(VAR_6);

 if (VAR_4)
  return -VAR_1;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->can_family = VAR_0;
 VAR_5->can_ifindex = VAR_7->ifindex;

 return sizeof(*VAR_5);
}
