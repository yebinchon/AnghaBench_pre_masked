
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_adjacent {int ref_nr; int master; int ignore; int list; void* private; struct net_device* dev; } ;
struct TYPE_2__ {int kobj; } ;
struct net_device {int name; TYPE_1__ dev; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct netdev_adjacent* FUNC_0 (struct net_device*,struct list_head*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct netdev_adjacent*) ;
 struct netdev_adjacent* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int *,struct list_head*) ;
 scalar_t__ FUNC_7 (struct net_device*,struct net_device*,struct list_head*) ;
 int FUNC_8 (struct net_device*,struct net_device*,struct list_head*) ;
 int FUNC_9 (struct net_device*,int ,struct list_head*) ;
 int FUNC_10 (char*,int ,int ,int,...) ;
 int FUNC_11 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_2,
     struct net_device *VAR_3,
     struct list_head *VAR_4,
     void *VAR_5, bool VAR_6)
{
 struct netdev_adjacent *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_3, VAR_4);

 if (VAR_7) {
  VAR_7->ref_nr += 1;
  FUNC_10("Insert adjacency: dev %s adj_dev %s adj->ref_nr %d\n",
    VAR_2->name, VAR_3->name, VAR_7->ref_nr);

  return 0;
 }

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_3;
 VAR_7->master = VAR_6;
 VAR_7->ref_nr = 1;
 VAR_7->private = VAR_5;
 VAR_7->ignore = 0;
 FUNC_1(VAR_3);

 FUNC_10("Insert adjacency: dev %s adj_dev %s adj->ref_nr %d; dev_hold on %s\n",
   VAR_2->name, VAR_3->name, VAR_7->ref_nr, VAR_3->name);

 if (FUNC_7(VAR_2, VAR_3, VAR_4)) {
  VAR_8 = FUNC_8(VAR_2, VAR_3, VAR_4);
  if (VAR_8)
   goto free_adj;
 }


 if (VAR_6) {
  VAR_8 = FUNC_11(&(VAR_2->dev.kobj),
     &(VAR_3->dev.kobj), "master");
  if (VAR_8)
   goto remove_symlinks;

  FUNC_5(&VAR_7->list, VAR_4);
 } else {
  FUNC_6(&VAR_7->list, VAR_4);
 }

 return 0;

remove_symlinks:
 if (FUNC_7(VAR_2, VAR_3, VAR_4))
  FUNC_9(VAR_2, VAR_3->name, VAR_4);
free_adj:
 FUNC_3(VAR_7);
 FUNC_2(VAR_3);

 return VAR_8;
}
