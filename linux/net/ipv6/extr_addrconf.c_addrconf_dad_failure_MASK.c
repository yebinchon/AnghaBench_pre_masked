
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_7__ {int idgen_retries; int idgen_delay; } ;
struct TYPE_8__ {TYPE_2__ sysctl; } ;
struct net {TYPE_3__ ipv6; } ;
struct in6_addr {int dummy; } ;
struct inet6_ifaddr {int flags; int stable_privacy_retry; int lock; int state; struct inet6_dev* idev; struct in6_addr addr; int scope; int prefered_lft; int valid_lft; int prefix_len; } ;
struct TYPE_6__ {scalar_t__ max_addresses; } ;
struct inet6_dev {TYPE_5__* dev; TYPE_1__ cnf; } ;
struct ifa6_config {int ifa_flags; int scope; int preferred_lft; int valid_lft; int plen; struct in6_addr* pfx; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int h_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inet6_ifaddr*) ;
 scalar_t__ FUNC_1 (struct inet6_ifaddr*) ;
 int FUNC_2 (struct inet6_ifaddr*,int ) ;
 struct net* FUNC_3 (TYPE_5__*) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr* FUNC_6 (struct inet6_dev*,struct ifa6_config*,int,int *) ;
 scalar_t__ FUNC_7 (struct inet6_dev*) ;
 scalar_t__ FUNC_8 (struct in6_addr*,int,struct inet6_dev*) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct sk_buff *VAR_3, struct inet6_ifaddr *VAR_4)
{
 struct inet6_dev *VAR_5 = VAR_4->idev;
 struct net *VAR_6 = FUNC_3(VAR_4->idev->dev);

 if (FUNC_1(VAR_4)) {
  FUNC_5(VAR_4);
  return;
 }

 FUNC_9("%s: IPv6 duplicate address %pI6c used by %pM detected!\n",
        VAR_4->idev->dev->name, &VAR_4->addr, FUNC_4(VAR_3)->h_source);

 FUNC_10(&VAR_4->lock);

 if (VAR_4->flags & VAR_0) {
  struct in6_addr VAR_7;
  struct inet6_ifaddr *VAR_8;
  int VAR_9 = VAR_4->stable_privacy_retry + 1;
  struct ifa6_config VAR_10 = {
   .pfx = &VAR_7,
   .plen = VAR_4->prefix_len,
   .ifa_flags = VAR_4->flags,
   .valid_lft = VAR_4->valid_lft,
   .preferred_lft = VAR_4->prefered_lft,
   .scope = VAR_4->scope,
  };

  if (VAR_9 > VAR_6->ipv6.sysctl.idgen_retries) {
   FUNC_9("%s: privacy stable address generation failed because of DAD conflicts!\n",
          VAR_4->idev->dev->name);
   goto errdad;
  }

  VAR_7 = VAR_4->addr;
  if (FUNC_8(&VAR_7, VAR_9,
       VAR_5))
   goto errdad;

  FUNC_11(&VAR_4->lock);

  if (VAR_5->cnf.max_addresses &&
      FUNC_7(VAR_5) >=
      VAR_5->cnf.max_addresses)
   goto lock_errdad;

  FUNC_9("%s: generating new stable privacy address because of DAD conflict\n",
         VAR_4->idev->dev->name);

  VAR_8 = FUNC_6(VAR_5, &VAR_10, 0, ((void*)0));
  if (FUNC_0(VAR_8))
   goto lock_errdad;

  FUNC_10(&VAR_8->lock);
  VAR_8->stable_privacy_retry = VAR_9;
  VAR_8->state = VAR_2;
  FUNC_11(&VAR_8->lock);

  FUNC_2(VAR_8, VAR_6->ipv6.sysctl.idgen_delay);
  FUNC_5(VAR_8);
lock_errdad:
  FUNC_10(&VAR_4->lock);
 }

errdad:

 VAR_4->state = VAR_1;
 FUNC_11(&VAR_4->lock);

 FUNC_2(VAR_4, 0);
 FUNC_5(VAR_4);
}
