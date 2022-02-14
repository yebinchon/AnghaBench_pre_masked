
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct axg_spdifin {int pclk; } ;


 int FUNC_0 (struct snd_soc_dai*,struct axg_spdifin*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 struct axg_spdifin* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_0)
{
 struct axg_spdifin *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->pclk);
 if (VAR_2) {
  FUNC_3(VAR_0->dev, "failed to enable pclk\n");
  return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_0->dev, "mode configuration failed\n");
  FUNC_1(VAR_1->pclk);
  return VAR_2;
 }

 return 0;
}
