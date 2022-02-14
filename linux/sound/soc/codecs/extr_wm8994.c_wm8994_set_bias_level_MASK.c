
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {int * cur_fw; struct wm8994* wm8994; } ;
struct wm8994 {int type; int revision; } ;
struct snd_soc_component {int dummy; } ;
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
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int const FUNC_2 (struct snd_soc_component*) ;
 struct wm8994_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_9,
     enum snd_soc_bias_level VAR_10)
{
 struct wm8994_priv *VAR_11 = FUNC_3(VAR_9);
 struct wm8994 *VAR_12 = VAR_11->wm8994;

 FUNC_5(VAR_9, VAR_10);

 switch (VAR_10) {
 case 132:
  break;

 case 131:

  switch (VAR_12->type) {
  case 128:
  case 129:
   FUNC_4(VAR_9, VAR_4,
         VAR_2, 0);
   FUNC_4(VAR_9, VAR_5,
         VAR_3, 0);
   break;
  default:
   break;
  }

  if (FUNC_2(VAR_9) == 130)
   FUNC_1(VAR_9);
  break;

 case 130:
  if (FUNC_2(VAR_9) == 133) {
   switch (VAR_12->type) {
   case 128:
    if (VAR_12->revision == 0) {

     FUNC_4(VAR_9,
           VAR_0,
           VAR_1,
           VAR_1);
    }
    break;

   default:
    break;
   }


   FUNC_4(VAR_9, VAR_6,
         VAR_7 |
         VAR_8,
         VAR_7 |
         VAR_8);
  }

  if (FUNC_2(VAR_9) == 131)
   FUNC_0(VAR_9);


  switch (VAR_12->type) {
  case 128:
  case 129:
   FUNC_4(VAR_9, VAR_4,
         VAR_2,
         VAR_2);
   FUNC_4(VAR_9, VAR_5,
         VAR_3,
         VAR_3);
   break;
  default:
   break;
  }
  break;

 case 133:
  if (FUNC_2(VAR_9) == 130)
   VAR_11->cur_fw = ((void*)0);
  break;
 }

 return 0;
}
