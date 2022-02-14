
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct list_head {int dummy; } ;
struct TYPE_3__ {struct list_head upper; } ;
struct net_device {TYPE_2__ dev; TYPE_1__ adj_list; int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
         struct net_device *VAR_2,
         struct list_head *VAR_3)
{
 char VAR_4[VAR_0+7];

 FUNC_0(VAR_4, VAR_3 == &VAR_1->adj_list.upper ?
  "upper_%s" : "lower_%s", VAR_2->name);
 return FUNC_1(&(VAR_1->dev.kobj), &(VAR_2->dev.kobj),
     VAR_4);
}
