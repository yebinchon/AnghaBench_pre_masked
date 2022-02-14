
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct cflayer {int transmit; int name; } ;
struct cfcnfg {int dummy; } ;
struct caif_device_entry_list {int lock; int list; } ;
struct caif_device_entry {struct cflayer layer; int list; int flow_lock; } ;
struct caif_dev_common {int link_select; int use_fcs; } ;
typedef enum cfcnfg_phy_preference { ____Placeholder_cfcnfg_phy_preference } cfcnfg_phy_preference ;




 int VAR_0 ;
 int VAR_1 ;
 struct caif_device_entry* FUNC_0 (struct net_device*) ;
 struct caif_device_entry_list* FUNC_1 (int ) ;
 int FUNC_2 (struct cfcnfg*,struct net_device*,struct cflayer*,int,struct cflayer*,int ,int) ;
 int FUNC_3 (struct net_device*) ;
 struct cfcnfg* FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*,struct net_device*,struct packet_type*,struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int) ;
 int VAR_2 ;

void FUNC_11(struct net_device *VAR_3, struct caif_dev_common *VAR_4,
       struct cflayer *VAR_5, int VAR_6,
       struct cflayer **VAR_7,
       int (**VAR_8)(struct sk_buff *, struct net_device *,
          struct packet_type *,
          struct net_device *))
{
 struct caif_device_entry *VAR_9;
 enum cfcnfg_phy_preference VAR_10;
 struct cfcnfg *VAR_11 = FUNC_4(FUNC_3(VAR_3));
 struct caif_device_entry_list *VAR_12;

 VAR_12 = FUNC_1(FUNC_3(VAR_3));
 VAR_9 = FUNC_0(VAR_3);
 if (!VAR_9)
  return;
 *VAR_7 = &VAR_9->layer;
 FUNC_9(&VAR_9->flow_lock);

 switch (VAR_4->link_select) {
 case 129:
  VAR_10 = VAR_0;
  break;
 case 128:
  VAR_10 = VAR_1;
  break;
 default:
  VAR_10 = VAR_0;
  break;
 }
 FUNC_6(&VAR_12->lock);
 FUNC_5(&VAR_9->list, &VAR_12->list);

 FUNC_10(VAR_9->layer.name, VAR_3->name,
  sizeof(VAR_9->layer.name));
 VAR_9->layer.transmit = VAR_2;
 FUNC_2(VAR_11,
    VAR_3,
    &VAR_9->layer,
    VAR_10,
    VAR_5,
    VAR_4->use_fcs,
    VAR_6);
 FUNC_7(&VAR_12->lock);
 if (VAR_8)
  *VAR_8 = FUNC_8;
}
