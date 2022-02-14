
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct lochnagar_sc_priv {int mclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 struct lochnagar_sc_priv* FUNC_4 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
         struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct lochnagar_sc_priv *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5->mclk);
 if (VAR_6 < 0) {
  FUNC_1(VAR_3->dev, "Failed to enable MCLK: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;

 return FUNC_3(VAR_2->runtime, 0,
       VAR_0,
       &VAR_1);
}
