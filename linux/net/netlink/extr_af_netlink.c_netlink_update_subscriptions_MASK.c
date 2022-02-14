
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {size_t sk_protocol; } ;
struct netlink_sock {unsigned int subscriptions; } ;
struct TYPE_2__ {int mc_list; } ;


 int FUNC_0 (struct sock*) ;
 TYPE_1__* VAR_0 ;
 struct netlink_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int *) ;

__attribute__((used)) static void
FUNC_3(struct sock *VAR_1, unsigned int VAR_2)
{
 struct netlink_sock *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->subscriptions && !VAR_2)
  FUNC_0(VAR_1);
 else if (!VAR_3->subscriptions && VAR_2)
  FUNC_2(VAR_1, &VAR_0[VAR_1->sk_protocol].mc_list);
 VAR_3->subscriptions = VAR_2;
}
