
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {struct snd_soc_card* card; } ;
struct snd_soc_card {int dev; } ;
struct cht_mc_private {struct snd_soc_jack jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 struct cht_mc_private* FUNC_1 (struct snd_soc_card*) ;
 int FUNC_2 (struct snd_soc_card*,char*,int,struct snd_soc_jack*,int *,int ) ;
 int FUNC_3 (struct snd_soc_component*,struct snd_soc_jack*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_6)
{
 struct snd_soc_card *VAR_7 = VAR_6->card;
 struct cht_mc_private *VAR_8 = FUNC_1(VAR_7);
 struct snd_soc_jack *VAR_9 = &VAR_8->jack;
 int VAR_10;
 int VAR_11;
 VAR_10 = VAR_4 | VAR_5 |
      VAR_0 | VAR_1 |
      VAR_2 | VAR_3;

 VAR_11 = FUNC_2(VAR_7, "Headset Jack", VAR_10,
        VAR_9, ((void*)0), 0);
 if (VAR_11) {
  FUNC_0(VAR_7->dev, "Headset Jack creation failed %d\n", VAR_11);
  return VAR_11;
 }

 return FUNC_3(VAR_6, VAR_9);
}
