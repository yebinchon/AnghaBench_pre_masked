
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int todo_list; } ;
struct TYPE_2__ {int dev_unreg_count; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 FUNC_1(&VAR_1->todo_list, &VAR_0);
 FUNC_0(VAR_1)->dev_unreg_count++;
}
