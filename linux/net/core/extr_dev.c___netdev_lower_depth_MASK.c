
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct list_head lower; } ;
struct net_device {scalar_t__ lower_level; TYPE_1__ adj_list; } ;


 struct net_device* FUNC_0 (struct net_device*,struct list_head**,int*) ;

__attribute__((used)) static u8 FUNC_1(struct net_device *VAR_0)
{
 struct net_device *VAR_1;
 struct list_head *VAR_2;
 u8 VAR_3 = 0;
 bool VAR_4;

 for (VAR_2 = &VAR_0->adj_list.lower,
      VAR_1 = FUNC_0(VAR_0, &VAR_2, &VAR_4);
      VAR_1;
      VAR_1 = FUNC_0(VAR_0, &VAR_2, &VAR_4)) {
  if (VAR_4)
   continue;
  if (VAR_3 < VAR_1->lower_level)
   VAR_3 = VAR_1->lower_level;
 }

 return VAR_3;
}
