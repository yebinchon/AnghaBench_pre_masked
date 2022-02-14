
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1273_priv {int mode; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int stream; int runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int) ;
 struct wl1273_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5,
     struct snd_soc_dai *VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_6->component;
 struct wl1273_priv *VAR_8 = FUNC_2(VAR_7);

 switch (VAR_8->mode) {
 case 130:
  FUNC_1(VAR_5->runtime,
          VAR_2, 8000);
  FUNC_1(VAR_5->runtime,
          VAR_1, 1);
  break;
 case 129:
  if (VAR_5->stream == VAR_4) {
   FUNC_0("Cannot play in RX mode.\n");
   return -VAR_0;
  }
  break;
 case 128:
  if (VAR_5->stream == VAR_3) {
   FUNC_0("Cannot capture in TX mode.\n");
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
  break;
 }

 return 0;
}
