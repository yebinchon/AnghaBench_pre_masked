
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_dev {int name; int * ops; int vlans; int ports; int cpu_port; int alias; } ;
struct gsw_mt753x {TYPE_1__* dev; int cpu_port; int name; struct switch_dev swdev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (struct switch_dev*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct switch_dev*,int *) ;

int FUNC_4(struct gsw_mt753x *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev->of_node;
 struct switch_dev *VAR_6;
 int VAR_7;

 if (FUNC_2(VAR_5, "mediatek,cpuport", &VAR_4->cpu_port))
  VAR_4->cpu_port = VAR_0;

 VAR_6 = &VAR_4->swdev;

 VAR_6->name = VAR_4->name;
 VAR_6->alias = VAR_4->name;
 VAR_6->cpu_port = VAR_4->cpu_port;
 VAR_6->ports = VAR_1;
 VAR_6->vlans = VAR_2;
 VAR_6->ops = &VAR_3;

 VAR_7 = FUNC_3(VAR_6, ((void*)0));
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "Failed to register switch %s\n",
      VAR_6->name);
  return VAR_7;
 }

 FUNC_1(VAR_6);

 return 0;
}
