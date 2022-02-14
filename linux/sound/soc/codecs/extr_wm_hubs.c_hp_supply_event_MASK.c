
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {int hp_startup_mode; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ) ;
 struct wm_hubs_data* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_8,
      struct snd_kcontrol *VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 = FUNC_3(VAR_8->dapm);
 struct wm_hubs_data *VAR_12 = FUNC_1(VAR_11);

 switch (VAR_10) {
 case 128:
  switch (VAR_12->hp_startup_mode) {
  case 0:
   break;
  case 1:

   FUNC_2(VAR_11, VAR_7,
         VAR_4 |
         VAR_6,
         VAR_4 |
         VAR_6);


   FUNC_2(VAR_11, VAR_0,
         VAR_3 |
         VAR_5,
         VAR_3 |
         VAR_5);
   break;
  default:
   FUNC_0(VAR_11->dev, "Unknown HP startup mode %d\n",
    VAR_12->hp_startup_mode);
   break;
  }
  break;

 case 129:
  FUNC_2(VAR_11, VAR_1,
        VAR_2, 0);
  break;
 }

 return 0;
}
