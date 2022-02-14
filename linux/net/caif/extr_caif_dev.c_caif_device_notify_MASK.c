
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ type; int ifindex; } ;
struct cflayer {int dummy; } ;
struct cfcnfg {int dummy; } ;
struct caif_device_entry_list {int lock; int list; } ;
struct TYPE_7__ {int id; TYPE_2__* up; } ;
struct caif_device_entry {int pcpu_refcnt; int netdev; int list; TYPE_3__ layer; int flow_lock; TYPE_1__* xoff_skb; int * xoff_skb_dtor; int xoff; } ;
struct caif_dev_common {int flowctrl; int use_stx; int use_frag; } ;
struct TYPE_6__ {int (* ctrlcmd ) (TYPE_2__*,int ,int ) ;} ;
struct TYPE_5__ {int * destructor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 struct caif_device_entry_list* FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,struct caif_dev_common*,struct cflayer*,int,struct cflayer**,int *) ;
 struct caif_device_entry* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct caif_device_entry*) ;
 int FUNC_4 (struct caif_device_entry*) ;
 int FUNC_5 (struct caif_device_entry*) ;
 int FUNC_6 (struct cfcnfg*,TYPE_3__*) ;
 int FUNC_7 (struct cfcnfg*,TYPE_3__*,int) ;
 struct cflayer* FUNC_8 (int ,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct cfcnfg* FUNC_12 (int ) ;
 int FUNC_13 (struct caif_device_entry*) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 struct net_device* FUNC_18 (void*) ;
 struct caif_dev_common* FUNC_19 (struct net_device*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (TYPE_2__*,int ,int ) ;
 int FUNC_27 () ;

__attribute__((used)) static int FUNC_28(struct notifier_block *VAR_4, unsigned long VAR_5,
         void *VAR_6)
{
 struct net_device *VAR_7 = FUNC_18(VAR_6);
 struct caif_device_entry *VAR_8 = ((void*)0);
 struct caif_dev_common *VAR_9;
 struct cfcnfg *VAR_10;
 struct cflayer *VAR_11, *VAR_12;
 int VAR_13 = 0;
 struct caif_device_entry_list *VAR_14;

 VAR_10 = FUNC_12(FUNC_9(VAR_7));
 VAR_14 = FUNC_0(FUNC_9(VAR_7));

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 == ((void*)0) && VAR_7->type != VAR_0)
  return 0;

 switch (VAR_5) {
 case 130:
  if (VAR_8 != ((void*)0))
   break;

  VAR_9 = FUNC_19(VAR_7);

  VAR_12 = ((void*)0);
  if (VAR_9->use_frag) {
   VAR_13 = 1;
   VAR_12 = FUNC_8(VAR_7->ifindex,
       VAR_9->use_stx);
   if (!VAR_12) {
    FUNC_21("Out of memory\n");
    break;
   }
  }
  FUNC_1(VAR_7, VAR_9, VAR_12, VAR_13,
    &VAR_11, ((void*)0));
  VAR_9->flowctrl = VAR_3;
  break;

 case 128:
  FUNC_22();

  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8 == ((void*)0)) {
   FUNC_23();
   break;
  }

  VAR_8->xoff = 0;
  FUNC_7(VAR_10, &VAR_8->layer, 1);
  FUNC_23();

  break;

 case 131:
  FUNC_22();

  VAR_8 = FUNC_2(VAR_7);
  if (!VAR_8 || !VAR_8->layer.up || !VAR_8->layer.up->ctrlcmd) {
   FUNC_23();
   return -VAR_1;
  }

  FUNC_7(VAR_10, &VAR_8->layer, 0);
  FUNC_3(VAR_8);
  FUNC_23();

  VAR_8->layer.up->ctrlcmd(VAR_8->layer.up,
      VAR_2,
      VAR_8->layer.id);

  FUNC_24(&VAR_8->flow_lock);
  if (VAR_8->xoff_skb_dtor != ((void*)0) && VAR_8->xoff_skb != ((void*)0))
   VAR_8->xoff_skb->destructor = VAR_8->xoff_skb_dtor;

  VAR_8->xoff = 0;
  VAR_8->xoff_skb_dtor = ((void*)0);
  VAR_8->xoff_skb = ((void*)0);

  FUNC_25(&VAR_8->flow_lock);
  FUNC_4(VAR_8);
  break;

 case 129:
  FUNC_16(&VAR_14->lock);

  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8 == ((void*)0)) {
   FUNC_17(&VAR_14->lock);
   break;
  }
  FUNC_15(&VAR_8->list);
  if (FUNC_5(VAR_8) != 0 ||
   FUNC_6(VAR_10, &VAR_8->layer) != 0) {

   FUNC_20("Wait for device inuse\n");

   FUNC_14(&VAR_8->list, &VAR_14->list);
   FUNC_17(&VAR_14->lock);
   break;
  }

  FUNC_27();
  FUNC_10(VAR_8->netdev);
  FUNC_11(VAR_8->pcpu_refcnt);
  FUNC_13(VAR_8);

  FUNC_17(&VAR_14->lock);
  break;
 }
 return 0;
}
