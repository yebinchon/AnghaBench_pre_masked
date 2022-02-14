
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int base; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,scalar_t__,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->component;
 int VAR_5 = VAR_2->driver->base;
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_3)
  VAR_6 = VAR_0;
 else
  VAR_6 = 0;

 VAR_7 = FUNC_0(VAR_4,
         VAR_5 + VAR_1,
         VAR_0, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 else
  return 0;
}
