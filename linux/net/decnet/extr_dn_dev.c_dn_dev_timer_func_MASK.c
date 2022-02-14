
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_device {int dummy; } ;
struct dn_ifaddr {int ifa_flags; int ifa_next; } ;
struct TYPE_2__ {scalar_t__ t2; scalar_t__ t3; int (* timer3 ) (struct net_device*,struct dn_ifaddr*) ;} ;
struct dn_dev {scalar_t__ t3; TYPE_1__ parms; int ifa_list; struct net_device* dev; } ;


 int VAR_0 ;
 struct dn_dev* VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct dn_dev* FUNC_1 (int ,struct timer_list*,int ) ;
 struct dn_ifaddr* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct net_device*,struct dn_ifaddr*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_3)
{
 struct dn_dev *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct net_device *VAR_5;
 struct dn_ifaddr *VAR_6;

 FUNC_3();
 VAR_5 = VAR_4->dev;
 if (VAR_4->t3 <= VAR_4->parms.t2) {
  if (VAR_4->parms.timer3) {
   for (VAR_6 = FUNC_2(VAR_4->ifa_list);
        VAR_6;
        VAR_6 = FUNC_2(VAR_6->ifa_next)) {
    if (!(VAR_6->ifa_flags & VAR_0))
     VAR_4->parms.timer3(VAR_5, VAR_6);
   }
  }
  VAR_4->t3 = VAR_4->parms.t3;
 } else {
  VAR_4->t3 -= VAR_4->parms.t2;
 }
 FUNC_4();
 FUNC_0(VAR_5);
}
