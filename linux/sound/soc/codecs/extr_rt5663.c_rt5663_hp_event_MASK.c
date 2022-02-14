
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct rt5663_priv {int codec_ver; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;


 struct rt5663_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_21,
 struct snd_kcontrol *VAR_22, int VAR_23)
{
 struct snd_soc_component *VAR_24 = FUNC_3(VAR_21->dapm);
 struct rt5663_priv *VAR_25 = FUNC_0(VAR_24);

 switch (VAR_23) {
 case 129:
  if (VAR_25->codec_ver == VAR_0) {
   FUNC_1(VAR_24, VAR_9,
    VAR_19, VAR_18);
   FUNC_1(VAR_24, VAR_11,
    VAR_12,
    VAR_14);
  } else {
   FUNC_1(VAR_24,
    VAR_4, 0x3e0e, 0x3a0a);
   FUNC_2(VAR_24, VAR_6, 0x3003);
   FUNC_1(VAR_24, VAR_9,
    VAR_17, VAR_15);
   FUNC_2(VAR_24, VAR_10, 0x1371);
   FUNC_2(VAR_24, VAR_8, 0xabba);
   FUNC_2(VAR_24, VAR_2, 0x2224);
   FUNC_2(VAR_24, VAR_1, 0x7766);
   FUNC_2(VAR_24, VAR_8, 0xafaa);
   FUNC_2(VAR_24, VAR_3, 0x7777);
   FUNC_1(VAR_24, VAR_20, 0x8000,
    0x8000);
   FUNC_1(VAR_24, VAR_5, 0x3000,
    0x3000);
   FUNC_1(VAR_24,
    VAR_7, 0x00c0, 0x0080);
  }
  break;

 case 128:
  if (VAR_25->codec_ver == VAR_0) {
   FUNC_1(VAR_24, VAR_11,
    VAR_12,
    VAR_13);
  } else {
   FUNC_1(VAR_24, VAR_5, 0x3000, 0x0);
   FUNC_1(VAR_24, VAR_9,
    VAR_17, VAR_16);
   FUNC_1(VAR_24,
    VAR_4, 0x3e0e, 0);
   FUNC_1(VAR_24,
    VAR_7, 0x00c0, 0);
  }
  break;

 default:
  return 0;
 }

 return 0;
}
