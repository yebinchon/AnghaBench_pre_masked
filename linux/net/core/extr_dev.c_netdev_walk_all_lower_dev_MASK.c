
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {struct list_head lower; } ;
struct net_device {TYPE_1__ adj_list; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct net_device*,struct list_head**) ;

int FUNC_1(struct net_device *VAR_1,
         int (*VAR_2)(struct net_device *VAR_3,
     void *VAR_4),
         void *VAR_5)
{
 struct net_device *VAR_6, *VAR_7, *VAR_8, *VAR_9[VAR_0 + 1];
 struct list_head *VAR_10, *VAR_11, *VAR_12[VAR_0 + 1];
 int VAR_13, VAR_14 = 0;

 VAR_8 = VAR_1;
 VAR_11 = &VAR_1->adj_list.lower;

 while (1) {
  if (VAR_8 != VAR_1) {
   VAR_13 = VAR_2(VAR_8, VAR_5);
   if (VAR_13)
    return VAR_13;
  }

  VAR_7 = ((void*)0);
  while (1) {
   VAR_6 = FUNC_0(VAR_8, &VAR_11);
   if (!VAR_6)
    break;

   VAR_7 = VAR_6;
   VAR_10 = &VAR_6->adj_list.lower;
   VAR_9[VAR_14] = VAR_8;
   VAR_12[VAR_14++] = VAR_11;
   break;
  }

  if (!VAR_7) {
   if (!VAR_14)
    return 0;
   VAR_7 = VAR_9[--VAR_14];
   VAR_10 = VAR_12[VAR_14];
  }

  VAR_8 = VAR_7;
  VAR_11 = VAR_10;
 }

 return 0;
}
