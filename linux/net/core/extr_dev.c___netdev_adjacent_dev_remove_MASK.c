
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct netdev_adjacent {scalar_t__ ref_nr; int list; scalar_t__ master; } ;
struct TYPE_2__ {int kobj; } ;
struct net_device {scalar_t__ name; TYPE_1__ dev; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 struct netdev_adjacent* FUNC_1 (struct net_device*,struct list_head*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct netdev_adjacent*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct net_device*,struct net_device*,struct list_head*) ;
 int FUNC_6 (struct net_device*,scalar_t__,struct list_head*) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_1,
      struct net_device *VAR_2,
      u16 VAR_3,
      struct list_head *VAR_4)
{
 struct netdev_adjacent *VAR_5;

 FUNC_7("Remove adjacency: dev %s adj_dev %s ref_nr %d\n",
   VAR_1->name, VAR_2->name, VAR_3);

 VAR_5 = FUNC_1(VAR_2, VAR_4);

 if (!VAR_5) {
  FUNC_8("Adjacency does not exist for device %s from %s\n",
         VAR_1->name, VAR_2->name);
  FUNC_0(1);
  return;
 }

 if (VAR_5->ref_nr > VAR_3) {
  FUNC_7("adjacency: %s to %s ref_nr - %d = %d\n",
    VAR_1->name, VAR_2->name, VAR_3,
    VAR_5->ref_nr - VAR_3);
  VAR_5->ref_nr -= VAR_3;
  return;
 }

 if (VAR_5->master)
  FUNC_9(&(VAR_1->dev.kobj), "master");

 if (FUNC_5(VAR_1, VAR_2, VAR_4))
  FUNC_6(VAR_1, VAR_2->name, VAR_4);

 FUNC_4(&VAR_5->list);
 FUNC_7("adjacency: dev_put for %s, because link removed from %s to %s\n",
   VAR_2->name, VAR_1->name, VAR_2->name);
 FUNC_2(VAR_2);
 FUNC_3(VAR_5, VAR_0);
}
