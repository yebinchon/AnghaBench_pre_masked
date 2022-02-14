
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {int sa_data; int sa_family; } ;
struct sock {int dummy; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_2, struct sockaddr *VAR_3,
          int VAR_4)
{
 struct net_device *VAR_5;
 struct sock *VAR_6 = VAR_2->sk;

 if (VAR_4)
  return -VAR_1;

 VAR_3->sa_family = VAR_0;
 FUNC_1(VAR_3->sa_data, 0, sizeof(VAR_3->sa_data));
 FUNC_3();
 VAR_5 = FUNC_0(FUNC_5(VAR_6), FUNC_2(VAR_6)->ifindex);
 if (VAR_5)
  FUNC_6(VAR_3->sa_data, VAR_5->name, sizeof(VAR_3->sa_data));
 FUNC_4();

 return sizeof(*VAR_3);
}
