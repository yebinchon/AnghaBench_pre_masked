
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* driver; scalar_t__ regmap; } ;
struct TYPE_2__ {int (* write ) (struct snd_soc_component*,unsigned int,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,unsigned int) ;

int FUNC_2(struct snd_soc_component *VAR_1,
 unsigned int VAR_2, unsigned int VAR_3)
{
 if (VAR_1->regmap)
  return FUNC_0(VAR_1->regmap, VAR_2, VAR_3);
 else if (VAR_1->driver->write)
  return VAR_1->driver->write(VAR_1, VAR_2, VAR_3);
 else
  return -VAR_0;
}
