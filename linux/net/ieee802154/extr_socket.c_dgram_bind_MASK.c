
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ieee802154 {scalar_t__ family; int addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct ieee802154_addr {int dummy; } ;
struct dgram_sock {int bound; struct ieee802154_addr src_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 struct dgram_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct ieee802154_addr*,int *) ;
 struct net_device* FUNC_3 (int ,struct ieee802154_addr*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_4, struct sockaddr *VAR_5, int VAR_6)
{
 struct sockaddr_ieee802154 *VAR_7 = (struct sockaddr_ieee802154 *)VAR_5;
 struct ieee802154_addr VAR_8;
 struct dgram_sock *VAR_9 = FUNC_1(VAR_4);
 int VAR_10 = -VAR_2;
 struct net_device *VAR_11;

 FUNC_4(VAR_4);

 VAR_9->bound = 0;

 if (VAR_6 < sizeof(*VAR_7))
  goto out;

 if (VAR_7->family != VAR_0)
  goto out;

 FUNC_2(&VAR_8, &VAR_7->addr);
 VAR_11 = FUNC_3(FUNC_6(VAR_4), &VAR_8);
 if (!VAR_11) {
  VAR_10 = -VAR_3;
  goto out;
 }

 if (VAR_11->type != VAR_1) {
  VAR_10 = -VAR_3;
  goto out_put;
 }

 VAR_9->src_addr = VAR_8;

 VAR_9->bound = 1;
 VAR_10 = 0;
out_put:
 FUNC_0(VAR_11);
out:
 FUNC_5(VAR_4);

 return VAR_10;
}
