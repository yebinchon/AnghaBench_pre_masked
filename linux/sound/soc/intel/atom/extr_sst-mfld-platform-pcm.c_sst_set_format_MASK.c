
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; int active; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_dai*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_0->active)
  return 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  FUNC_0(VAR_0->dev, "sst_set_format failed..\n");

 return VAR_2;
}
