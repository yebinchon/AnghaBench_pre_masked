
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct axg_tdm_iface {unsigned int mclk_rate; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 struct axg_tdm_iface* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2, int VAR_3,
        unsigned int VAR_4, int VAR_5)
{
 struct axg_tdm_iface *VAR_6 = FUNC_2(VAR_2);
 int VAR_7 = -VAR_0;

 if (VAR_5 == VAR_1 && VAR_3 == 0) {
  if (!VAR_6->mclk) {
   FUNC_1(VAR_2->dev, "master clock not provided\n");
  } else {
   VAR_7 = FUNC_0(VAR_6->mclk, VAR_4);
   if (!VAR_7)
    VAR_6->mclk_rate = VAR_4;
  }
 }

 return VAR_7;
}
