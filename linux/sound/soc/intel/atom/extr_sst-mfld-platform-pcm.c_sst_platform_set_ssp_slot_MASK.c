
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; int active; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_dai*,unsigned int,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0,
   unsigned int VAR_1, unsigned int VAR_2,
   int VAR_3, int VAR_4) {
 int VAR_5 = 0;

 if (!VAR_0->active)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  FUNC_0(VAR_0->dev, "sst_fill_ssp_slot failed..%d\n", VAR_5);

 return VAR_5;
}
