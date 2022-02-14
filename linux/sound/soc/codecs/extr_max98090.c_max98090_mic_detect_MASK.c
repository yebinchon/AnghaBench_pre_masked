
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct max98090_priv {int jack_work; struct snd_soc_jack* jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;
 struct max98090_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_5 (struct snd_soc_jack*,int ,int) ;
 int VAR_5 ;

int FUNC_6(struct snd_soc_component *VAR_6,
 struct snd_soc_jack *VAR_7)
{
 struct max98090_priv *VAR_8 = FUNC_3(VAR_6);

 FUNC_0(VAR_6->dev, "max98090_mic_detect\n");

 VAR_8->jack = VAR_7;
 if (VAR_7) {
  FUNC_4(VAR_6, VAR_2,
   VAR_0,
   1 << VAR_1);
 } else {
  FUNC_4(VAR_6, VAR_2,
   VAR_0,
   0);
 }


 FUNC_5(VAR_8->jack, 0,
       VAR_4 | VAR_3);

 FUNC_2(VAR_5,
      &VAR_8->jack_work,
      FUNC_1(100));

 return 0;
}
