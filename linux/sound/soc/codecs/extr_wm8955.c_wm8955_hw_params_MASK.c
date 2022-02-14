
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8955_priv {int fs; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct wm8955_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_8,
       struct snd_pcm_hw_params *VAR_9,
       struct snd_soc_dai *VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_10->component;
 struct wm8955_priv *VAR_12 = FUNC_2(VAR_11);
 int VAR_13;
 int VAR_14;

 switch (FUNC_1(VAR_9)) {
 case 16:
  VAR_14 = 0;
  break;
 case 20:
  VAR_14 = 0x4;
  break;
 case 24:
  VAR_14 = 0x8;
  break;
 case 32:
  VAR_14 = 0xc;
  break;
 default:
  return -VAR_0;
 }
 FUNC_4(VAR_11, VAR_1,
       VAR_7, VAR_14);

 VAR_12->fs = FUNC_0(VAR_9);
 FUNC_6(VAR_11);




 VAR_13 = FUNC_3(VAR_11, VAR_6);
 if (VAR_13 < 0)
  return VAR_13;
 if (VAR_13 & VAR_3) {
  FUNC_4(VAR_11, VAR_6,
        VAR_3, 0);
  FUNC_4(VAR_11, VAR_2,
        VAR_5 | VAR_4, 0);

  FUNC_5(VAR_11);
 }

 return 0;
}
