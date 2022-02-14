
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {scalar_t__ probed; int name; int dev; TYPE_1__* driver; } ;
struct TYPE_2__ {int remove_order; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_dai *VAR_0, int VAR_1)
{
 int VAR_2;

 if (!VAR_0 || !VAR_0->probed || !VAR_0->driver ||
     VAR_0->driver->remove_order != VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 0)
  FUNC_0(VAR_0->dev,
   "ASoC: failed to remove %s: %d\n",
   VAR_0->name, VAR_2);

 VAR_0->probed = 0;
}
