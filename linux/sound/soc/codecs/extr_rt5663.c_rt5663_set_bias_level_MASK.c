
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5663_priv {int jack_type; int codec_ver; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;




 struct rt5663_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_24,
   enum snd_soc_bias_level VAR_25)
{
 struct rt5663_priv *VAR_26 = FUNC_0(VAR_24);

 switch (VAR_25) {
 case 130:
  FUNC_1(VAR_24, VAR_8,
   VAR_13 | VAR_15,
   VAR_12 | VAR_14);
  break;

 case 129:
  if (VAR_26->codec_ver == VAR_0) {
   FUNC_1(VAR_24, VAR_4,
    VAR_3,
    VAR_2);
   FUNC_1(VAR_24, VAR_22,
    VAR_7 |
    VAR_11,
    VAR_5 |
    VAR_10);
  }
  break;

 case 128:
  if (VAR_26->codec_ver == VAR_0)
   FUNC_1(VAR_24, VAR_4,
    VAR_3,
    VAR_1);
  FUNC_1(VAR_24, VAR_8,
   VAR_19 | VAR_21 |
   VAR_13 | VAR_15 |
   VAR_17, VAR_18 |
   VAR_20 | VAR_16);
  FUNC_2(10000, 10005);
  if (VAR_26->codec_ver == VAR_0) {
   FUNC_1(VAR_24, VAR_22,
    VAR_7 |
    VAR_11,
    VAR_6 |
    VAR_9);
  }
  break;

 case 131:
  if (VAR_26->jack_type != VAR_23)
   FUNC_1(VAR_24,
    VAR_8,
    VAR_19 | VAR_21 |
    VAR_12 | VAR_14 |
    VAR_17, 0);
  else
   FUNC_1(VAR_24,
    VAR_8,
    VAR_13 | VAR_15,
    VAR_12 | VAR_14);
  break;

 default:
  break;
 }

 return 0;
}
