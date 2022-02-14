
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct net_device* dev; } ;
struct netdev_notifier_changelowerstate_info {TYPE_1__ info; void* lower_state_info; } ;
struct net_device {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;

void FUNC_2(struct net_device *VAR_1,
    void *VAR_2)
{
 struct netdev_notifier_changelowerstate_info VAR_3 = {
  .info.dev = VAR_1,
 };

 FUNC_0();
 VAR_3.lower_state_info = VAR_2;
 FUNC_1(VAR_0,
          &VAR_3.info);
}
