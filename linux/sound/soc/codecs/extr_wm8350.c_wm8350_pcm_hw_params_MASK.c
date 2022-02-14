
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350_data {struct wm8350* wm8350; } ;
struct wm8350 {int dummy; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct wm8350_data* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 int FUNC_5 (struct wm8350*,int ,int ) ;
 int FUNC_6 (struct wm8350*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5,
    struct snd_pcm_hw_params *VAR_6,
    struct snd_soc_dai *VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_7->component;
 struct wm8350_data *VAR_9 = FUNC_2(VAR_8);
 struct wm8350 *VAR_10 = VAR_9->wm8350;
 u16 VAR_11 = FUNC_3(VAR_8, VAR_2) &
     ~VAR_1;


 switch (FUNC_1(VAR_6)) {
 case 16:
  break;
 case 20:
  VAR_11 |= 0x1 << 10;
  break;
 case 24:
  VAR_11 |= 0x2 << 10;
  break;
 case 32:
  VAR_11 |= 0x3 << 10;
  break;
 }

 FUNC_4(VAR_8, VAR_2, VAR_11);




 if (VAR_5->stream == VAR_0) {
  if (FUNC_0(VAR_6) < 24000)
   FUNC_6(VAR_10, VAR_3,
     VAR_4);
  else
   FUNC_5(VAR_10, VAR_3,
       VAR_4);
 }

 return 0;
}
