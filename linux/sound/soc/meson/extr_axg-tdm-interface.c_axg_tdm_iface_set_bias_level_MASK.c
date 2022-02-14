
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct axg_tdm_iface {int mclk; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct axg_tdm_iface* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_0,
     enum snd_soc_bias_level VAR_1)
{
 struct axg_tdm_iface *VAR_2 = FUNC_3(VAR_0);
 enum snd_soc_bias_level VAR_3 =
  FUNC_2(VAR_0);
 int VAR_4 = 0;

 switch (VAR_1) {
 case 129:
  if (VAR_3 == 128)
   VAR_4 = FUNC_1(VAR_2->mclk);
  break;

 case 128:
  if (VAR_3 == 129)
   FUNC_0(VAR_2->mclk);
  break;

 case 131:
 case 130:
  break;
 }

 return VAR_4;
}
