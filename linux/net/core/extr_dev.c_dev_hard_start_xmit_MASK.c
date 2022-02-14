
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct netdev_queue*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*,struct net_device*,struct netdev_queue*,int ) ;

struct sk_buff *FUNC_5(struct sk_buff *VAR_2, struct net_device *VAR_3,
        struct netdev_queue *VAR_4, int *VAR_5)
{
 struct sk_buff *VAR_6 = VAR_2;
 int VAR_7 = VAR_1;

 while (VAR_6) {
  struct sk_buff *VAR_8 = VAR_6->next;

  FUNC_2(VAR_6);
  VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_4, VAR_8 != ((void*)0));
  if (FUNC_3(!FUNC_0(VAR_7))) {
   VAR_6->next = VAR_8;
   goto out;
  }

  VAR_6 = VAR_8;
  if (FUNC_1(VAR_4) && VAR_6) {
   VAR_7 = VAR_0;
   break;
  }
 }

out:
 *VAR_5 = VAR_7;
 return VAR_6;
}
