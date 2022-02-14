
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct rt5670_priv {int jack_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct rt5670_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*,int ,int) ;
 int FUNC_6 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_7 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_8 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_16, int VAR_17)
{
 int VAR_18;
 struct snd_soc_dapm_context *VAR_19 = FUNC_1(VAR_16);
 struct rt5670_priv *VAR_20 = FUNC_2(VAR_16);

 if (VAR_17) {
  FUNC_7(VAR_19, "Mic Det Power");
  FUNC_8(VAR_19);
  FUNC_4(VAR_16, VAR_6, 0x4, 0x0);
  FUNC_4(VAR_16, VAR_4,
   VAR_1 | VAR_2,
   VAR_2);
  FUNC_5(VAR_16, VAR_10, 0x0004);
  FUNC_4(VAR_16, VAR_9,
   VAR_8, VAR_7);
  FUNC_4(VAR_16, VAR_3,
   VAR_0, VAR_0);
  FUNC_5(VAR_16, VAR_13, 0x00f0);
  FUNC_4(VAR_16, VAR_4,
   VAR_2, VAR_2);
  FUNC_4(VAR_16, VAR_4,
   VAR_2, 0);
  FUNC_0(300);
  VAR_18 = FUNC_3(VAR_16, VAR_5) & 0x7;
  if (VAR_18 == 0x1 || VAR_18 == 0x2) {
   VAR_20->jack_type = VAR_15;

   FUNC_4(VAR_16, VAR_12, 0x8, 0x8);
   FUNC_4(VAR_16, VAR_11, 0x40, 0x40);
   FUNC_3(VAR_16, VAR_11);
  } else {
   FUNC_4(VAR_16, VAR_6, 0x4, 0x4);
   VAR_20->jack_type = VAR_14;
   FUNC_6(VAR_19, "Mic Det Power");
   FUNC_8(VAR_19);
  }
 } else {
  FUNC_4(VAR_16, VAR_12, 0x8, 0x0);
  FUNC_4(VAR_16, VAR_6, 0x4, 0x4);
  VAR_20->jack_type = 0;
  FUNC_6(VAR_19, "Mic Det Power");
  FUNC_8(VAR_19);
 }

 return VAR_20->jack_type;
}
