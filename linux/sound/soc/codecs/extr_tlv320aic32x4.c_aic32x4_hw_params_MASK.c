
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct aic32x4_priv {scalar_t__ swapdacs; } ;


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
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct aic32x4_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_13,
     struct snd_pcm_hw_params *VAR_14,
     struct snd_soc_dai *VAR_15)
{
 struct snd_soc_component *VAR_16 = VAR_15->component;
 struct aic32x4_priv *VAR_17 = FUNC_4(VAR_16);
 u8 VAR_18 = 0;
 u8 VAR_19 = 0;

 FUNC_0(VAR_16, FUNC_2(VAR_14));

 switch (FUNC_3(VAR_14)) {
 case 16:
  VAR_18 |= (VAR_9 <<
       VAR_4);
  break;
 case 20:
  VAR_18 |= (VAR_10 <<
       VAR_4);
  break;
 case 24:
  VAR_18 |= (VAR_11 <<
       VAR_4);
  break;
 case 32:
  VAR_18 |= (VAR_12 <<
       VAR_4);
  break;
 }
 FUNC_5(VAR_16, VAR_2,
    VAR_3, VAR_18);

 if (FUNC_1(VAR_14) == 1) {
  VAR_19 = VAR_7 | VAR_5;
 } else {
  if (VAR_17->swapdacs)
   VAR_19 = VAR_7 | VAR_6;
  else
   VAR_19 = VAR_5 | VAR_8;
 }
 FUNC_5(VAR_16, VAR_0,
    VAR_1, VAR_19);

 return 0;
}
