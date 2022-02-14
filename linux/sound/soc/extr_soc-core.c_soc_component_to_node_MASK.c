
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_component {TYPE_2__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {TYPE_1__* parent; struct device_node* of_node; } ;
struct TYPE_3__ {struct device_node* of_node; } ;



__attribute__((used)) static struct device_node
*FUNC_0(struct snd_soc_component *VAR_0)
{
 struct device_node *VAR_1;

 VAR_1 = VAR_0->dev->of_node;
 if (!VAR_1 && VAR_0->dev->parent)
  VAR_1 = VAR_0->dev->parent->of_node;

 return VAR_1;
}
