
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* probe ) (struct snd_soc_dai*) ;} ;


 int FUNC_0 (struct snd_soc_dai*) ;

int FUNC_1(struct snd_soc_dai *VAR_0)
{
 if (VAR_0->driver->probe)
  return VAR_0->driver->probe(VAR_0);
 return 0;
}
