
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_dev {int list; int iftype; struct net_device* netdev; int identifier; int wpan_phy; } ;
struct notifier_block {int dummy; } ;
struct net_device {int features; struct wpan_dev* ieee802154_ptr; } ;
struct cfg802154_registered_device {int devlist_generation; int opencount; int dev_wait; int wpan_dev_list; int wpan_dev_id; } ;


 int FUNC_0 (int *) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cfg802154_registered_device*,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct net_device* FUNC_5 (void*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 struct cfg802154_registered_device* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct notifier_block *VAR_3,
       unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = FUNC_5(VAR_5);
 struct wpan_dev *VAR_7 = VAR_6->ieee802154_ptr;
 struct cfg802154_registered_device *VAR_8;

 if (!VAR_7)
  return VAR_1;

 VAR_8 = FUNC_8(VAR_7->wpan_phy);



 switch (VAR_4) {

 case 130:
  VAR_6->features |= VAR_0;
  VAR_7->identifier = ++VAR_8->wpan_dev_id;
  FUNC_2(&VAR_7->list, &VAR_8->wpan_dev_list);
  VAR_8->devlist_generation++;

  VAR_7->netdev = VAR_6;
  break;
 case 131:
  FUNC_1(VAR_8, VAR_7->iftype, -1);

  VAR_8->opencount--;
  FUNC_7(&VAR_8->dev_wait);
  break;
 case 128:
  FUNC_1(VAR_8, VAR_7->iftype, 1);

  VAR_8->opencount++;
  break;
 case 129:






  if (!FUNC_4(&VAR_7->list)) {
   FUNC_3(&VAR_7->list);
   VAR_8->devlist_generation++;
  }





  FUNC_6();
  FUNC_0(&VAR_7->list);
  break;
 default:
  return VAR_1;
 }

 return VAR_2;
}
