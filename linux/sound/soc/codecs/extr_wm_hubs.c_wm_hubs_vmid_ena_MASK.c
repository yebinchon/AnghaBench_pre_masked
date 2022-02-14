
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_hubs_data {scalar_t__ lineout2_se; scalar_t__ lineout1_se; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wm_hubs_data* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

void FUNC_2(struct snd_soc_component *VAR_5)
{
 struct wm_hubs_data *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = 0;

 if (VAR_6->lineout1_se)
  VAR_7 |= VAR_0 | VAR_1;

 if (VAR_6->lineout2_se)
  VAR_7 |= VAR_2 | VAR_3;


 FUNC_1(VAR_5, VAR_4, VAR_7, VAR_7);
}
