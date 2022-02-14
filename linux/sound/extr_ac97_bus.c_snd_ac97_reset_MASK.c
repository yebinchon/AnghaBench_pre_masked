
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97_bus_ops {int (* warm_reset ) (struct snd_ac97*) ;int (* reset ) (struct snd_ac97*) ;} ;
struct snd_ac97 {TYPE_1__* bus; } ;
struct TYPE_2__ {struct snd_ac97_bus_ops* ops; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ac97*,unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*) ;
 int FUNC_3 (struct snd_ac97*) ;

int FUNC_4(struct snd_ac97 *VAR_1, bool VAR_2, unsigned int VAR_3,
 unsigned int VAR_4)
{
 struct snd_ac97_bus_ops *VAR_5 = VAR_1->bus->ops;

 if (VAR_2 && VAR_5->warm_reset) {
  VAR_5->warm_reset(VAR_1);
  if (FUNC_0(VAR_1, VAR_3, VAR_4))
   return 1;
 }

 if (VAR_5->reset)
  VAR_5->reset(VAR_1);
 if (VAR_5->warm_reset)
  VAR_5->warm_reset(VAR_1);

 if (FUNC_0(VAR_1, VAR_3, VAR_4))
  return 0;

 return -VAR_0;
}
