
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {int hph_mode; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wcd9335_codec* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct wcd9335_codec*,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_4,
          struct snd_kcontrol *VAR_5,
          int VAR_6)
{
 struct snd_soc_component *VAR_7 = FUNC_2(VAR_4->dapm);
 struct wcd9335_codec *VAR_8 = FUNC_0(VAR_7->dev);
 int VAR_9 = VAR_8->hph_mode;

 switch (VAR_6) {
 case 128:
  break;
 case 130:




  FUNC_3(7000, 7100);

  FUNC_4(VAR_8, VAR_9, VAR_6);
  FUNC_1(VAR_7,
     VAR_0,
     VAR_3,
     VAR_2);


  if ((FUNC_0(VAR_7,
     VAR_1)) &
     VAR_3)
   FUNC_1(VAR_7,
         VAR_1,
         VAR_3,
         VAR_2);

  break;
 case 129:
  FUNC_4(VAR_8, VAR_9, VAR_6);
  break;
 case 131:



  FUNC_3(5000, 5500);
  break;
 };

 return 0;
}
