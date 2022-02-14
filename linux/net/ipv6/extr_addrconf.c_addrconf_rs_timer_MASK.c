
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_device {int name; } ;
struct TYPE_2__ {scalar_t__ rtr_solicits; int rtr_solicit_delay; int rtr_solicit_max_interval; } ;
struct inet6_dev {int if_flags; scalar_t__ rs_probes; int lock; struct net_device* dev; int rs_interval; TYPE_1__ cnf; scalar_t__ dead; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inet6_dev*,int ) ;
 struct inet6_dev* FUNC_1 (int ,struct timer_list*,int ) ;
 struct inet6_dev* VAR_3 ;
 int FUNC_2 (struct inet6_dev*) ;
 int VAR_4 ;
 int FUNC_3 (struct inet6_dev*) ;
 int FUNC_4 (struct net_device*,struct in6_addr*,int ) ;
 int FUNC_5 (struct net_device*,struct in6_addr*,int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_6)
{
 struct inet6_dev *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_5);
 struct net_device *VAR_8 = VAR_7->dev;
 struct in6_addr VAR_9;

 FUNC_8(&VAR_7->lock);
 if (VAR_7->dead || !(VAR_7->if_flags & VAR_2))
  goto out;

 if (!FUNC_3(VAR_7))
  goto out;


 if (VAR_7->if_flags & VAR_1)
  goto out;

 if (VAR_7->rs_probes++ < VAR_7->cnf.rtr_solicits || VAR_7->cnf.rtr_solicits < 0) {
  FUNC_9(&VAR_7->lock);
  if (!FUNC_4(VAR_8, &VAR_9, VAR_0))
   FUNC_5(VAR_8, &VAR_9,
          &VAR_4);
  else
   goto put;

  FUNC_8(&VAR_7->lock);
  VAR_7->rs_interval = FUNC_7(
   VAR_7->rs_interval, VAR_7->cnf.rtr_solicit_max_interval);

  FUNC_0(VAR_7, (VAR_7->rs_probes ==
          VAR_7->cnf.rtr_solicits) ?
          VAR_7->cnf.rtr_solicit_delay :
          VAR_7->rs_interval);
 } else {




  FUNC_6("%s: no IPv6 routers present\n", VAR_7->dev->name);
 }

out:
 FUNC_9(&VAR_7->lock);
put:
 FUNC_2(VAR_7);
}
