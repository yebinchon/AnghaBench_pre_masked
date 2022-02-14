
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct rt5659_priv {scalar_t__ jack_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_soc_component*,int) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct rt5659_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_7 (struct snd_soc_component*,int ,int) ;
 int FUNC_8 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_9 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_10 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_8, int VAR_9)
{
 struct snd_soc_dapm_context *VAR_10 = FUNC_3(VAR_8);
 int VAR_11, VAR_12 = 0, VAR_13[5] = {300, 150, 100, 50, 30};
 int VAR_14;

 struct rt5659_priv *VAR_15 = FUNC_4(VAR_8);

 if (VAR_9) {
  FUNC_9(VAR_10,
   "Mic Det Power");
  FUNC_10(VAR_10);
  VAR_14 = FUNC_5(VAR_8, VAR_2);

  FUNC_6(VAR_8, VAR_2,
   VAR_5 | VAR_4,
   VAR_5 | VAR_4);
  FUNC_1(20);
  FUNC_6(VAR_8, VAR_2,
   VAR_3, VAR_3);

  FUNC_7(VAR_8, VAR_1, 0x4160);
  FUNC_6(VAR_8, VAR_0,
   0x20, 0x0);
  FUNC_1(20);
  FUNC_6(VAR_8, VAR_0,
   0x20, 0x20);

  while (VAR_12 < 5) {
   FUNC_1(VAR_13[VAR_12]);
   VAR_11 = FUNC_5(VAR_8, VAR_1) & 0x0003;
   VAR_12++;
   if (VAR_11 == 0x1 || VAR_11 == 0x2 || VAR_11 == 0x3)
    break;
  }

  switch (VAR_11) {
  case 1:
   VAR_15->jack_type = VAR_7;
   FUNC_2(VAR_8, 1);
   break;
  default:
   FUNC_7(VAR_8, VAR_2, VAR_14);
   VAR_15->jack_type = VAR_6;
   FUNC_8(VAR_10, "Mic Det Power");
   FUNC_10(VAR_10);
   break;
  }
 } else {
  FUNC_8(VAR_10, "Mic Det Power");
  FUNC_10(VAR_10);
  if (VAR_15->jack_type == VAR_7)
   FUNC_2(VAR_8, 0);
  VAR_15->jack_type = 0;
 }

 FUNC_0(VAR_8->dev, "jack_type = %d\n", VAR_15->jack_type);
 return VAR_15->jack_type;
}
