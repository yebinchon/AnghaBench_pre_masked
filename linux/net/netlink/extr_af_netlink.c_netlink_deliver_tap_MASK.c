
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlink_tap_net {int netlink_tap_all; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct netlink_tap_net*) ;
 int FUNC_1 (int *) ;
 struct netlink_tap_net* FUNC_2 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct net *VAR_1, struct sk_buff *VAR_2)
{
 struct netlink_tap_net *VAR_3 = FUNC_2(VAR_1, VAR_0);

 FUNC_3();

 if (FUNC_5(!FUNC_1(&VAR_3->netlink_tap_all)))
  FUNC_0(VAR_2, VAR_3);

 FUNC_4();
}
