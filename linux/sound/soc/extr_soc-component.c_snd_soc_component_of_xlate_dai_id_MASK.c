
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* driver; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int (* of_xlate_dai_id ) (struct snd_soc_component*,struct device_node*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,struct device_node*) ;

int FUNC_1(struct snd_soc_component *VAR_1,
          struct device_node *VAR_2)
{
 if (VAR_1->driver->of_xlate_dai_id)
  return VAR_1->driver->of_xlate_dai_id(VAR_1, VAR_2);

 return -VAR_0;
}
