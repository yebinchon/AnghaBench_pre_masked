
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct rt5668_priv {int jack_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct rt5668_priv* FUNC_3 (struct snd_soc_component*) ;
 unsigned int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_6 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_7 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_8 (struct snd_soc_dapm_context*) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_8,
  int VAR_9)
{
 struct rt5668_priv *VAR_10 = FUNC_3(VAR_8);
 struct snd_soc_dapm_context *VAR_11 =
  FUNC_2(VAR_8);
 unsigned int VAR_12, VAR_13;

 if (VAR_9) {
  FUNC_7(VAR_11, "CBJ Power");
  FUNC_8(VAR_11);
  FUNC_5(VAR_8, VAR_0,
   VAR_5, VAR_3);

  VAR_13 = 0;
  VAR_12 = FUNC_4(VAR_8, VAR_1)
   & VAR_2;
  while (VAR_12 == 0 && VAR_13 < 50) {
   FUNC_9(10000, 15000);
   VAR_12 = FUNC_4(VAR_8,
    VAR_1) & VAR_2;
   VAR_13++;
  }

  switch (VAR_12) {
  case 0x1:
  case 0x2:
   VAR_10->jack_type = VAR_7;
   FUNC_1(VAR_8, 1);
   break;
  default:
   VAR_10->jack_type = VAR_6;
  }

 } else {
  FUNC_1(VAR_8, 0);
  FUNC_5(VAR_8, VAR_0,
   VAR_5, VAR_4);
  FUNC_6(VAR_11, "CBJ Power");
  FUNC_8(VAR_11);

  VAR_10->jack_type = 0;
 }

 FUNC_0(VAR_8->dev, "jack_type = %d\n", VAR_10->jack_type);
 return VAR_10->jack_type;
}
