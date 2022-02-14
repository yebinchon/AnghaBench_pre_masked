
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_jack ) (struct snd_soc_component*,struct snd_soc_jack*,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,struct snd_soc_jack*,void*) ;

int FUNC_1(struct snd_soc_component *VAR_1,
          struct snd_soc_jack *VAR_2, void *VAR_3)
{
 if (VAR_1->driver->set_jack)
  return VAR_1->driver->set_jack(VAR_1, VAR_2, VAR_3);

 return -VAR_0;
}
