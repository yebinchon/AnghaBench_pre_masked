
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5645_priv {int en_button_func; int jack_detect_work; } ;
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



 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct snd_soc_component*) ;
 struct rt5645_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_7 (struct snd_soc_component*,int ,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_11,
   enum snd_soc_bias_level VAR_12)
{
 struct rt5645_priv *VAR_13 = FUNC_5(VAR_11);

 switch (VAR_12) {
 case 129:
  if (128 == FUNC_4(VAR_11)) {
   FUNC_6(VAR_11, VAR_3,
    VAR_8 | VAR_7 |
    VAR_4 | VAR_9,
    VAR_8 | VAR_7 |
    VAR_4 | VAR_9);
   FUNC_0(10);
   FUNC_6(VAR_11, VAR_3,
    VAR_5 | VAR_6,
    VAR_5 | VAR_6);
   FUNC_6(VAR_11, VAR_2,
    VAR_1, VAR_1);
  }
  break;

 case 128:
  FUNC_6(VAR_11, VAR_3,
   VAR_8 | VAR_7 |
   VAR_4 | VAR_9,
   VAR_8 | VAR_7 |
   VAR_4 | VAR_9);
  FUNC_0(10);
  FUNC_6(VAR_11, VAR_3,
   VAR_5 | VAR_6,
   VAR_5 | VAR_6);
  if (FUNC_4(VAR_11) == 130) {
   FUNC_7(VAR_11, VAR_0, 0x1140);
   FUNC_2(40);
   if (VAR_13->en_button_func)
    FUNC_3(VAR_10,
     &VAR_13->jack_detect_work,
     FUNC_1(0));
  }
  break;

 case 130:
  FUNC_7(VAR_11, VAR_0, 0x1100);
  if (!VAR_13->en_button_func)
   FUNC_6(VAR_11, VAR_2,
     VAR_1, 0);
  FUNC_6(VAR_11, VAR_3,
    VAR_8 | VAR_7 |
    VAR_4 | VAR_9 |
    VAR_5 | VAR_6, 0x0);
  break;

 default:
  break;
 }

 return 0;
}
