
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;
struct cfpkt {int dummy; } ;
struct TYPE_3__ {TYPE_2__* up; } ;
struct caif_device_entry {TYPE_1__ layer; int netdev; } ;
struct TYPE_4__ {int (* receive ) (TYPE_2__*,struct cfpkt*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct caif_device_entry* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct caif_device_entry*) ;
 int FUNC_2 (struct caif_device_entry*) ;
 int FUNC_3 (struct cfpkt*) ;
 struct cfpkt* FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*,struct cfpkt*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_3, struct net_device *VAR_4,
     struct packet_type *VAR_5, struct net_device *VAR_6)
{
 struct cfpkt *VAR_7;
 struct caif_device_entry *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_4(VAR_0, VAR_3);

 FUNC_7();
 VAR_8 = FUNC_0(VAR_4);

 if (!VAR_8 || !VAR_8->layer.up || !VAR_8->layer.up->receive ||
   !FUNC_6(VAR_8->netdev)) {
  FUNC_8();
  FUNC_5(VAR_3);
  return VAR_2;
 }


 FUNC_1(VAR_8);
 FUNC_8();

 VAR_9 = VAR_8->layer.up->receive(VAR_8->layer.up, VAR_7);


 if (VAR_9 == -VAR_1)
  FUNC_3(VAR_7);


 FUNC_2(VAR_8);

 if (VAR_9 != 0)
  VAR_9 = VAR_2;
 return VAR_9;
}
