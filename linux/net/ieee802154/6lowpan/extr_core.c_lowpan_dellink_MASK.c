
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_1__* ieee802154_ptr; } ;
struct list_head {int dummy; } ;
struct TYPE_4__ {struct net_device* wdev; } ;
struct TYPE_3__ {int * lowpan_dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct net_device*) ;
 TYPE_2__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, struct list_head *VAR_1)
{
 struct net_device *VAR_2 = FUNC_2(VAR_0)->wdev;

 FUNC_0();

 VAR_2->ieee802154_ptr->lowpan_dev = ((void*)0);
 FUNC_3(VAR_0);
 FUNC_1(VAR_2);
}
