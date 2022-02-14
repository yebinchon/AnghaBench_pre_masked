
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct neighbour {int primary_key; int tbl; } ;
struct dst_entry {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct neighbour*) ;
 int VAR_3 ;
 int FUNC_1 (struct neighbour*) ;
 struct neighbour* FUNC_2 (int ,int ,struct net_device*) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,int ,char*,int *,int ) ;
 struct neighbour* FUNC_4 (struct dst_entry*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct neighbour*,struct sk_buff*) ;
 int FUNC_6 (char*,struct neighbour*,struct net_device*) ;
 int FUNC_7 (struct neighbour*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_10(struct sk_buff *VAR_4, struct sk_buff *VAR_5,
        struct net_device *VAR_6, struct netdev_queue *VAR_7,
        struct dst_entry *VAR_8)
{
 struct neighbour *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_4(VAR_8, VAR_4);
 if (!VAR_9)
  return -VAR_2;

 if (VAR_8->dev != VAR_6) {
  struct neighbour *VAR_11;

  VAR_11 = FUNC_2(VAR_9->tbl, VAR_9->primary_key, VAR_6);
  FUNC_7(VAR_9);
  if (FUNC_0(VAR_11))
   return FUNC_1(VAR_11);
  VAR_9 = VAR_11;
 }

 if (FUNC_5(VAR_9, VAR_5) == 0) {
  int VAR_12;
  char VAR_13[VAR_3];

  FUNC_6(VAR_13, VAR_9, VAR_6);
  VAR_12 = FUNC_3(VAR_4, VAR_6, FUNC_8(FUNC_9(VAR_4)),
          VAR_13, ((void*)0), VAR_4->len);

  if (VAR_12 < 0)
   VAR_12 = -VAR_1;
 } else {
  VAR_10 = (VAR_5 == ((void*)0)) ? -VAR_0 : 1;
 }
 FUNC_7(VAR_9);
 return VAR_10;
}
