
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* driver; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_2__ {int (* set_bias_level ) (struct snd_soc_component*,int) ;} ;


 int FUNC_0 (struct snd_soc_component*,int) ;

int FUNC_1(struct snd_soc_component *VAR_0,
         enum snd_soc_bias_level VAR_1)
{
 if (VAR_0->driver->set_bias_level)
  return VAR_0->driver->set_bias_level(VAR_0, VAR_1);

 return 0;
}
