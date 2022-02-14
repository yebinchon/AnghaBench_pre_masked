
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ieee802154 {scalar_t__ family; int addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_bound_dev_if; } ;
struct net_device {int ifindex; } ;
struct ieee802154_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee802154_addr*,int *) ;
 struct net_device* FUNC_2 (int ,struct ieee802154_addr*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_3, struct sockaddr *VAR_4, int VAR_5)
{
 struct ieee802154_addr VAR_6;
 struct sockaddr_ieee802154 *VAR_7 = (struct sockaddr_ieee802154 *)VAR_4;
 int VAR_8 = 0;
 struct net_device *VAR_9 = ((void*)0);

 if (VAR_5 < sizeof(*VAR_7))
  return -VAR_1;

 VAR_7 = (struct sockaddr_ieee802154 *)VAR_4;
 if (VAR_7->family != VAR_0)
  return -VAR_1;

 FUNC_3(VAR_3);

 FUNC_1(&VAR_6, &VAR_7->addr);
 VAR_9 = FUNC_2(FUNC_6(VAR_3), &VAR_6);
 if (!VAR_9) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_3->sk_bound_dev_if = VAR_9->ifindex;
 FUNC_5(VAR_3);

 FUNC_0(VAR_9);
out:
 FUNC_4(VAR_3);

 return VAR_8;
}
