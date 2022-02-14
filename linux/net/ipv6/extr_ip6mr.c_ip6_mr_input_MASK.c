
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; int mark; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct mr_table {int dummy; } ;
struct mfc6_cache {int dummy; } ;
struct flowi6 {int flowi6_mark; int flowi6_iif; } ;
struct TYPE_4__ {int iif; } ;
struct TYPE_3__ {int daddr; int saddr; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net*,struct mr_table*,struct net_device*,struct sk_buff*,struct mfc6_cache*) ;
 struct mfc6_cache* FUNC_4 (struct mr_table*,int *,int *) ;
 struct mfc6_cache* FUNC_5 (struct mr_table*,int *,int) ;
 int FUNC_6 (struct mr_table*,int,struct sk_buff*,struct net_device*) ;
 int FUNC_7 (struct net*,struct flowi6*,struct mr_table**) ;
 int FUNC_8 (struct mr_table*,struct net_device*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct sk_buff *VAR_2)
{
 struct mfc6_cache *VAR_3;
 struct net *VAR_4 = FUNC_2(VAR_2->dev);
 struct mr_table *VAR_5;
 struct flowi6 VAR_6 = {
  .flowi6_iif = VAR_2->dev->ifindex,
  .flowi6_mark = VAR_2->mark,
 };
 int VAR_7;
 struct net_device *VAR_8;




 VAR_8 = VAR_2->dev;
 if (FUNC_11(VAR_2->dev)) {
  VAR_8 = FUNC_1(VAR_4, FUNC_0(VAR_2)->iif);
  if (!VAR_8) {
   FUNC_10(VAR_2);
   return -VAR_0;
  }
 }

 VAR_7 = FUNC_7(VAR_4, &VAR_6, &VAR_5);
 if (VAR_7 < 0) {
  FUNC_10(VAR_2);
  return VAR_7;
 }

 FUNC_12(&VAR_1);
 VAR_3 = FUNC_4(VAR_5,
     &FUNC_9(VAR_2)->saddr, &FUNC_9(VAR_2)->daddr);
 if (!VAR_3) {
  int VAR_9 = FUNC_8(VAR_5, VAR_8);

  if (VAR_9 >= 0)
   VAR_3 = FUNC_5(VAR_5,
           &FUNC_9(VAR_2)->daddr,
           VAR_9);
 }




 if (!VAR_3) {
  int VAR_10;

  VAR_10 = FUNC_8(VAR_5, VAR_8);
  if (VAR_10 >= 0) {
   int VAR_11 = FUNC_6(VAR_5, VAR_10, VAR_2, VAR_8);
   FUNC_13(&VAR_1);

   return VAR_11;
  }
  FUNC_13(&VAR_1);
  FUNC_10(VAR_2);
  return -VAR_0;
 }

 FUNC_3(VAR_4, VAR_5, VAR_8, VAR_2, VAR_3);

 FUNC_13(&VAR_1);

 return 0;
}
