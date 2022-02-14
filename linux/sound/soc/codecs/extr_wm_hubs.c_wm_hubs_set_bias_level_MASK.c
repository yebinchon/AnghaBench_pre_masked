
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {int lineout2p_ena; int lineout2_se; int lineout2n_ena; int lineout1p_ena; int lineout1_se; int lineout1n_ena; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wm_hubs_data* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

void FUNC_2(struct snd_soc_component *VAR_7,
       enum snd_soc_bias_level VAR_8)
{
 struct wm_hubs_data *VAR_9 = FUNC_0(VAR_7);
 int VAR_10, VAR_11;

 switch (VAR_8) {
 case 128:

  FUNC_1(VAR_7, VAR_1,
        VAR_0, VAR_0);
  break;

 case 129:

  VAR_11 = 0;
  VAR_10 = 0;

  if (VAR_9->lineout1_se)
   VAR_10 |= VAR_2 | VAR_3;

  if (VAR_9->lineout2_se)
   VAR_10 |= VAR_4 | VAR_5;

  if (VAR_9->lineout1_se && VAR_9->lineout1n_ena)
   VAR_11 |= VAR_2;

  if (VAR_9->lineout1_se && VAR_9->lineout1p_ena)
   VAR_11 |= VAR_3;

  if (VAR_9->lineout2_se && VAR_9->lineout2n_ena)
   VAR_11 |= VAR_4;

  if (VAR_9->lineout2_se && VAR_9->lineout2p_ena)
   VAR_11 |= VAR_5;

  FUNC_1(VAR_7, VAR_6,
        VAR_10, VAR_11);


  FUNC_1(VAR_7, VAR_1,
        VAR_0, 0);
  break;

 default:
  break;
 }
}
