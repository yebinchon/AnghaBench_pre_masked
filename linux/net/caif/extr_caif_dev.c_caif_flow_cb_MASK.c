
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int * dev; } ;
struct TYPE_3__ {int id; TYPE_2__* up; } ;
struct caif_device_entry {int xoff; void (* xoff_skb_dtor ) (struct sk_buff*) ;TYPE_1__ layer; int flow_lock; struct sk_buff* xoff_skb; } ;
struct TYPE_4__ {int (* ctrlcmd ) (TYPE_2__*,int ,int ) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 struct caif_device_entry* FUNC_1 (int *) ;
 int FUNC_2 (struct caif_device_entry*) ;
 int FUNC_3 (struct caif_device_entry*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_1)
{
 struct caif_device_entry *VAR_2;
 void (*VAR_3)(struct sk_buff *VAR_4) = ((void*)0);
 bool VAR_5;

 FUNC_0(VAR_1->dev == ((void*)0));

 FUNC_4();
 VAR_2 = FUNC_1(VAR_1->dev);

 FUNC_0(VAR_2 == ((void*)0));
 if (!VAR_2) {
  FUNC_5();
  return;
 }

 FUNC_2(VAR_2);
 FUNC_5();

 FUNC_6(&VAR_2->flow_lock);
 VAR_5 = VAR_2->xoff;
 VAR_2->xoff = 0;
 VAR_3 = VAR_2->xoff_skb_dtor;

 if (FUNC_0(VAR_2->xoff_skb != VAR_1))
  VAR_1 = ((void*)0);

 VAR_2->xoff_skb = ((void*)0);
 VAR_2->xoff_skb_dtor = ((void*)0);

 FUNC_7(&VAR_2->flow_lock);

 if (VAR_3 && VAR_1)
  VAR_3(VAR_1);

 if (VAR_5)
  VAR_2->layer.up->
   ctrlcmd(VAR_2->layer.up,
    VAR_0,
    VAR_2->layer.id);
 FUNC_3(VAR_2);
}
