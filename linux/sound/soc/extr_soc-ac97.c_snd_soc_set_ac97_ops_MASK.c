
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97_bus_ops {int dummy; } ;
struct TYPE_2__ {struct snd_ac97_bus_ops* ops; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct snd_ac97_bus_ops* VAR_2 ;

int FUNC_0(struct snd_ac97_bus_ops *VAR_3)
{
 if (VAR_3 == VAR_2)
  return 0;

 if (VAR_2 && VAR_3)
  return -VAR_0;

 VAR_2 = VAR_3;
 VAR_1.ops = VAR_3;

 return 0;
}
