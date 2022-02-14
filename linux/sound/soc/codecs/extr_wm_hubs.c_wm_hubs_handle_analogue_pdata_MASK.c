
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {int lineout1_se; int lineout2_se; int micb1_delay; int micb2_delay; } ;
struct snd_soc_component {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct wm_hubs_data* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

int FUNC_2(struct snd_soc_component *VAR_17,
      int VAR_18, int VAR_19,
      int VAR_20, int VAR_21,
      int VAR_22, int VAR_23,
      int VAR_24, int VAR_25,
      int VAR_26, int VAR_27)
{
 struct wm_hubs_data *VAR_28 = FUNC_0(VAR_17);

 VAR_28->lineout1_se = !VAR_18;
 VAR_28->lineout2_se = !VAR_19;
 VAR_28->micb1_delay = VAR_24;
 VAR_28->micb2_delay = VAR_25;

 if (!VAR_18)
  FUNC_1(VAR_17, VAR_11,
        VAR_7,
        VAR_7);
 if (!VAR_19)
  FUNC_1(VAR_17, VAR_12,
        VAR_9,
        VAR_9);

 if (!VAR_18 && !VAR_19)
  FUNC_1(VAR_17, VAR_1,
        VAR_10,
        VAR_10);

 if (VAR_20)
  FUNC_1(VAR_17, VAR_0,
        VAR_6, VAR_6);

 if (VAR_21)
  FUNC_1(VAR_17, VAR_0,
        VAR_8, VAR_8);

 FUNC_1(VAR_17, VAR_16,
       VAR_2 | VAR_4 |
       VAR_13 | VAR_14,
       VAR_22 << VAR_3 |
       VAR_23 << VAR_5 |
       VAR_26 |
       VAR_27 << VAR_15);

 return 0;
}
