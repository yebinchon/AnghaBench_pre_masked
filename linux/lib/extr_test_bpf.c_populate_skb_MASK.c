
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; void* vlan_proto; int vlan_present; int vlan_tci; int queue_mapping; int hash; int mark; int pkt_type; void* protocol; } ;
struct TYPE_3__ {int type; int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sk_buff*,char*,int) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 TYPE_1__ VAR_12 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 void* FUNC_3 (int ) ;
 int VAR_13 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_7(char *VAR_14, int VAR_15)
{
 struct sk_buff *VAR_16;

 if (VAR_15 >= VAR_3)
  return ((void*)0);

 VAR_16 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_16)
  return ((void*)0);

 FUNC_0(VAR_16, VAR_14, VAR_15);


 FUNC_5(VAR_16);
 VAR_16->protocol = FUNC_3(VAR_1);
 VAR_16->pkt_type = VAR_9;
 VAR_16->mark = VAR_7;
 VAR_16->hash = VAR_6;
 VAR_16->queue_mapping = VAR_8;
 VAR_16->vlan_tci = VAR_11;
 VAR_16->vlan_present = VAR_10;
 VAR_16->vlan_proto = FUNC_3(VAR_1);
 FUNC_2(&VAR_12, &VAR_13);
 VAR_16->dev = &VAR_12;
 VAR_16->dev->ifindex = VAR_4;
 VAR_16->dev->type = VAR_5;
 FUNC_6(VAR_16, FUNC_4(VAR_15, VAR_0));

 return VAR_16;
}
