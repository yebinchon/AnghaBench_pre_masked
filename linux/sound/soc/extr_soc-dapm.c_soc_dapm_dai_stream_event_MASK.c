
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {scalar_t__ id; int active; unsigned int is_ep; } ;
struct snd_soc_dai {struct snd_soc_dapm_widget* capture_widget; struct snd_soc_dapm_widget* playback_widget; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;






 int FUNC_0 (struct snd_soc_dapm_widget*,char*) ;
 int FUNC_1 (struct snd_soc_dapm_widget*) ;
 int FUNC_2 (struct snd_soc_dapm_widget*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct snd_soc_dai *VAR_4, int VAR_5,
 int VAR_6)
{
 struct snd_soc_dapm_widget *VAR_7;
 unsigned int VAR_8;

 if (VAR_5 == VAR_0)
  VAR_7 = VAR_4->playback_widget;
 else
  VAR_7 = VAR_4->capture_widget;

 if (VAR_7) {
  FUNC_0(VAR_7, "stream event");

  if (VAR_7->id == VAR_3) {
   VAR_8 = VAR_2;
   FUNC_1(VAR_7);
  } else {
   VAR_8 = VAR_1;
   FUNC_2(VAR_7);
  }

  switch (VAR_6) {
  case 130:
   VAR_7->active = 1;
   VAR_7->is_ep = VAR_8;
   break;
  case 129:
   VAR_7->active = 0;
   VAR_7->is_ep = 0;
   break;
  case 128:
  case 131:
  case 133:
  case 132:
   break;
  }
 }
}
