
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct axg_tdm_iface {unsigned int fmt; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct axg_tdm_iface* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5, unsigned int VAR_6)
{
 struct axg_tdm_iface *VAR_7 = FUNC_1(VAR_5);


 if (VAR_6 & (VAR_3 | VAR_2)) {
  FUNC_0(VAR_5->dev, "only CBS_CFS and CBM_CFM are supported\n");
  return -VAR_0;
 }


 if (!VAR_7->mclk && (VAR_6 & VAR_4)) {
  FUNC_0(VAR_5->dev, "cpu clock master: mclk missing\n");
  return -VAR_1;
 }

 VAR_7->fmt = VAR_6;
 return 0;
}
