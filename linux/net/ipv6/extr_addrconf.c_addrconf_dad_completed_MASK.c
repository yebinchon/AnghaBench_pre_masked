
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct net_device {int flags; } ;
struct inet6_ifaddr {scalar_t__ scope; int flags; TYPE_5__* idev; int lock; int addr; } ;
struct in6_addr {int dummy; } ;
struct TYPE_11__ {scalar_t__ rtr_solicits; int rtr_solicit_interval; int forwarding; scalar_t__ ndisc_notify; } ;
struct TYPE_13__ {int rs_probes; int lock; int rs_interval; int if_flags; TYPE_3__ cnf; struct net_device* dev; } ;
struct TYPE_10__ {TYPE_1__* devconf_all; } ;
struct TYPE_12__ {TYPE_2__ ipv6; } ;
struct TYPE_9__ {scalar_t__ ndisc_notify; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct inet6_ifaddr*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 () ;
 TYPE_4__* FUNC_3 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (struct net_device*,struct in6_addr*,int ) ;
 int FUNC_6 (int ,struct inet6_ifaddr*) ;
 scalar_t__ FUNC_7 (struct inet6_ifaddr*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (struct net_device*,int *,int *,int,int,int,int) ;
 int FUNC_10 (struct net_device*,struct in6_addr*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(struct inet6_ifaddr *VAR_8, bool VAR_9,
       bool VAR_10)
{
 struct net_device *VAR_11 = VAR_8->idev->dev;
 struct in6_addr VAR_12;
 bool VAR_13, VAR_14;

 FUNC_0(VAR_8);





 FUNC_6(VAR_5, VAR_8);





 FUNC_11(&VAR_8->idev->lock);
 VAR_14 = VAR_8->scope == VAR_2 && FUNC_7(VAR_8);
 VAR_13 = VAR_14 &&
    FUNC_4(VAR_8->idev) &&
    VAR_8->idev->cnf.rtr_solicits != 0 &&
    (VAR_11->flags&VAR_3) == 0;
 FUNC_12(&VAR_8->idev->lock);




 if (VAR_14)
  FUNC_8(VAR_8->idev);


 if (VAR_10 &&
     (VAR_8->idev->cnf.ndisc_notify ||
      FUNC_3(VAR_11)->ipv6.devconf_all->ndisc_notify)) {
  FUNC_9(VAR_11, &VAR_6, &VAR_8->addr,
                     !!VAR_8->idev->cnf.forwarding,
                        0, 1,
                      1);
 }

 if (VAR_13) {





  if (FUNC_5(VAR_11, &VAR_12, VAR_1))
   return;
  FUNC_10(VAR_11, &VAR_12, &VAR_7);

  FUNC_17(&VAR_8->idev->lock);
  FUNC_15(&VAR_8->lock);
  VAR_8->idev->rs_interval = FUNC_13(
   VAR_8->idev->cnf.rtr_solicit_interval);
  VAR_8->idev->rs_probes = 1;
  VAR_8->idev->if_flags |= VAR_4;
  FUNC_1(VAR_8->idev, VAR_8->idev->rs_interval);
  FUNC_16(&VAR_8->lock);
  FUNC_18(&VAR_8->idev->lock);
 }

 if (VAR_9)
  FUNC_14(FUNC_3(VAR_11));




 if (VAR_8->flags & VAR_0)
  FUNC_2();
}
