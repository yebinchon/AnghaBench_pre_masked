
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct snd_soc_tplg_widget_events {scalar_t__ type; int * event_handler; } ;
struct snd_soc_dapm_widget {int * event; } ;


 int VAR_0 ;

int FUNC_0(struct snd_soc_dapm_widget *VAR_1,
  const struct snd_soc_tplg_widget_events *VAR_2,
  int VAR_3, u16 VAR_4)
{
 int VAR_5;

 VAR_1->event = ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_4 == VAR_2[VAR_5].type) {


   VAR_1->event = VAR_2[VAR_5].event_handler;
   return 0;
  }
 }


 return -VAR_0;
}
