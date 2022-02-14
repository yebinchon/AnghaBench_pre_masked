
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct lochnagar_sc_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,struct lochnagar_sc_priv*,int ,int) ;
 struct lochnagar_sc_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4,
    struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct lochnagar_sc_priv *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4->runtime, 0,
      VAR_1,
      &VAR_3);
 if (VAR_8)
  return VAR_8;

 return FUNC_1(VAR_4->runtime, 0,
       VAR_1,
       VAR_2, VAR_7,
       VAR_0, -1);
}
