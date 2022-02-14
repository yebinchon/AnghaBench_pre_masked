
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct cs42xx8_priv {int regmap; scalar_t__* rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct cs42xx8_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_4->component;
 struct cs42xx8_priv *VAR_6 = FUNC_3(VAR_5);
 bool VAR_7 = VAR_3->stream == VAR_2;


 VAR_6->rate[VAR_7] = 0;

 FUNC_2(VAR_6->regmap, VAR_1,
      FUNC_1(VAR_7),
      FUNC_0(VAR_7, VAR_0));
 return 0;
}
