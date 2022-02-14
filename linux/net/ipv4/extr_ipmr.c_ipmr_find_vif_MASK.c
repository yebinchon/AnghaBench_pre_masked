
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mr_table {int maxvif; TYPE_1__* vif_table; } ;
struct TYPE_2__ {struct net_device* dev; } ;



__attribute__((used)) static int FUNC_0(struct mr_table *VAR_0, struct net_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_0->maxvif-1; VAR_2 >= 0; VAR_2--) {
  if (VAR_0->vif_table[VAR_2].dev == VAR_1)
   break;
 }
 return VAR_2;
}
