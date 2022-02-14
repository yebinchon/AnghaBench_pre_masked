
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_2__ {unsigned int aggr_len; int aggr_list; int aggr_list_lock; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct batadv_hard_iface*) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct batadv_hard_iface*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*,int ,unsigned int) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct batadv_hard_iface *VAR_2)
{
 unsigned int VAR_3 = VAR_2->bat_v.aggr_len;
 struct sk_buff *VAR_4;
 unsigned int VAR_5;
 struct sk_buff *VAR_6;

 FUNC_5(&VAR_2->bat_v.aggr_list_lock);

 if (!VAR_3)
  return;

 VAR_4 = FUNC_4(VAR_3 + VAR_0 + VAR_1);
 if (!VAR_4) {
  FUNC_0(VAR_2);
  return;
 }

 FUNC_8(VAR_4, VAR_0 + VAR_1);
 FUNC_9(VAR_4);

 while ((VAR_6 = FUNC_6(&VAR_2->bat_v.aggr_list))) {
  VAR_2->bat_v.aggr_len -= FUNC_1(VAR_6);

  VAR_5 = FUNC_1(VAR_6);
  FUNC_7(VAR_4, VAR_6->data, VAR_5);

  FUNC_3(VAR_6);
 }

 FUNC_2(VAR_4, VAR_2);
}
