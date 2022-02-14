
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm5100_priv {int* out_ena; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_dapm_type { ____Placeholder_snd_soc_dapm_type } snd_soc_dapm_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 struct wm5100_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_4,
    enum snd_soc_dapm_type VAR_5, int VAR_6)
{
 struct wm5100_priv *VAR_7 = FUNC_1(VAR_4);
 u16 VAR_8, VAR_9, VAR_10;


 if (VAR_7->out_ena[0]) {
  VAR_9 = FUNC_2(VAR_4, VAR_0);
  for (VAR_10 = 0; VAR_10 < 200; VAR_10++) {
   VAR_8 = FUNC_2(VAR_4, VAR_2);
   if (VAR_8 == VAR_9) {
    VAR_7->out_ena[0] = 0;
    break;
   }
  }
  if (VAR_10 == 200) {
   FUNC_0(VAR_4->dev, "Timeout waiting for OUTPUT1 %x\n",
    VAR_9);
  }
 }

 if (VAR_7->out_ena[1]) {
  VAR_9 = FUNC_2(VAR_4, VAR_1);
  for (VAR_10 = 0; VAR_10 < 200; VAR_10++) {
   VAR_8 = FUNC_2(VAR_4, VAR_3);
   if (VAR_8 == VAR_9) {
    VAR_7->out_ena[1] = 0;
    break;
   }
  }
  if (VAR_10 == 200) {
   FUNC_0(VAR_4->dev, "Timeout waiting for OUTPUT2 %x\n",
    VAR_9);
  }
 }
}
