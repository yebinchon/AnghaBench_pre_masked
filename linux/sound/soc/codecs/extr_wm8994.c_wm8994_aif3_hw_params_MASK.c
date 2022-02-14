
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {struct wm8994* wm8994; } ;
struct wm8994 {int type; } ;
struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 struct wm8994_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
     struct snd_pcm_hw_params *VAR_4,
     struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct wm8994_priv *VAR_7 = FUNC_1(VAR_6);
 struct wm8994 *VAR_8 = VAR_7->wm8994;
 int VAR_9;
 int VAR_10 = 0;

 switch (VAR_5->id) {
 case 3:
  switch (VAR_8->type) {
  case 129:
  case 128:
   VAR_9 = VAR_1;
   break;
  default:
   return 0;
  }
  break;
 default:
  return 0;
 }

 switch (FUNC_0(VAR_4)) {
 case 16:
  break;
 case 20:
  VAR_10 |= 0x20;
  break;
 case 24:
  VAR_10 |= 0x40;
  break;
 case 32:
  VAR_10 |= 0x60;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_2(VAR_6, VAR_9, VAR_2, VAR_10);
}
